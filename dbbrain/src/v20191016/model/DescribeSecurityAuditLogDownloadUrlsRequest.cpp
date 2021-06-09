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

#include <tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogDownloadUrlsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

DescribeSecurityAuditLogDownloadUrlsRequest::DescribeSecurityAuditLogDownloadUrlsRequest() :
    m_secAuditGroupIdHasBeenSet(false),
    m_asyncRequestIdHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeSecurityAuditLogDownloadUrlsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secAuditGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecAuditGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secAuditGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequestId, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSecurityAuditLogDownloadUrlsRequest::GetSecAuditGroupId() const
{
    return m_secAuditGroupId;
}

void DescribeSecurityAuditLogDownloadUrlsRequest::SetSecAuditGroupId(const string& _secAuditGroupId)
{
    m_secAuditGroupId = _secAuditGroupId;
    m_secAuditGroupIdHasBeenSet = true;
}

bool DescribeSecurityAuditLogDownloadUrlsRequest::SecAuditGroupIdHasBeenSet() const
{
    return m_secAuditGroupIdHasBeenSet;
}

uint64_t DescribeSecurityAuditLogDownloadUrlsRequest::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void DescribeSecurityAuditLogDownloadUrlsRequest::SetAsyncRequestId(const uint64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool DescribeSecurityAuditLogDownloadUrlsRequest::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

string DescribeSecurityAuditLogDownloadUrlsRequest::GetProduct() const
{
    return m_product;
}

void DescribeSecurityAuditLogDownloadUrlsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSecurityAuditLogDownloadUrlsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


