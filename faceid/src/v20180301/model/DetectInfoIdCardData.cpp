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

#include <tencentcloud/faceid/v20180301/model/DetectInfoIdCardData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectInfoIdCardData::DetectInfoIdCardData() :
    m_ocrFrontHasBeenSet(false),
    m_ocrBackHasBeenSet(false),
    m_processedFrontImageHasBeenSet(false),
    m_processedBackImageHasBeenSet(false),
    m_avatarHasBeenSet(false)
{
}

CoreInternalOutcome DetectInfoIdCardData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OcrFront") && !value["OcrFront"].IsNull())
    {
        if (!value["OcrFront"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoIdCardData.OcrFront` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrFront = string(value["OcrFront"].GetString());
        m_ocrFrontHasBeenSet = true;
    }

    if (value.HasMember("OcrBack") && !value["OcrBack"].IsNull())
    {
        if (!value["OcrBack"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoIdCardData.OcrBack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrBack = string(value["OcrBack"].GetString());
        m_ocrBackHasBeenSet = true;
    }

    if (value.HasMember("ProcessedFrontImage") && !value["ProcessedFrontImage"].IsNull())
    {
        if (!value["ProcessedFrontImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoIdCardData.ProcessedFrontImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processedFrontImage = string(value["ProcessedFrontImage"].GetString());
        m_processedFrontImageHasBeenSet = true;
    }

    if (value.HasMember("ProcessedBackImage") && !value["ProcessedBackImage"].IsNull())
    {
        if (!value["ProcessedBackImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoIdCardData.ProcessedBackImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processedBackImage = string(value["ProcessedBackImage"].GetString());
        m_processedBackImageHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoIdCardData.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectInfoIdCardData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ocrFrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrFront";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrFront.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrBack.c_str(), allocator).Move(), allocator);
    }

    if (m_processedFrontImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessedFrontImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processedFrontImage.c_str(), allocator).Move(), allocator);
    }

    if (m_processedBackImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessedBackImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processedBackImage.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

}


string DetectInfoIdCardData::GetOcrFront() const
{
    return m_ocrFront;
}

void DetectInfoIdCardData::SetOcrFront(const string& _ocrFront)
{
    m_ocrFront = _ocrFront;
    m_ocrFrontHasBeenSet = true;
}

bool DetectInfoIdCardData::OcrFrontHasBeenSet() const
{
    return m_ocrFrontHasBeenSet;
}

string DetectInfoIdCardData::GetOcrBack() const
{
    return m_ocrBack;
}

void DetectInfoIdCardData::SetOcrBack(const string& _ocrBack)
{
    m_ocrBack = _ocrBack;
    m_ocrBackHasBeenSet = true;
}

bool DetectInfoIdCardData::OcrBackHasBeenSet() const
{
    return m_ocrBackHasBeenSet;
}

string DetectInfoIdCardData::GetProcessedFrontImage() const
{
    return m_processedFrontImage;
}

void DetectInfoIdCardData::SetProcessedFrontImage(const string& _processedFrontImage)
{
    m_processedFrontImage = _processedFrontImage;
    m_processedFrontImageHasBeenSet = true;
}

bool DetectInfoIdCardData::ProcessedFrontImageHasBeenSet() const
{
    return m_processedFrontImageHasBeenSet;
}

string DetectInfoIdCardData::GetProcessedBackImage() const
{
    return m_processedBackImage;
}

void DetectInfoIdCardData::SetProcessedBackImage(const string& _processedBackImage)
{
    m_processedBackImage = _processedBackImage;
    m_processedBackImageHasBeenSet = true;
}

bool DetectInfoIdCardData::ProcessedBackImageHasBeenSet() const
{
    return m_processedBackImageHasBeenSet;
}

string DetectInfoIdCardData::GetAvatar() const
{
    return m_avatar;
}

void DetectInfoIdCardData::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool DetectInfoIdCardData::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

