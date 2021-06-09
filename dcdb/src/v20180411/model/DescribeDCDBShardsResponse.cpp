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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDCDBShardsResponse::DescribeDCDBShardsResponse() :
    m_totalCountHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_dcnFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDCDBShardsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Shards") && !rsp["Shards"].IsNull())
    {
        if (!rsp["Shards"].IsArray())
            return CoreInternalOutcome(Error("response `Shards` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Shards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DCDBShardInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shards.push_back(item);
        }
        m_shardsHasBeenSet = true;
    }

    if (rsp.HasMember("DcnFlag") && !rsp["DcnFlag"].IsNull())
    {
        if (!rsp["DcnFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DcnFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnFlag = rsp["DcnFlag"].GetInt64();
        m_dcnFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeDCDBShardsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDCDBShardsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DCDBShardInfo> DescribeDCDBShardsResponse::GetShards() const
{
    return m_shards;
}

bool DescribeDCDBShardsResponse::ShardsHasBeenSet() const
{
    return m_shardsHasBeenSet;
}

int64_t DescribeDCDBShardsResponse::GetDcnFlag() const
{
    return m_dcnFlag;
}

bool DescribeDCDBShardsResponse::DcnFlagHasBeenSet() const
{
    return m_dcnFlagHasBeenSet;
}


