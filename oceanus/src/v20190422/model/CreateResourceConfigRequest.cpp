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

#include <tencentcloud/oceanus/v20190422/model/CreateResourceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

CreateResourceConfigRequest::CreateResourceConfigRequest() :
    m_resourceIdHasBeenSet(false),
    m_resourceLocHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_autoDeleteHasBeenSet(false)
{
}

string CreateResourceConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceLocHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceLoc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceLoc.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateResourceConfigRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateResourceConfigRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateResourceConfigRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

ResourceLoc CreateResourceConfigRequest::GetResourceLoc() const
{
    return m_resourceLoc;
}

void CreateResourceConfigRequest::SetResourceLoc(const ResourceLoc& _resourceLoc)
{
    m_resourceLoc = _resourceLoc;
    m_resourceLocHasBeenSet = true;
}

bool CreateResourceConfigRequest::ResourceLocHasBeenSet() const
{
    return m_resourceLocHasBeenSet;
}

string CreateResourceConfigRequest::GetRemark() const
{
    return m_remark;
}

void CreateResourceConfigRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateResourceConfigRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateResourceConfigRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void CreateResourceConfigRequest::SetAutoDelete(const int64_t& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool CreateResourceConfigRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}


