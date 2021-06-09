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

#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

ListVersionByFunctionResponse::ListVersionByFunctionResponse() :
    m_functionVersionHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome ListVersionByFunctionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FunctionVersion") && !rsp["FunctionVersion"].IsNull())
    {
        if (!rsp["FunctionVersion"].IsArray())
            return CoreInternalOutcome(Error("response `FunctionVersion` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FunctionVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_functionVersion.push_back((*itr).GetString());
        }
        m_functionVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Versions") && !rsp["Versions"].IsNull())
    {
        if (!rsp["Versions"].IsArray())
            return CoreInternalOutcome(Error("response `Versions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Versions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FunctionVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versions.push_back(item);
        }
        m_versionsHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}


vector<string> ListVersionByFunctionResponse::GetFunctionVersion() const
{
    return m_functionVersion;
}

bool ListVersionByFunctionResponse::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

vector<FunctionVersion> ListVersionByFunctionResponse::GetVersions() const
{
    return m_versions;
}

bool ListVersionByFunctionResponse::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}

uint64_t ListVersionByFunctionResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool ListVersionByFunctionResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


