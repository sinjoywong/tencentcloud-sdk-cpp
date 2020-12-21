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

#include <tencentcloud/ie/v20200304/model/MediaJoiningInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

MediaJoiningInfo::MediaJoiningInfo() :
    m_targetInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaJoiningInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaJoiningInfo.TargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetInfo.Deserialize(value["TargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaJoiningInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_targetInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


MediaTargetInfo MediaJoiningInfo::GetTargetInfo() const
{
    return m_targetInfo;
}

void MediaJoiningInfo::SetTargetInfo(const MediaTargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool MediaJoiningInfo::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

