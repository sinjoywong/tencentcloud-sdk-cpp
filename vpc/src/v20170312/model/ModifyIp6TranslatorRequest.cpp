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

#include <tencentcloud/vpc/v20170312/model/ModifyIp6TranslatorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyIp6TranslatorRequest::ModifyIp6TranslatorRequest() :
    m_ip6TranslatorIdHasBeenSet(false),
    m_ip6TranslatorNameHasBeenSet(false)
{
}

string ModifyIp6TranslatorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ip6TranslatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6TranslatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6TranslatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6TranslatorName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIp6TranslatorRequest::GetIp6TranslatorId() const
{
    return m_ip6TranslatorId;
}

void ModifyIp6TranslatorRequest::SetIp6TranslatorId(const string& _ip6TranslatorId)
{
    m_ip6TranslatorId = _ip6TranslatorId;
    m_ip6TranslatorIdHasBeenSet = true;
}

bool ModifyIp6TranslatorRequest::Ip6TranslatorIdHasBeenSet() const
{
    return m_ip6TranslatorIdHasBeenSet;
}

string ModifyIp6TranslatorRequest::GetIp6TranslatorName() const
{
    return m_ip6TranslatorName;
}

void ModifyIp6TranslatorRequest::SetIp6TranslatorName(const string& _ip6TranslatorName)
{
    m_ip6TranslatorName = _ip6TranslatorName;
    m_ip6TranslatorNameHasBeenSet = true;
}

bool ModifyIp6TranslatorRequest::Ip6TranslatorNameHasBeenSet() const
{
    return m_ip6TranslatorNameHasBeenSet;
}


