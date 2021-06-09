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

#include <tencentcloud/ams/v20200608/model/DescribeAudioStatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

DescribeAudioStatResponse::DescribeAudioStatResponse() :
    m_overviewHasBeenSet(false),
    m_trendCountHasBeenSet(false),
    m_evilCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAudioStatResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Overview") && !rsp["Overview"].IsNull())
    {
        if (!rsp["Overview"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Overview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overview.Deserialize(rsp["Overview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overviewHasBeenSet = true;
    }

    if (rsp.HasMember("TrendCount") && !rsp["TrendCount"].IsNull())
    {
        if (!rsp["TrendCount"].IsArray())
            return CoreInternalOutcome(Error("response `TrendCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TrendCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrendCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trendCount.push_back(item);
        }
        m_trendCountHasBeenSet = true;
    }

    if (rsp.HasMember("EvilCount") && !rsp["EvilCount"].IsNull())
    {
        if (!rsp["EvilCount"].IsArray())
            return CoreInternalOutcome(Error("response `EvilCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EvilCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EvilCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_evilCount.push_back(item);
        }
        m_evilCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


Overview DescribeAudioStatResponse::GetOverview() const
{
    return m_overview;
}

bool DescribeAudioStatResponse::OverviewHasBeenSet() const
{
    return m_overviewHasBeenSet;
}

vector<TrendCount> DescribeAudioStatResponse::GetTrendCount() const
{
    return m_trendCount;
}

bool DescribeAudioStatResponse::TrendCountHasBeenSet() const
{
    return m_trendCountHasBeenSet;
}

vector<EvilCount> DescribeAudioStatResponse::GetEvilCount() const
{
    return m_evilCount;
}

bool DescribeAudioStatResponse::EvilCountHasBeenSet() const
{
    return m_evilCountHasBeenSet;
}


