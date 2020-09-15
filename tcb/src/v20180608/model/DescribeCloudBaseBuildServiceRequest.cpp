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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DescribeCloudBaseBuildServiceRequest::DescribeCloudBaseBuildServiceRequest() :
    m_envIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_cIBusinessHasBeenSet(false)
{
}

string DescribeCloudBaseBuildServiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_cIBusinessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CIBusiness";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cIBusiness.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudBaseBuildServiceRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCloudBaseBuildServiceRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCloudBaseBuildServiceRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCloudBaseBuildServiceRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeCloudBaseBuildServiceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeCloudBaseBuildServiceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeCloudBaseBuildServiceRequest::GetCIBusiness() const
{
    return m_cIBusiness;
}

void DescribeCloudBaseBuildServiceRequest::SetCIBusiness(const string& _cIBusiness)
{
    m_cIBusiness = _cIBusiness;
    m_cIBusinessHasBeenSet = true;
}

bool DescribeCloudBaseBuildServiceRequest::CIBusinessHasBeenSet() const
{
    return m_cIBusinessHasBeenSet;
}


