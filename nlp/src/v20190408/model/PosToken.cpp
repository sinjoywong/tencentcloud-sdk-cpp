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

#include <tencentcloud/nlp/v20190408/model/PosToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

PosToken::PosToken() :
    m_wordHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_beginOffsetHasBeenSet(false),
    m_posHasBeenSet(false)
{
}

CoreInternalOutcome PosToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Error("response `PosToken.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PosToken.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("BeginOffset") && !value["BeginOffset"].IsNull())
    {
        if (!value["BeginOffset"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PosToken.BeginOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginOffset = value["BeginOffset"].GetInt64();
        m_beginOffsetHasBeenSet = true;
    }

    if (value.HasMember("Pos") && !value["Pos"].IsNull())
    {
        if (!value["Pos"].IsString())
        {
            return CoreInternalOutcome(Error("response `PosToken.Pos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pos = string(value["Pos"].GetString());
        m_posHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PosToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_beginOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginOffset, allocator);
    }

    if (m_posHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pos.c_str(), allocator).Move(), allocator);
    }

}


string PosToken::GetWord() const
{
    return m_word;
}

void PosToken::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool PosToken::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

int64_t PosToken::GetLength() const
{
    return m_length;
}

void PosToken::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool PosToken::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

int64_t PosToken::GetBeginOffset() const
{
    return m_beginOffset;
}

void PosToken::SetBeginOffset(const int64_t& _beginOffset)
{
    m_beginOffset = _beginOffset;
    m_beginOffsetHasBeenSet = true;
}

bool PosToken::BeginOffsetHasBeenSet() const
{
    return m_beginOffsetHasBeenSet;
}

string PosToken::GetPos() const
{
    return m_pos;
}

void PosToken::SetPos(const string& _pos)
{
    m_pos = _pos;
    m_posHasBeenSet = true;
}

bool PosToken::PosHasBeenSet() const
{
    return m_posHasBeenSet;
}

