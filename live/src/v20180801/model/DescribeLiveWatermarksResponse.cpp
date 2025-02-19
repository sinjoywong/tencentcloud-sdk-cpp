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

#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveWatermarksResponse::DescribeLiveWatermarksResponse() :
    m_totalNumHasBeenSet(false),
    m_watermarkListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLiveWatermarksResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("WatermarkList") && !rsp["WatermarkList"].IsNull())
    {
        if (!rsp["WatermarkList"].IsArray())
            return CoreInternalOutcome(Error("response `WatermarkList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WatermarkList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WatermarkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkList.push_back(item);
        }
        m_watermarkListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeLiveWatermarksResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeLiveWatermarksResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

vector<WatermarkInfo> DescribeLiveWatermarksResponse::GetWatermarkList() const
{
    return m_watermarkList;
}

bool DescribeLiveWatermarksResponse::WatermarkListHasBeenSet() const
{
    return m_watermarkListHasBeenSet;
}


