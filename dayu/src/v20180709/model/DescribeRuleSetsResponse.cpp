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

#include <tencentcloud/dayu/v20180709/model/DescribeRuleSetsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeRuleSetsResponse::DescribeRuleSetsResponse() :
    m_l4RuleSetsHasBeenSet(false),
    m_l7RuleSetsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRuleSetsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("L4RuleSets") && !rsp["L4RuleSets"].IsNull())
    {
        if (!rsp["L4RuleSets"].IsArray())
            return CoreInternalOutcome(Error("response `L4RuleSets` is not array type"));

        const rapidjson::Value &tmpValue = rsp["L4RuleSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l4RuleSets.push_back(item);
        }
        m_l4RuleSetsHasBeenSet = true;
    }

    if (rsp.HasMember("L7RuleSets") && !rsp["L7RuleSets"].IsNull())
    {
        if (!rsp["L7RuleSets"].IsArray())
            return CoreInternalOutcome(Error("response `L7RuleSets` is not array type"));

        const rapidjson::Value &tmpValue = rsp["L7RuleSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l7RuleSets.push_back(item);
        }
        m_l7RuleSetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<KeyValueRecord> DescribeRuleSetsResponse::GetL4RuleSets() const
{
    return m_l4RuleSets;
}

bool DescribeRuleSetsResponse::L4RuleSetsHasBeenSet() const
{
    return m_l4RuleSetsHasBeenSet;
}

vector<KeyValueRecord> DescribeRuleSetsResponse::GetL7RuleSets() const
{
    return m_l7RuleSets;
}

bool DescribeRuleSetsResponse::L7RuleSetsHasBeenSet() const
{
    return m_l7RuleSetsHasBeenSet;
}


