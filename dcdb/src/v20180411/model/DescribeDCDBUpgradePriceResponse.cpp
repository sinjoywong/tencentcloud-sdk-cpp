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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBUpgradePriceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDCDBUpgradePriceResponse::DescribeDCDBUpgradePriceResponse() :
    m_originalPriceHasBeenSet(false),
    m_priceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDCDBUpgradePriceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginalPrice") && !rsp["OriginalPrice"].IsNull())
    {
        if (!rsp["OriginalPrice"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OriginalPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = rsp["OriginalPrice"].GetInt64();
        m_originalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Price` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetInt64();
        m_priceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeDCDBUpgradePriceResponse::GetOriginalPrice() const
{
    return m_originalPrice;
}

bool DescribeDCDBUpgradePriceResponse::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

int64_t DescribeDCDBUpgradePriceResponse::GetPrice() const
{
    return m_price;
}

bool DescribeDCDBUpgradePriceResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}


