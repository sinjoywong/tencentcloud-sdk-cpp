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

#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

ModifySecurityGroupPoliciesRequest::ModifySecurityGroupPoliciesRequest() :
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupPolicySetHasBeenSet(false),
    m_sortPolicysHasBeenSet(false)
{
}

string ModifySecurityGroupPoliciesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupPolicySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupPolicySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_securityGroupPolicySet.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sortPolicysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SortPolicys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sortPolicys, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityGroupPoliciesRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void ModifySecurityGroupPoliciesRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool ModifySecurityGroupPoliciesRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

SecurityGroupPolicySet ModifySecurityGroupPoliciesRequest::GetSecurityGroupPolicySet() const
{
    return m_securityGroupPolicySet;
}

void ModifySecurityGroupPoliciesRequest::SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet)
{
    m_securityGroupPolicySet = _securityGroupPolicySet;
    m_securityGroupPolicySetHasBeenSet = true;
}

bool ModifySecurityGroupPoliciesRequest::SecurityGroupPolicySetHasBeenSet() const
{
    return m_securityGroupPolicySetHasBeenSet;
}

bool ModifySecurityGroupPoliciesRequest::GetSortPolicys() const
{
    return m_sortPolicys;
}

void ModifySecurityGroupPoliciesRequest::SetSortPolicys(const bool& _sortPolicys)
{
    m_sortPolicys = _sortPolicys;
    m_sortPolicysHasBeenSet = true;
}

bool ModifySecurityGroupPoliciesRequest::SortPolicysHasBeenSet() const
{
    return m_sortPolicysHasBeenSet;
}


