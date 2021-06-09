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

#include <tencentcloud/ckafka/v20190819/model/Route.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

Route::Route() :
    m_accessTypeHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_vipTypeHasBeenSet(false),
    m_vipListHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainPortHasBeenSet(false)
{
}

CoreInternalOutcome Route::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Route.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Route.RouteId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = value["RouteId"].GetInt64();
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("VipType") && !value["VipType"].IsNull())
    {
        if (!value["VipType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Route.VipType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vipType = value["VipType"].GetInt64();
        m_vipTypeHasBeenSet = true;
    }

    if (value.HasMember("VipList") && !value["VipList"].IsNull())
    {
        if (!value["VipList"].IsArray())
            return CoreInternalOutcome(Error("response `Route.VipList` is not array type"));

        const rapidjson::Value &tmpValue = value["VipList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VipEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vipList.push_back(item);
        }
        m_vipListHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Route.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainPort") && !value["DomainPort"].IsNull())
    {
        if (!value["DomainPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Route.DomainPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainPort = value["DomainPort"].GetInt64();
        m_domainPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Route::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeId, allocator);
    }

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipType, allocator);
    }

    if (m_vipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vipList.begin(); itr != m_vipList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainPort, allocator);
    }

}


int64_t Route::GetAccessType() const
{
    return m_accessType;
}

void Route::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool Route::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

int64_t Route::GetRouteId() const
{
    return m_routeId;
}

void Route::SetRouteId(const int64_t& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool Route::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

int64_t Route::GetVipType() const
{
    return m_vipType;
}

void Route::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool Route::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

vector<VipEntity> Route::GetVipList() const
{
    return m_vipList;
}

void Route::SetVipList(const vector<VipEntity>& _vipList)
{
    m_vipList = _vipList;
    m_vipListHasBeenSet = true;
}

bool Route::VipListHasBeenSet() const
{
    return m_vipListHasBeenSet;
}

string Route::GetDomain() const
{
    return m_domain;
}

void Route::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Route::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t Route::GetDomainPort() const
{
    return m_domainPort;
}

void Route::SetDomainPort(const int64_t& _domainPort)
{
    m_domainPort = _domainPort;
    m_domainPortHasBeenSet = true;
}

bool Route::DomainPortHasBeenSet() const
{
    return m_domainPortHasBeenSet;
}

