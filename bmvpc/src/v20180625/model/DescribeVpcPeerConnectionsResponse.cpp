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

#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcPeerConnectionsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

DescribeVpcPeerConnectionsResponse::DescribeVpcPeerConnectionsResponse() :
    m_totalCountHasBeenSet(false),
    m_vpcPeerConnectionSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVpcPeerConnectionsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("VpcPeerConnectionSet") && !rsp["VpcPeerConnectionSet"].IsNull())
    {
        if (!rsp["VpcPeerConnectionSet"].IsArray())
            return CoreInternalOutcome(Error("response `VpcPeerConnectionSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VpcPeerConnectionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcPeerConnection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcPeerConnectionSet.push_back(item);
        }
        m_vpcPeerConnectionSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeVpcPeerConnectionsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeVpcPeerConnectionsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<VpcPeerConnection> DescribeVpcPeerConnectionsResponse::GetVpcPeerConnectionSet() const
{
    return m_vpcPeerConnectionSet;
}

bool DescribeVpcPeerConnectionsResponse::VpcPeerConnectionSetHasBeenSet() const
{
    return m_vpcPeerConnectionSetHasBeenSet;
}


