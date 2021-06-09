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

#include <tencentcloud/cme/v20191029/model/MediaImageSpriteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaImageSpriteInfo::MediaImageSpriteInfo() :
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_imageUrlSetHasBeenSet(false),
    m_webVttUrlHasBeenSet(false)
{
}

CoreInternalOutcome MediaImageSpriteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaImageSpriteInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaImageSpriteInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaImageSpriteInfo.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlSet") && !value["ImageUrlSet"].IsNull())
    {
        if (!value["ImageUrlSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaImageSpriteInfo.ImageUrlSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrlSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrlSet.push_back((*itr).GetString());
        }
        m_imageUrlSetHasBeenSet = true;
    }

    if (value.HasMember("WebVttUrl") && !value["WebVttUrl"].IsNull())
    {
        if (!value["WebVttUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaImageSpriteInfo.WebVttUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webVttUrl = string(value["WebVttUrl"].GetString());
        m_webVttUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaImageSpriteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_imageUrlSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrlSet.begin(); itr != m_imageUrlSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_webVttUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVttUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webVttUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t MediaImageSpriteInfo::GetHeight() const
{
    return m_height;
}

void MediaImageSpriteInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaImageSpriteInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t MediaImageSpriteInfo::GetWidth() const
{
    return m_width;
}

void MediaImageSpriteInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaImageSpriteInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t MediaImageSpriteInfo::GetTotalCount() const
{
    return m_totalCount;
}

void MediaImageSpriteInfo::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool MediaImageSpriteInfo::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> MediaImageSpriteInfo::GetImageUrlSet() const
{
    return m_imageUrlSet;
}

void MediaImageSpriteInfo::SetImageUrlSet(const vector<string>& _imageUrlSet)
{
    m_imageUrlSet = _imageUrlSet;
    m_imageUrlSetHasBeenSet = true;
}

bool MediaImageSpriteInfo::ImageUrlSetHasBeenSet() const
{
    return m_imageUrlSetHasBeenSet;
}

string MediaImageSpriteInfo::GetWebVttUrl() const
{
    return m_webVttUrl;
}

void MediaImageSpriteInfo::SetWebVttUrl(const string& _webVttUrl)
{
    m_webVttUrl = _webVttUrl;
    m_webVttUrlHasBeenSet = true;
}

bool MediaImageSpriteInfo::WebVttUrlHasBeenSet() const
{
    return m_webVttUrlHasBeenSet;
}

