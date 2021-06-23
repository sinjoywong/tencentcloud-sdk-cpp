/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/NetworkProxy.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/kms/v20190118/KmsClient.h>
#include <tencentcloud/kms/v20190118/model/CreateKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/CreateKeyResponse.h>
#include <tencentcloud/sts/v20180813/StsClient.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleResponse.h>
#include <tencentcloud/sts/v20180813/model/Credentials.h>
#include <iostream>
#include <string>

using namespace TencentCloud;
using namespace TencentCloud::Kms::V20190118;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace TencentCloud::Sts::V20180813;
using namespace TencentCloud::Sts::V20180813::Model;
using namespace std;

static std::string GetEnv(const std::string &env)
{
    char* value = getenv(env.c_str());
    if (value == nullptr) {
        return "";
    }
    return std::string(value);
}

static int assumeRole(Credentials &kms_cred){
  string secretId = GetEnv("ENV_SecretId");
  string secretKey = GetEnv("ENV_SecretKey");
  std::string uin = "100004603072";
  std::string default_sts_role = "CSP_KmsRole";
    //std::string rolename = "qcs::cam::uin/"+ uin + ":roleName/" + default_sts_role;
  std::string rolename = "qcs::cam::uin/"+ uin + ":role/tencentcloudServiceRoleName/" + default_sts_role;
  std::string default_sts_endpoint = "sts.api3.yfm4-v6-iaas.tcecloud.fsphere.cn";
  std::string default_sts_session = "csp_sts_session";
  std::string default_kms_region = "chongqing";

  Credential cred = Credential(secretId, secretKey);
  HttpProfile httpProfile = HttpProfile();
  httpProfile.SetEndpoint(default_sts_endpoint);
  httpProfile.SetProtocol(HttpProfile::Scheme::HTTP);

  ClientProfile clientProfile = ClientProfile(httpProfile);

  AssumeRoleRequest req = AssumeRoleRequest();
  req.SetRoleArn(rolename);
  req.SetRoleSessionName(default_sts_session);

  StsClient sts_client = StsClient(cred, default_kms_region, clientProfile);

  auto outcome = sts_client.AssumeRole(req);
  if (!outcome.IsSuccess()) {
    cout <<"cam_sts_assume_role failed:" <<  outcome.GetError().PrintAll() << endl;
    return -1;
  }

  AssumeRoleResponse rsp = outcome.GetResult();
  if (rsp.CredentialsHasBeenSet()) {
    kms_cred = rsp.GetCredentials();
    cout << "KMS-STS tmp token=" << kms_cred.GetToken() << endl;
    cout << "KMS-STS tmp id=" << kms_cred.GetTmpSecretId() << endl;
    return 0;
  }
  cout << "STS API: Invalid STS tmp token response ReqId=" << rsp.GetRequestId() << endl;
  return -1;
}

static int createKeyInKMS(Credentials &kms_cred){
     TencentCloud::InitAPI();
/*
    string secretId = GetEnv("ENV_SecretId");
    string secretKey = GetEnv("ENV_SecretKey");
    Credential cred = Credential(secretId, secretKey);
    */

    HttpProfile httpProfile = HttpProfile();
    httpProfile.SetEndpoint("kms.api3.yfm4-v6-iaas.tcecloud.fsphere.cn");
    httpProfile.SetReqTimeout(5);
    httpProfile.SetProtocol(HttpProfile::Scheme::HTTP);

    ClientProfile clientProfile = ClientProfile(httpProfile);

    CreateKeyRequest req = CreateKeyRequest();
    req.SetAlias("KMS-CSP");
    req.SetDescription("product cmk for csp");

    std::string ak = kms_cred.GetTmpSecretId();
    std::string sk = kms_cred.GetTmpSecretKey();
    std::string token = kms_cred.GetToken();
    Credential cred = Credential(ak, sk, token);
    KmsClient kms_client = KmsClient(cred, "chongqing", clientProfile);

    auto outcome = kms_client.CreateKey(req);
    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }
    CreateKeyResponse rsp = outcome.GetResult();
    cout<<"RequestId="<<rsp.GetRequestId()<<endl;
    cout<<"keyId="<<rsp.GetKeyId()<<endl;
    cout << "GetAlias" << rsp.GetAlias() << endl;
    cout << "KeyIdHasBeenSet=" << rsp.KeyIdHasBeenSet() << endl;

    TencentCloud::ShutdownAPI();
}

int main()
{
    Credentials kms_cred;
    assumeRole(kms_cred);
    createKeyInKMS(kms_cred);
   
    return 0;
}
