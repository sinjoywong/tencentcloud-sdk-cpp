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

#include <tencentcloud/cdn/v20180606/model/CreateScdnLogTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

CreateScdnLogTaskRequest::CreateScdnLogTaskRequest() :
    m_modeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_defenceModeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_attackTypesHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

string CreateScdnLogTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefenceMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_defenceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attackTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttackTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_attackTypes.begin(); itr != m_attackTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_conditionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateScdnLogTaskRequest::GetMode() const
{
    return m_mode;
}

void CreateScdnLogTaskRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CreateScdnLogTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateScdnLogTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateScdnLogTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateScdnLogTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateScdnLogTaskRequest::GetDomain() const
{
    return m_domain;
}

void CreateScdnLogTaskRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateScdnLogTaskRequest::GetAttackType() const
{
    return m_attackType;
}

void CreateScdnLogTaskRequest::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string CreateScdnLogTaskRequest::GetDefenceMode() const
{
    return m_defenceMode;
}

void CreateScdnLogTaskRequest::SetDefenceMode(const string& _defenceMode)
{
    m_defenceMode = _defenceMode;
    m_defenceModeHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::DefenceModeHasBeenSet() const
{
    return m_defenceModeHasBeenSet;
}

string CreateScdnLogTaskRequest::GetIp() const
{
    return m_ip;
}

void CreateScdnLogTaskRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<string> CreateScdnLogTaskRequest::GetDomains() const
{
    return m_domains;
}

void CreateScdnLogTaskRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> CreateScdnLogTaskRequest::GetAttackTypes() const
{
    return m_attackTypes;
}

void CreateScdnLogTaskRequest::SetAttackTypes(const vector<string>& _attackTypes)
{
    m_attackTypes = _attackTypes;
    m_attackTypesHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::AttackTypesHasBeenSet() const
{
    return m_attackTypesHasBeenSet;
}

vector<ScdnEventLogConditions> CreateScdnLogTaskRequest::GetConditions() const
{
    return m_conditions;
}

void CreateScdnLogTaskRequest::SetConditions(const vector<ScdnEventLogConditions>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool CreateScdnLogTaskRequest::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}


