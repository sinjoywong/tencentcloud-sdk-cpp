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

#include <tencentcloud/dayu/v20180709/model/DescribeIpUnBlockListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeIpUnBlockListResponse::DescribeIpUnBlockListResponse() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_listHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIpUnBlockListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BeginTime") && !rsp["BeginTime"].IsNull())
    {
        if (!rsp["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(rsp["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpUnBlockData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeIpUnBlockListResponse::GetBeginTime() const
{
    return m_beginTime;
}

bool DescribeIpUnBlockListResponse::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeIpUnBlockListResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeIpUnBlockListResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<IpUnBlockData> DescribeIpUnBlockListResponse::GetList() const
{
    return m_list;
}

bool DescribeIpUnBlockListResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

uint64_t DescribeIpUnBlockListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeIpUnBlockListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}


