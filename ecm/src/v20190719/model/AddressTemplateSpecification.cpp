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

#include <tencentcloud/ecm/v20190719/model/AddressTemplateSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

AddressTemplateSpecification::AddressTemplateSpecification() :
    m_addressIdHasBeenSet(false),
    m_addressGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome AddressTemplateSpecification::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplateSpecification.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("AddressGroupId") && !value["AddressGroupId"].IsNull())
    {
        if (!value["AddressGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplateSpecification.AddressGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressGroupId = string(value["AddressGroupId"].GetString());
        m_addressGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressTemplateSpecification::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_addressIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressGroupId.c_str(), allocator).Move(), allocator);
    }

}


string AddressTemplateSpecification::GetAddressId() const
{
    return m_addressId;
}

void AddressTemplateSpecification::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool AddressTemplateSpecification::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string AddressTemplateSpecification::GetAddressGroupId() const
{
    return m_addressGroupId;
}

void AddressTemplateSpecification::SetAddressGroupId(const string& _addressGroupId)
{
    m_addressGroupId = _addressGroupId;
    m_addressGroupIdHasBeenSet = true;
}

bool AddressTemplateSpecification::AddressGroupIdHasBeenSet() const
{
    return m_addressGroupIdHasBeenSet;
}

