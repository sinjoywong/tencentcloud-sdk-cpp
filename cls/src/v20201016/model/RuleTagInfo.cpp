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

#include <tencentcloud/cls/v20201016/model/RuleTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

RuleTagInfo::RuleTagInfo() :
    m_caseSensitiveHasBeenSet(false),
    m_keyValuesHasBeenSet(false)
{
}

CoreInternalOutcome RuleTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseSensitive") && !value["CaseSensitive"].IsNull())
    {
        if (!value["CaseSensitive"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RuleTagInfo.CaseSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caseSensitive = value["CaseSensitive"].GetBool();
        m_caseSensitiveHasBeenSet = true;
    }

    if (value.HasMember("KeyValues") && !value["KeyValues"].IsNull())
    {
        if (!value["KeyValues"].IsArray())
            return CoreInternalOutcome(Error("response `RuleTagInfo.KeyValues` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyValues.push_back(item);
        }
        m_keyValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_keyValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyValues.begin(); itr != m_keyValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool RuleTagInfo::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void RuleTagInfo::SetCaseSensitive(const bool& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool RuleTagInfo::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

vector<KeyValueInfo> RuleTagInfo::GetKeyValues() const
{
    return m_keyValues;
}

void RuleTagInfo::SetKeyValues(const vector<KeyValueInfo>& _keyValues)
{
    m_keyValues = _keyValues;
    m_keyValuesHasBeenSet = true;
}

bool RuleTagInfo::KeyValuesHasBeenSet() const
{
    return m_keyValuesHasBeenSet;
}

