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

#include <tencentcloud/iotvideo/v20191126/model/DescribeBindUsrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DescribeBindUsrRequest::DescribeBindUsrRequest() :
    m_tidHasBeenSet(false),
    m_accessIdHasBeenSet(false)
{
}

string DescribeBindUsrRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBindUsrRequest::GetTid() const
{
    return m_tid;
}

void DescribeBindUsrRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DescribeBindUsrRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string DescribeBindUsrRequest::GetAccessId() const
{
    return m_accessId;
}

void DescribeBindUsrRequest::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool DescribeBindUsrRequest::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}


