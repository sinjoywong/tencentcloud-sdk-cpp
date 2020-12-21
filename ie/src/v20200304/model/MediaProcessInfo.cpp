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

#include <tencentcloud/ie/v20200304/model/MediaProcessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

MediaProcessInfo::MediaProcessInfo() :
    m_typeHasBeenSet(false),
    m_mediaCuttingInfoHasBeenSet(false),
    m_mediaJoiningInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaProcessInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaProcessInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MediaCuttingInfo") && !value["MediaCuttingInfo"].IsNull())
    {
        if (!value["MediaCuttingInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaProcessInfo.MediaCuttingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaCuttingInfo.Deserialize(value["MediaCuttingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaCuttingInfoHasBeenSet = true;
    }

    if (value.HasMember("MediaJoiningInfo") && !value["MediaJoiningInfo"].IsNull())
    {
        if (!value["MediaJoiningInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaProcessInfo.MediaJoiningInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaJoiningInfo.Deserialize(value["MediaJoiningInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaJoiningInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaProcessInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaCuttingInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaCuttingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mediaCuttingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaJoiningInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaJoiningInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mediaJoiningInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaProcessInfo::GetType() const
{
    return m_type;
}

void MediaProcessInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaProcessInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MediaCuttingInfo MediaProcessInfo::GetMediaCuttingInfo() const
{
    return m_mediaCuttingInfo;
}

void MediaProcessInfo::SetMediaCuttingInfo(const MediaCuttingInfo& _mediaCuttingInfo)
{
    m_mediaCuttingInfo = _mediaCuttingInfo;
    m_mediaCuttingInfoHasBeenSet = true;
}

bool MediaProcessInfo::MediaCuttingInfoHasBeenSet() const
{
    return m_mediaCuttingInfoHasBeenSet;
}

MediaJoiningInfo MediaProcessInfo::GetMediaJoiningInfo() const
{
    return m_mediaJoiningInfo;
}

void MediaProcessInfo::SetMediaJoiningInfo(const MediaJoiningInfo& _mediaJoiningInfo)
{
    m_mediaJoiningInfo = _mediaJoiningInfo;
    m_mediaJoiningInfoHasBeenSet = true;
}

bool MediaProcessInfo::MediaJoiningInfoHasBeenSet() const
{
    return m_mediaJoiningInfoHasBeenSet;
}

