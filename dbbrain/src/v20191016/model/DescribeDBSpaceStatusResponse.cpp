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

#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

DescribeDBSpaceStatusResponse::DescribeDBSpaceStatusResponse() :
    m_growthHasBeenSet(false),
    m_remainHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_availableDaysHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBSpaceStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Growth") && !rsp["Growth"].IsNull())
    {
        if (!rsp["Growth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Growth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_growth = rsp["Growth"].GetInt64();
        m_growthHasBeenSet = true;
    }

    if (rsp.HasMember("Remain") && !rsp["Remain"].IsNull())
    {
        if (!rsp["Remain"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Remain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remain = rsp["Remain"].GetInt64();
        m_remainHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableDays") && !rsp["AvailableDays"].IsNull())
    {
        if (!rsp["AvailableDays"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AvailableDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableDays = rsp["AvailableDays"].GetInt64();
        m_availableDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeDBSpaceStatusResponse::GetGrowth() const
{
    return m_growth;
}

bool DescribeDBSpaceStatusResponse::GrowthHasBeenSet() const
{
    return m_growthHasBeenSet;
}

int64_t DescribeDBSpaceStatusResponse::GetRemain() const
{
    return m_remain;
}

bool DescribeDBSpaceStatusResponse::RemainHasBeenSet() const
{
    return m_remainHasBeenSet;
}

int64_t DescribeDBSpaceStatusResponse::GetTotal() const
{
    return m_total;
}

bool DescribeDBSpaceStatusResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeDBSpaceStatusResponse::GetAvailableDays() const
{
    return m_availableDays;
}

bool DescribeDBSpaceStatusResponse::AvailableDaysHasBeenSet() const
{
    return m_availableDaysHasBeenSet;
}


