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

#include <tencentcloud/tsf/v20180326/model/TsfPageVmGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TsfPageVmGroup::TsfPageVmGroup() :
    m_totalCountHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome TsfPageVmGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TsfPageVmGroup.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Error("response `TsfPageVmGroup.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VmGroupSimple item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TsfPageVmGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TsfPageVmGroup::GetTotalCount() const
{
    return m_totalCount;
}

void TsfPageVmGroup::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TsfPageVmGroup::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<VmGroupSimple> TsfPageVmGroup::GetContent() const
{
    return m_content;
}

void TsfPageVmGroup::SetContent(const vector<VmGroupSimple>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TsfPageVmGroup::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

