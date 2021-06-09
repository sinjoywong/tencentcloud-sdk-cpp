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

#include <tencentcloud/ssm/v20190923/model/GetSecretValueResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

GetSecretValueResponse::GetSecretValueResponse() :
    m_secretNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_secretBinaryHasBeenSet(false),
    m_secretStringHasBeenSet(false)
{
}

CoreInternalOutcome GetSecretValueResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SecretName") && !rsp["SecretName"].IsNull())
    {
        if (!rsp["SecretName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(rsp["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (rsp.HasMember("VersionId") && !rsp["VersionId"].IsNull())
    {
        if (!rsp["VersionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(rsp["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (rsp.HasMember("SecretBinary") && !rsp["SecretBinary"].IsNull())
    {
        if (!rsp["SecretBinary"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretBinary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretBinary = string(rsp["SecretBinary"].GetString());
        m_secretBinaryHasBeenSet = true;
    }

    if (rsp.HasMember("SecretString") && !rsp["SecretString"].IsNull())
    {
        if (!rsp["SecretString"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretString = string(rsp["SecretString"].GetString());
        m_secretStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetSecretValueResponse::GetSecretName() const
{
    return m_secretName;
}

bool GetSecretValueResponse::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string GetSecretValueResponse::GetVersionId() const
{
    return m_versionId;
}

bool GetSecretValueResponse::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string GetSecretValueResponse::GetSecretBinary() const
{
    return m_secretBinary;
}

bool GetSecretValueResponse::SecretBinaryHasBeenSet() const
{
    return m_secretBinaryHasBeenSet;
}

string GetSecretValueResponse::GetSecretString() const
{
    return m_secretString;
}

bool GetSecretValueResponse::SecretStringHasBeenSet() const
{
    return m_secretStringHasBeenSet;
}


