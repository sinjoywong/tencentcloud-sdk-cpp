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

#include <tencentcloud/rkp/v20191209/model/QueryDevAndRiskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rkp::V20191209::Model;
using namespace std;

QueryDevAndRiskResponse::QueryDevAndRiskResponse() :
    m_foundHasBeenSet(false),
    m_allCntHasBeenSet(false),
    m_matchesHasBeenSet(false)
{
}

CoreInternalOutcome QueryDevAndRiskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Found") && !rsp["Found"].IsNull())
    {
        if (!rsp["Found"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Found` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_found = rsp["Found"].GetInt64();
        m_foundHasBeenSet = true;
    }

    if (rsp.HasMember("AllCnt") && !rsp["AllCnt"].IsNull())
    {
        if (!rsp["AllCnt"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AllCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allCnt = rsp["AllCnt"].GetInt64();
        m_allCntHasBeenSet = true;
    }

    if (rsp.HasMember("Matches") && !rsp["Matches"].IsNull())
    {
        if (!rsp["Matches"].IsArray())
            return CoreInternalOutcome(Error("response `Matches` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Matches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevInfoQ item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matches.push_back(item);
        }
        m_matchesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t QueryDevAndRiskResponse::GetFound() const
{
    return m_found;
}

bool QueryDevAndRiskResponse::FoundHasBeenSet() const
{
    return m_foundHasBeenSet;
}

int64_t QueryDevAndRiskResponse::GetAllCnt() const
{
    return m_allCnt;
}

bool QueryDevAndRiskResponse::AllCntHasBeenSet() const
{
    return m_allCntHasBeenSet;
}

vector<DevInfoQ> QueryDevAndRiskResponse::GetMatches() const
{
    return m_matches;
}

bool QueryDevAndRiskResponse::MatchesHasBeenSet() const
{
    return m_matchesHasBeenSet;
}


