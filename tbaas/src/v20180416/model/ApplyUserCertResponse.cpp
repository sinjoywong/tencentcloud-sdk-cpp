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

#include <tencentcloud/tbaas/v20180416/model/ApplyUserCertResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

ApplyUserCertResponse::ApplyUserCertResponse() :
    m_certIdHasBeenSet(false),
    m_certDnHasBeenSet(false)
{
}

CoreInternalOutcome ApplyUserCertResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CertId") && !rsp["CertId"].IsNull())
    {
        if (!rsp["CertId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CertId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certId = rsp["CertId"].GetUint64();
        m_certIdHasBeenSet = true;
    }

    if (rsp.HasMember("CertDn") && !rsp["CertDn"].IsNull())
    {
        if (!rsp["CertDn"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertDn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certDn = string(rsp["CertDn"].GetString());
        m_certDnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t ApplyUserCertResponse::GetCertId() const
{
    return m_certId;
}

bool ApplyUserCertResponse::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string ApplyUserCertResponse::GetCertDn() const
{
    return m_certDn;
}

bool ApplyUserCertResponse::CertDnHasBeenSet() const
{
    return m_certDnHasBeenSet;
}


