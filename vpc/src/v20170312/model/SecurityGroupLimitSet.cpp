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

#include <tencentcloud/vpc/v20170312/model/SecurityGroupLimitSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SecurityGroupLimitSet::SecurityGroupLimitSet() :
    m_securityGroupLimitHasBeenSet(false),
    m_securityGroupPolicyLimitHasBeenSet(false),
    m_referedSecurityGroupLimitHasBeenSet(false),
    m_securityGroupInstanceLimitHasBeenSet(false),
    m_instanceSecurityGroupLimitHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupLimitSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityGroupLimit") && !value["SecurityGroupLimit"].IsNull())
    {
        if (!value["SecurityGroupLimit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupLimitSet.SecurityGroupLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupLimit = value["SecurityGroupLimit"].GetUint64();
        m_securityGroupLimitHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupPolicyLimit") && !value["SecurityGroupPolicyLimit"].IsNull())
    {
        if (!value["SecurityGroupPolicyLimit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupLimitSet.SecurityGroupPolicyLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupPolicyLimit = value["SecurityGroupPolicyLimit"].GetUint64();
        m_securityGroupPolicyLimitHasBeenSet = true;
    }

    if (value.HasMember("ReferedSecurityGroupLimit") && !value["ReferedSecurityGroupLimit"].IsNull())
    {
        if (!value["ReferedSecurityGroupLimit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupLimitSet.ReferedSecurityGroupLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_referedSecurityGroupLimit = value["ReferedSecurityGroupLimit"].GetUint64();
        m_referedSecurityGroupLimitHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupInstanceLimit") && !value["SecurityGroupInstanceLimit"].IsNull())
    {
        if (!value["SecurityGroupInstanceLimit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupLimitSet.SecurityGroupInstanceLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupInstanceLimit = value["SecurityGroupInstanceLimit"].GetUint64();
        m_securityGroupInstanceLimitHasBeenSet = true;
    }

    if (value.HasMember("InstanceSecurityGroupLimit") && !value["InstanceSecurityGroupLimit"].IsNull())
    {
        if (!value["InstanceSecurityGroupLimit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupLimitSet.InstanceSecurityGroupLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceSecurityGroupLimit = value["InstanceSecurityGroupLimit"].GetUint64();
        m_instanceSecurityGroupLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupLimitSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupLimit, allocator);
    }

    if (m_securityGroupPolicyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupPolicyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupPolicyLimit, allocator);
    }

    if (m_referedSecurityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferedSecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referedSecurityGroupLimit, allocator);
    }

    if (m_securityGroupInstanceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupInstanceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupInstanceLimit, allocator);
    }

    if (m_instanceSecurityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceSecurityGroupLimit, allocator);
    }

}


uint64_t SecurityGroupLimitSet::GetSecurityGroupLimit() const
{
    return m_securityGroupLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupLimit(const uint64_t& _securityGroupLimit)
{
    m_securityGroupLimit = _securityGroupLimit;
    m_securityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupLimitHasBeenSet() const
{
    return m_securityGroupLimitHasBeenSet;
}

uint64_t SecurityGroupLimitSet::GetSecurityGroupPolicyLimit() const
{
    return m_securityGroupPolicyLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupPolicyLimit(const uint64_t& _securityGroupPolicyLimit)
{
    m_securityGroupPolicyLimit = _securityGroupPolicyLimit;
    m_securityGroupPolicyLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupPolicyLimitHasBeenSet() const
{
    return m_securityGroupPolicyLimitHasBeenSet;
}

uint64_t SecurityGroupLimitSet::GetReferedSecurityGroupLimit() const
{
    return m_referedSecurityGroupLimit;
}

void SecurityGroupLimitSet::SetReferedSecurityGroupLimit(const uint64_t& _referedSecurityGroupLimit)
{
    m_referedSecurityGroupLimit = _referedSecurityGroupLimit;
    m_referedSecurityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::ReferedSecurityGroupLimitHasBeenSet() const
{
    return m_referedSecurityGroupLimitHasBeenSet;
}

uint64_t SecurityGroupLimitSet::GetSecurityGroupInstanceLimit() const
{
    return m_securityGroupInstanceLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupInstanceLimit(const uint64_t& _securityGroupInstanceLimit)
{
    m_securityGroupInstanceLimit = _securityGroupInstanceLimit;
    m_securityGroupInstanceLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupInstanceLimitHasBeenSet() const
{
    return m_securityGroupInstanceLimitHasBeenSet;
}

uint64_t SecurityGroupLimitSet::GetInstanceSecurityGroupLimit() const
{
    return m_instanceSecurityGroupLimit;
}

void SecurityGroupLimitSet::SetInstanceSecurityGroupLimit(const uint64_t& _instanceSecurityGroupLimit)
{
    m_instanceSecurityGroupLimit = _instanceSecurityGroupLimit;
    m_instanceSecurityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::InstanceSecurityGroupLimitHasBeenSet() const
{
    return m_instanceSecurityGroupLimitHasBeenSet;
}

