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

#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeAvailableClusterVersionResponse::DescribeAvailableClusterVersionResponse() :
    m_versionsHasBeenSet(false),
    m_clustersHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAvailableClusterVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Versions") && !rsp["Versions"].IsNull())
    {
        if (!rsp["Versions"].IsArray())
            return CoreInternalOutcome(Error("response `Versions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Versions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_versions.push_back((*itr).GetString());
        }
        m_versionsHasBeenSet = true;
    }

    if (rsp.HasMember("Clusters") && !rsp["Clusters"].IsNull())
    {
        if (!rsp["Clusters"].IsArray())
            return CoreInternalOutcome(Error("response `Clusters` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusters.push_back(item);
        }
        m_clustersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DescribeAvailableClusterVersionResponse::GetVersions() const
{
    return m_versions;
}

bool DescribeAvailableClusterVersionResponse::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}

vector<ClusterVersion> DescribeAvailableClusterVersionResponse::GetClusters() const
{
    return m_clusters;
}

bool DescribeAvailableClusterVersionResponse::ClustersHasBeenSet() const
{
    return m_clustersHasBeenSet;
}


