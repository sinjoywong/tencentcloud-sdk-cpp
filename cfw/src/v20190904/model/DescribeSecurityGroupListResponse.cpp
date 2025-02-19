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

#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeSecurityGroupListResponse::DescribeSecurityGroupListResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_allTotalHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityGroupListResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupListData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("AllTotal") && !rsp["AllTotal"].IsNull())
    {
        if (!rsp["AllTotal"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AllTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allTotal = rsp["AllTotal"].GetUint64();
        m_allTotalHasBeenSet = true;
    }

    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeSecurityGroupListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeSecurityGroupListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<SecurityGroupListData> DescribeSecurityGroupListResponse::GetData() const
{
    return m_data;
}

bool DescribeSecurityGroupListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t DescribeSecurityGroupListResponse::GetAllTotal() const
{
    return m_allTotal;
}

bool DescribeSecurityGroupListResponse::AllTotalHasBeenSet() const
{
    return m_allTotalHasBeenSet;
}

uint64_t DescribeSecurityGroupListResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeSecurityGroupListResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


