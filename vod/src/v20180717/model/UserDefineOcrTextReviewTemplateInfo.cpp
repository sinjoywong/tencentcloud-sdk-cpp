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

#include <tencentcloud/vod/v20180717/model/UserDefineOcrTextReviewTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

UserDefineOcrTextReviewTemplateInfo::UserDefineOcrTextReviewTemplateInfo() :
    m_switchHasBeenSet(false),
    m_labelSetHasBeenSet(false),
    m_blockConfidenceHasBeenSet(false),
    m_reviewConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome UserDefineOcrTextReviewTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserDefineOcrTextReviewTemplateInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Error("response `UserDefineOcrTextReviewTemplateInfo.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }

    if (value.HasMember("BlockConfidence") && !value["BlockConfidence"].IsNull())
    {
        if (!value["BlockConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UserDefineOcrTextReviewTemplateInfo.BlockConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockConfidence = value["BlockConfidence"].GetInt64();
        m_blockConfidenceHasBeenSet = true;
    }

    if (value.HasMember("ReviewConfidence") && !value["ReviewConfidence"].IsNull())
    {
        if (!value["ReviewConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UserDefineOcrTextReviewTemplateInfo.ReviewConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reviewConfidence = value["ReviewConfidence"].GetInt64();
        m_reviewConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDefineOcrTextReviewTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blockConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockConfidence, allocator);
    }

    if (m_reviewConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reviewConfidence, allocator);
    }

}


string UserDefineOcrTextReviewTemplateInfo::GetSwitch() const
{
    return m_switch;
}

void UserDefineOcrTextReviewTemplateInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool UserDefineOcrTextReviewTemplateInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> UserDefineOcrTextReviewTemplateInfo::GetLabelSet() const
{
    return m_labelSet;
}

void UserDefineOcrTextReviewTemplateInfo::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool UserDefineOcrTextReviewTemplateInfo::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

int64_t UserDefineOcrTextReviewTemplateInfo::GetBlockConfidence() const
{
    return m_blockConfidence;
}

void UserDefineOcrTextReviewTemplateInfo::SetBlockConfidence(const int64_t& _blockConfidence)
{
    m_blockConfidence = _blockConfidence;
    m_blockConfidenceHasBeenSet = true;
}

bool UserDefineOcrTextReviewTemplateInfo::BlockConfidenceHasBeenSet() const
{
    return m_blockConfidenceHasBeenSet;
}

int64_t UserDefineOcrTextReviewTemplateInfo::GetReviewConfidence() const
{
    return m_reviewConfidence;
}

void UserDefineOcrTextReviewTemplateInfo::SetReviewConfidence(const int64_t& _reviewConfidence)
{
    m_reviewConfidence = _reviewConfidence;
    m_reviewConfidenceHasBeenSet = true;
}

bool UserDefineOcrTextReviewTemplateInfo::ReviewConfidenceHasBeenSet() const
{
    return m_reviewConfidenceHasBeenSet;
}

