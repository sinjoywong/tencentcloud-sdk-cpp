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

#include <tencentcloud/mna/v20210119/model/CreateQosResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

CreateQosResponse::CreateQosResponse() :
    m_sessionIdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome CreateQosResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = rsp["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateQosResponse::GetSessionId() const
{
    return m_sessionId;
}

bool CreateQosResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

uint64_t CreateQosResponse::GetDuration() const
{
    return m_duration;
}

bool CreateQosResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}


