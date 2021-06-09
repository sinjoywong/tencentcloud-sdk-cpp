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

#include <tencentcloud/iir/v20200417/model/RecognizeProductResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iir::V20200417::Model;
using namespace std;

RecognizeProductResponse::RecognizeProductResponse() :
    m_regionDetectedHasBeenSet(false),
    m_productInfoHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeProductResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegionDetected") && !rsp["RegionDetected"].IsNull())
    {
        if (!rsp["RegionDetected"].IsArray())
            return CoreInternalOutcome(Error("response `RegionDetected` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionDetected"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionDetected item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionDetected.push_back(item);
        }
        m_regionDetectedHasBeenSet = true;
    }

    if (rsp.HasMember("ProductInfo") && !rsp["ProductInfo"].IsNull())
    {
        if (!rsp["ProductInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProductInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productInfo.Deserialize(rsp["ProductInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<RegionDetected> RecognizeProductResponse::GetRegionDetected() const
{
    return m_regionDetected;
}

bool RecognizeProductResponse::RegionDetectedHasBeenSet() const
{
    return m_regionDetectedHasBeenSet;
}

ProductInfo RecognizeProductResponse::GetProductInfo() const
{
    return m_productInfo;
}

bool RecognizeProductResponse::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}


