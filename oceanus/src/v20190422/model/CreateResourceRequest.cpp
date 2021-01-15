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

#include <tencentcloud/oceanus/v20190422/model/CreateResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

CreateResourceRequest::CreateResourceRequest() :
    m_resourceLocHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_resourceConfigRemarkHasBeenSet(false)
{
}

string CreateResourceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceLocHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceLoc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceLoc.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigRemarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceConfigRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceConfigRemark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ResourceLoc CreateResourceRequest::GetResourceLoc() const
{
    return m_resourceLoc;
}

void CreateResourceRequest::SetResourceLoc(const ResourceLoc& _resourceLoc)
{
    m_resourceLoc = _resourceLoc;
    m_resourceLocHasBeenSet = true;
}

bool CreateResourceRequest::ResourceLocHasBeenSet() const
{
    return m_resourceLocHasBeenSet;
}

string CreateResourceRequest::GetName() const
{
    return m_name;
}

void CreateResourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateResourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateResourceRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateResourceRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateResourceRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CreateResourceRequest::GetRemark() const
{
    return m_remark;
}

void CreateResourceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateResourceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateResourceRequest::GetResourceConfigRemark() const
{
    return m_resourceConfigRemark;
}

void CreateResourceRequest::SetResourceConfigRemark(const string& _resourceConfigRemark)
{
    m_resourceConfigRemark = _resourceConfigRemark;
    m_resourceConfigRemarkHasBeenSet = true;
}

bool CreateResourceRequest::ResourceConfigRemarkHasBeenSet() const
{
    return m_resourceConfigRemarkHasBeenSet;
}


