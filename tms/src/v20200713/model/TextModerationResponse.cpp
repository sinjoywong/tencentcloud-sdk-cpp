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

#include <tencentcloud/tms/v20200713/model/TextModerationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20200713::Model;
using namespace rapidjson;
using namespace std;

TextModerationResponse::TextModerationResponse() :
    m_bizTypeHasBeenSet(false),
    m_evilFlagHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_detailResultsHasBeenSet(false),
    m_riskDetailsHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_dataIdHasBeenSet(false)
{
}

CoreInternalOutcome TextModerationResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EvilFlag") && !rsp["EvilFlag"].IsNull())
    {
        if (!rsp["EvilFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EvilFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = rsp["EvilFlag"].GetInt64();
        m_evilFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Keywords") && !rsp["Keywords"].IsNull())
    {
        if (!rsp["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `Keywords` is not array type"));

        const Value &tmpValue = rsp["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (rsp.HasMember("DetailResults") && !rsp["DetailResults"].IsNull())
    {
        if (!rsp["DetailResults"].IsArray())
            return CoreInternalOutcome(Error("response `DetailResults` is not array type"));

        const Value &tmpValue = rsp["DetailResults"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailResults item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailResults.push_back(item);
        }
        m_detailResultsHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDetails") && !rsp["RiskDetails"].IsNull())
    {
        if (!rsp["RiskDetails"].IsArray())
            return CoreInternalOutcome(Error("response `RiskDetails` is not array type"));

        const Value &tmpValue = rsp["RiskDetails"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskDetails.push_back(item);
        }
        m_riskDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string TextModerationResponse::GetBizType() const
{
    return m_bizType;
}

bool TextModerationResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

int64_t TextModerationResponse::GetEvilFlag() const
{
    return m_evilFlag;
}

bool TextModerationResponse::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

string TextModerationResponse::GetLabel() const
{
    return m_label;
}

bool TextModerationResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string TextModerationResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool TextModerationResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<string> TextModerationResponse::GetKeywords() const
{
    return m_keywords;
}

bool TextModerationResponse::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

int64_t TextModerationResponse::GetScore() const
{
    return m_score;
}

bool TextModerationResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<DetailResults> TextModerationResponse::GetDetailResults() const
{
    return m_detailResults;
}

bool TextModerationResponse::DetailResultsHasBeenSet() const
{
    return m_detailResultsHasBeenSet;
}

vector<RiskDetails> TextModerationResponse::GetRiskDetails() const
{
    return m_riskDetails;
}

bool TextModerationResponse::RiskDetailsHasBeenSet() const
{
    return m_riskDetailsHasBeenSet;
}

string TextModerationResponse::GetExtra() const
{
    return m_extra;
}

bool TextModerationResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string TextModerationResponse::GetDataId() const
{
    return m_dataId;
}

bool TextModerationResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}


