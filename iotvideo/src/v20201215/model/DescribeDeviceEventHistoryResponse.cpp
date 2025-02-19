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

#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceEventHistoryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeDeviceEventHistoryResponse::DescribeDeviceEventHistoryResponse() :
    m_contextHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_listoverHasBeenSet(false),
    m_eventHistoryHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceEventHistoryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
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

    if (rsp.HasMember("Listover") && !rsp["Listover"].IsNull())
    {
        if (!rsp["Listover"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Listover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listover = rsp["Listover"].GetBool();
        m_listoverHasBeenSet = true;
    }

    if (rsp.HasMember("EventHistory") && !rsp["EventHistory"].IsNull())
    {
        if (!rsp["EventHistory"].IsArray())
            return CoreInternalOutcome(Error("response `EventHistory` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EventHistory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventHistoryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventHistory.push_back(item);
        }
        m_eventHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDeviceEventHistoryResponse::GetContext() const
{
    return m_context;
}

bool DescribeDeviceEventHistoryResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

uint64_t DescribeDeviceEventHistoryResponse::GetTotal() const
{
    return m_total;
}

bool DescribeDeviceEventHistoryResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

bool DescribeDeviceEventHistoryResponse::GetListover() const
{
    return m_listover;
}

bool DescribeDeviceEventHistoryResponse::ListoverHasBeenSet() const
{
    return m_listoverHasBeenSet;
}

vector<EventHistoryItem> DescribeDeviceEventHistoryResponse::GetEventHistory() const
{
    return m_eventHistory;
}

bool DescribeDeviceEventHistoryResponse::EventHistoryHasBeenSet() const
{
    return m_eventHistoryHasBeenSet;
}


