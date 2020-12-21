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

#include <tencentcloud/scf/v20180416/model/PutTotalConcurrencyConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

PutTotalConcurrencyConfigRequest::PutTotalConcurrencyConfigRequest() :
    m_totalConcurrencyMemHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string PutTotalConcurrencyConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_totalConcurrencyMemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalConcurrencyMem, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PutTotalConcurrencyConfigRequest::GetTotalConcurrencyMem() const
{
    return m_totalConcurrencyMem;
}

void PutTotalConcurrencyConfigRequest::SetTotalConcurrencyMem(const uint64_t& _totalConcurrencyMem)
{
    m_totalConcurrencyMem = _totalConcurrencyMem;
    m_totalConcurrencyMemHasBeenSet = true;
}

bool PutTotalConcurrencyConfigRequest::TotalConcurrencyMemHasBeenSet() const
{
    return m_totalConcurrencyMemHasBeenSet;
}

string PutTotalConcurrencyConfigRequest::GetNamespace() const
{
    return m_namespace;
}

void PutTotalConcurrencyConfigRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool PutTotalConcurrencyConfigRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


