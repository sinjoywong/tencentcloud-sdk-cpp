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

#include <tencentcloud/bmvpc/v20180625/model/UpgradeNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

UpgradeNatGatewayRequest::UpgradeNatGatewayRequest() :
    m_natIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_maxConcurrentHasBeenSet(false)
{
}

string UpgradeNatGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrent, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeNatGatewayRequest::GetNatId() const
{
    return m_natId;
}

void UpgradeNatGatewayRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool UpgradeNatGatewayRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string UpgradeNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void UpgradeNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool UpgradeNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t UpgradeNatGatewayRequest::GetMaxConcurrent() const
{
    return m_maxConcurrent;
}

void UpgradeNatGatewayRequest::SetMaxConcurrent(const uint64_t& _maxConcurrent)
{
    m_maxConcurrent = _maxConcurrent;
    m_maxConcurrentHasBeenSet = true;
}

bool UpgradeNatGatewayRequest::MaxConcurrentHasBeenSet() const
{
    return m_maxConcurrentHasBeenSet;
}


