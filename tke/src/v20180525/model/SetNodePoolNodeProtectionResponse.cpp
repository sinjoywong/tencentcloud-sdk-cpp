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

#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SetNodePoolNodeProtectionResponse::SetNodePoolNodeProtectionResponse() :
    m_succeedInstanceIdsHasBeenSet(false),
    m_failedInstanceIdsHasBeenSet(false)
{
}

CoreInternalOutcome SetNodePoolNodeProtectionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SucceedInstanceIds") && !rsp["SucceedInstanceIds"].IsNull())
    {
        if (!rsp["SucceedInstanceIds"].IsArray())
            return CoreInternalOutcome(Error("response `SucceedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucceedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_succeedInstanceIds.push_back((*itr).GetString());
        }
        m_succeedInstanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("FailedInstanceIds") && !rsp["FailedInstanceIds"].IsNull())
    {
        if (!rsp["FailedInstanceIds"].IsArray())
            return CoreInternalOutcome(Error("response `FailedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedInstanceIds.push_back((*itr).GetString());
        }
        m_failedInstanceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> SetNodePoolNodeProtectionResponse::GetSucceedInstanceIds() const
{
    return m_succeedInstanceIds;
}

bool SetNodePoolNodeProtectionResponse::SucceedInstanceIdsHasBeenSet() const
{
    return m_succeedInstanceIdsHasBeenSet;
}

vector<string> SetNodePoolNodeProtectionResponse::GetFailedInstanceIds() const
{
    return m_failedInstanceIds;
}

bool SetNodePoolNodeProtectionResponse::FailedInstanceIdsHasBeenSet() const
{
    return m_failedInstanceIdsHasBeenSet;
}


