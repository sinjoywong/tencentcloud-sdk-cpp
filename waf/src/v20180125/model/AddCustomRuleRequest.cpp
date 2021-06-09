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

#include <tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AddCustomRuleRequest::AddCustomRuleRequest() :
    m_nameHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_bypassHasBeenSet(false)
{
}

string AddCustomRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redirect.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bypass.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddCustomRuleRequest::GetName() const
{
    return m_name;
}

void AddCustomRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddCustomRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddCustomRuleRequest::GetSortId() const
{
    return m_sortId;
}

void AddCustomRuleRequest::SetSortId(const string& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool AddCustomRuleRequest::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

string AddCustomRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void AddCustomRuleRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AddCustomRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<Strategy> AddCustomRuleRequest::GetStrategies() const
{
    return m_strategies;
}

void AddCustomRuleRequest::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool AddCustomRuleRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string AddCustomRuleRequest::GetDomain() const
{
    return m_domain;
}

void AddCustomRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AddCustomRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string AddCustomRuleRequest::GetActionType() const
{
    return m_actionType;
}

void AddCustomRuleRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AddCustomRuleRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AddCustomRuleRequest::GetRedirect() const
{
    return m_redirect;
}

void AddCustomRuleRequest::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool AddCustomRuleRequest::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

string AddCustomRuleRequest::GetEdition() const
{
    return m_edition;
}

void AddCustomRuleRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool AddCustomRuleRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string AddCustomRuleRequest::GetBypass() const
{
    return m_bypass;
}

void AddCustomRuleRequest::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool AddCustomRuleRequest::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}


