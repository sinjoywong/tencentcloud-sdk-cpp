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

#include <tencentcloud/tci/v20190318/model/TransmitAudioStreamResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

TransmitAudioStreamResponse::TransmitAudioStreamResponse() :
    m_asrStatHasBeenSet(false),
    m_textsHasBeenSet(false),
    m_vocabAnalysisDetailInfoHasBeenSet(false),
    m_vocabAnalysisStatInfoHasBeenSet(false),
    m_allTextsHasBeenSet(false),
    m_audioUrlHasBeenSet(false)
{
}

CoreInternalOutcome TransmitAudioStreamResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AsrStat") && !rsp["AsrStat"].IsNull())
    {
        if (!rsp["AsrStat"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AsrStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrStat.Deserialize(rsp["AsrStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrStatHasBeenSet = true;
    }

    if (rsp.HasMember("Texts") && !rsp["Texts"].IsNull())
    {
        if (!rsp["Texts"].IsArray())
            return CoreInternalOutcome(Error("response `Texts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Texts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WholeTextItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_texts.push_back(item);
        }
        m_textsHasBeenSet = true;
    }

    if (rsp.HasMember("VocabAnalysisDetailInfo") && !rsp["VocabAnalysisDetailInfo"].IsNull())
    {
        if (!rsp["VocabAnalysisDetailInfo"].IsArray())
            return CoreInternalOutcome(Error("response `VocabAnalysisDetailInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VocabAnalysisDetailInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VocabDetailInfomation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vocabAnalysisDetailInfo.push_back(item);
        }
        m_vocabAnalysisDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("VocabAnalysisStatInfo") && !rsp["VocabAnalysisStatInfo"].IsNull())
    {
        if (!rsp["VocabAnalysisStatInfo"].IsArray())
            return CoreInternalOutcome(Error("response `VocabAnalysisStatInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VocabAnalysisStatInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VocabStatInfomation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vocabAnalysisStatInfo.push_back(item);
        }
        m_vocabAnalysisStatInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AllTexts") && !rsp["AllTexts"].IsNull())
    {
        if (!rsp["AllTexts"].IsString())
        {
            return CoreInternalOutcome(Error("response `AllTexts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allTexts = string(rsp["AllTexts"].GetString());
        m_allTextsHasBeenSet = true;
    }

    if (rsp.HasMember("AudioUrl") && !rsp["AudioUrl"].IsNull())
    {
        if (!rsp["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(rsp["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


ASRStat TransmitAudioStreamResponse::GetAsrStat() const
{
    return m_asrStat;
}

bool TransmitAudioStreamResponse::AsrStatHasBeenSet() const
{
    return m_asrStatHasBeenSet;
}

vector<WholeTextItem> TransmitAudioStreamResponse::GetTexts() const
{
    return m_texts;
}

bool TransmitAudioStreamResponse::TextsHasBeenSet() const
{
    return m_textsHasBeenSet;
}

vector<VocabDetailInfomation> TransmitAudioStreamResponse::GetVocabAnalysisDetailInfo() const
{
    return m_vocabAnalysisDetailInfo;
}

bool TransmitAudioStreamResponse::VocabAnalysisDetailInfoHasBeenSet() const
{
    return m_vocabAnalysisDetailInfoHasBeenSet;
}

vector<VocabStatInfomation> TransmitAudioStreamResponse::GetVocabAnalysisStatInfo() const
{
    return m_vocabAnalysisStatInfo;
}

bool TransmitAudioStreamResponse::VocabAnalysisStatInfoHasBeenSet() const
{
    return m_vocabAnalysisStatInfoHasBeenSet;
}

string TransmitAudioStreamResponse::GetAllTexts() const
{
    return m_allTexts;
}

bool TransmitAudioStreamResponse::AllTextsHasBeenSet() const
{
    return m_allTextsHasBeenSet;
}

string TransmitAudioStreamResponse::GetAudioUrl() const
{
    return m_audioUrl;
}

bool TransmitAudioStreamResponse::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}


