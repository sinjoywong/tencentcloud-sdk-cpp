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

#include <tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeInstanceRenewNodesResponse::DescribeInstanceRenewNodesResponse() :
    m_totalCntHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_metaInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceRenewNodesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCnt") && !rsp["TotalCnt"].IsNull())
    {
        if (!rsp["TotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = rsp["TotalCnt"].GetInt64();
        m_totalCntHasBeenSet = true;
    }

    if (rsp.HasMember("NodeList") && !rsp["NodeList"].IsNull())
    {
        if (!rsp["NodeList"].IsArray())
            return CoreInternalOutcome(Error("response `NodeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RenewInstancesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeList.push_back(item);
        }
        m_nodeListHasBeenSet = true;
    }

    if (rsp.HasMember("MetaInfo") && !rsp["MetaInfo"].IsNull())
    {
        if (!rsp["MetaInfo"].IsArray())
            return CoreInternalOutcome(Error("response `MetaInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MetaInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metaInfo.push_back((*itr).GetString());
        }
        m_metaInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeInstanceRenewNodesResponse::GetTotalCnt() const
{
    return m_totalCnt;
}

bool DescribeInstanceRenewNodesResponse::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

vector<RenewInstancesInfo> DescribeInstanceRenewNodesResponse::GetNodeList() const
{
    return m_nodeList;
}

bool DescribeInstanceRenewNodesResponse::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

vector<string> DescribeInstanceRenewNodesResponse::GetMetaInfo() const
{
    return m_metaInfo;
}

bool DescribeInstanceRenewNodesResponse::MetaInfoHasBeenSet() const
{
    return m_metaInfoHasBeenSet;
}


