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

#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeRollbackTimeRangeResponse::DescribeRollbackTimeRangeResponse() :
    m_timeRangeStartHasBeenSet(false),
    m_timeRangeEndHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRollbackTimeRangeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TimeRangeStart") && !rsp["TimeRangeStart"].IsNull())
    {
        if (!rsp["TimeRangeStart"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimeRangeStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeStart = string(rsp["TimeRangeStart"].GetString());
        m_timeRangeStartHasBeenSet = true;
    }

    if (rsp.HasMember("TimeRangeEnd") && !rsp["TimeRangeEnd"].IsNull())
    {
        if (!rsp["TimeRangeEnd"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimeRangeEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeEnd = string(rsp["TimeRangeEnd"].GetString());
        m_timeRangeEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeRollbackTimeRangeResponse::GetTimeRangeStart() const
{
    return m_timeRangeStart;
}

bool DescribeRollbackTimeRangeResponse::TimeRangeStartHasBeenSet() const
{
    return m_timeRangeStartHasBeenSet;
}

string DescribeRollbackTimeRangeResponse::GetTimeRangeEnd() const
{
    return m_timeRangeEnd;
}

bool DescribeRollbackTimeRangeResponse::TimeRangeEndHasBeenSet() const
{
    return m_timeRangeEndHasBeenSet;
}


