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

#include <tencentcloud/apigateway/v20180808/model/IPStrategysStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

IPStrategysStatus::IPStrategysStatus() :
    m_totalCountHasBeenSet(false),
    m_strategySetHasBeenSet(false)
{
}

CoreInternalOutcome IPStrategysStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `IPStrategysStatus.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("StrategySet") && !value["StrategySet"].IsNull())
    {
        if (!value["StrategySet"].IsArray())
            return CoreInternalOutcome(Error("response `IPStrategysStatus.StrategySet` is not array type"));

        const rapidjson::Value &tmpValue = value["StrategySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPStrategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_strategySet.push_back(item);
        }
        m_strategySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPStrategysStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_strategySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategySet.begin(); itr != m_strategySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t IPStrategysStatus::GetTotalCount() const
{
    return m_totalCount;
}

void IPStrategysStatus::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool IPStrategysStatus::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<IPStrategy> IPStrategysStatus::GetStrategySet() const
{
    return m_strategySet;
}

void IPStrategysStatus::SetStrategySet(const vector<IPStrategy>& _strategySet)
{
    m_strategySet = _strategySet;
    m_strategySetHasBeenSet = true;
}

bool IPStrategysStatus::StrategySetHasBeenSet() const
{
    return m_strategySetHasBeenSet;
}

