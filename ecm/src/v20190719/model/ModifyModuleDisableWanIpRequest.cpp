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

#include <tencentcloud/ecm/v20190719/model/ModifyModuleDisableWanIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

ModifyModuleDisableWanIpRequest::ModifyModuleDisableWanIpRequest() :
    m_moduleIdHasBeenSet(false),
    m_disableWanIpHasBeenSet(false)
{
}

string ModifyModuleDisableWanIpRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_disableWanIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisableWanIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableWanIp, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModuleDisableWanIpRequest::GetModuleId() const
{
    return m_moduleId;
}

void ModifyModuleDisableWanIpRequest::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ModifyModuleDisableWanIpRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

bool ModifyModuleDisableWanIpRequest::GetDisableWanIp() const
{
    return m_disableWanIp;
}

void ModifyModuleDisableWanIpRequest::SetDisableWanIp(const bool& _disableWanIp)
{
    m_disableWanIp = _disableWanIp;
    m_disableWanIpHasBeenSet = true;
}

bool ModifyModuleDisableWanIpRequest::DisableWanIpHasBeenSet() const
{
    return m_disableWanIpHasBeenSet;
}


