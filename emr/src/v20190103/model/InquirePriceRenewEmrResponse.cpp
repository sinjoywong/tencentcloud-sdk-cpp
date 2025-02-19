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

#include <tencentcloud/emr/v20190103/model/InquirePriceRenewEmrResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

InquirePriceRenewEmrResponse::InquirePriceRenewEmrResponse() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false)
{
}

CoreInternalOutcome InquirePriceRenewEmrResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginalCost") && !rsp["OriginalCost"].IsNull())
    {
        if (!rsp["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = rsp["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountCost") && !rsp["DiscountCost"].IsNull())
    {
        if (!rsp["DiscountCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `DiscountCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = rsp["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }

    if (rsp.HasMember("TimeUnit") && !rsp["TimeUnit"].IsNull())
    {
        if (!rsp["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(rsp["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSpan") && !rsp["TimeSpan"].IsNull())
    {
        if (!rsp["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = rsp["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double InquirePriceRenewEmrResponse::GetOriginalCost() const
{
    return m_originalCost;
}

bool InquirePriceRenewEmrResponse::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double InquirePriceRenewEmrResponse::GetDiscountCost() const
{
    return m_discountCost;
}

bool InquirePriceRenewEmrResponse::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

string InquirePriceRenewEmrResponse::GetTimeUnit() const
{
    return m_timeUnit;
}

bool InquirePriceRenewEmrResponse::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t InquirePriceRenewEmrResponse::GetTimeSpan() const
{
    return m_timeSpan;
}

bool InquirePriceRenewEmrResponse::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}


