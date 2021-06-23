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
#include <tencentcloud/kms/v20190118/model/ListKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/ListKeysResponse.h>
#include <iostream>
#include <string>

using namespace TencentCloud;
using namespace TencentCloud::Kms::V20190118;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

static std::string GetEnv(const std::string &env)
{
    char* value = getenv(env.c_str());
    if (value == nullptr) {
        return "";
    }
    return std::string(value);
}

int main()
{
    TencentCloud::InitAPI();

    // use the sdk

   // string secretId = "<your secret id>";
    //string secretKey = "<your secret key>";
    string secretId = GetEnv("ENV_SecretId");
    string secretKey = GetEnv("ENV_SecretKey");
    Credential cred = Credential(secretId, secretKey);

    HttpProfile httpProfile = HttpProfile();
    httpProfile.SetEndpoint("kms.api3.yfm4-v6-iaas.tcecloud.fsphere.cn");
    httpProfile.SetReqTimeout(5);
    httpProfile.SetProtocol(HttpProfile::Scheme::HTTP);

    ClientProfile clientProfile = ClientProfile(httpProfile);

    ListKeysRequest req = ListKeysRequest();

    KmsClient kms_client = KmsClient(cred, "chongqing", clientProfile);

    auto outcome = kms_client.ListKeys(req);
    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }
   ListKeysResponse rsp = outcome.GetResult();
  if (rsp.KeysHasBeenSet() && rsp.TotalCountHasBeenSet()) {
    std::vector<Key> key_list = rsp.GetKeys();
    uint64_t key_num = rsp.GetTotalCount();
    cout << "key_num = " << key_num << endl;
    for (int i = 0; i < key_num; i++){
        keyid = key_list[i].GetKeyId();
        cout << "Get KMS CMK keyid=" << keyid << endl;
    }
    return 0;
  }
    TencentCloud::ShutdownAPI();

    return 0;
}
