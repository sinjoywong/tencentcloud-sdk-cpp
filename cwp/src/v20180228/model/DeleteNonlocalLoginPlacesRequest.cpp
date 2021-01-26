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

#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

DeleteNonlocalLoginPlacesRequest::DeleteNonlocalLoginPlacesRequest() :
    m_delTypeHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

string DeleteNonlocalLoginPlacesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_delTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_delType.c_str(), allocator).Move(), allocator);
    }

    if (m_idsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ip.begin(); itr != m_ip.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteNonlocalLoginPlacesRequest::GetDelType() const
{
    return m_delType;
}

void DeleteNonlocalLoginPlacesRequest::SetDelType(const string& _delType)
{
    m_delType = _delType;
    m_delTypeHasBeenSet = true;
}

bool DeleteNonlocalLoginPlacesRequest::DelTypeHasBeenSet() const
{
    return m_delTypeHasBeenSet;
}

vector<uint64_t> DeleteNonlocalLoginPlacesRequest::GetIds() const
{
    return m_ids;
}

void DeleteNonlocalLoginPlacesRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool DeleteNonlocalLoginPlacesRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

vector<string> DeleteNonlocalLoginPlacesRequest::GetIp() const
{
    return m_ip;
}

void DeleteNonlocalLoginPlacesRequest::SetIp(const vector<string>& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DeleteNonlocalLoginPlacesRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}


