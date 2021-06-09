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

#include <tencentcloud/drm/v20181115/model/DrmOutputPara.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

DrmOutputPara::DrmOutputPara() :
    m_typeHasBeenSet(false),
    m_languageHasBeenSet(false)
{
}

CoreInternalOutcome DrmOutputPara::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `DrmOutputPara.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Error("response `DrmOutputPara.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrmOutputPara::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

}


string DrmOutputPara::GetType() const
{
    return m_type;
}

void DrmOutputPara::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DrmOutputPara::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DrmOutputPara::GetLanguage() const
{
    return m_language;
}

void DrmOutputPara::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool DrmOutputPara::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

