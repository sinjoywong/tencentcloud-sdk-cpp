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

#include <tencentcloud/ams/v20201229/model/AudioResultDetailMoanResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

AudioResultDetailMoanResult::AudioResultDetailMoanResult() :
    m_labelHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_subLabelCodeHasBeenSet(false)
{
}

CoreInternalOutcome AudioResultDetailMoanResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioResultDetailMoanResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AudioResultDetailMoanResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `AudioResultDetailMoanResult.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `AudioResultDetailMoanResult.EndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetDouble();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SubLabelCode") && !value["SubLabelCode"].IsNull())
    {
        if (!value["SubLabelCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioResultDetailMoanResult.SubLabelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabelCode = string(value["SubLabelCode"].GetString());
        m_subLabelCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioResultDetailMoanResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_subLabelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabelCode.c_str(), allocator).Move(), allocator);
    }

}


string AudioResultDetailMoanResult::GetLabel() const
{
    return m_label;
}

void AudioResultDetailMoanResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AudioResultDetailMoanResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t AudioResultDetailMoanResult::GetScore() const
{
    return m_score;
}

void AudioResultDetailMoanResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AudioResultDetailMoanResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double AudioResultDetailMoanResult::GetStartTime() const
{
    return m_startTime;
}

void AudioResultDetailMoanResult::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AudioResultDetailMoanResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double AudioResultDetailMoanResult::GetEndTime() const
{
    return m_endTime;
}

void AudioResultDetailMoanResult::SetEndTime(const double& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AudioResultDetailMoanResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string AudioResultDetailMoanResult::GetSubLabelCode() const
{
    return m_subLabelCode;
}

void AudioResultDetailMoanResult::SetSubLabelCode(const string& _subLabelCode)
{
    m_subLabelCode = _subLabelCode;
    m_subLabelCodeHasBeenSet = true;
}

bool AudioResultDetailMoanResult::SubLabelCodeHasBeenSet() const
{
    return m_subLabelCodeHasBeenSet;
}

