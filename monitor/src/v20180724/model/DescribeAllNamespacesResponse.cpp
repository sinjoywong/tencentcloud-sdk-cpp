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

#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAllNamespacesResponse::DescribeAllNamespacesResponse() :
    m_qceNamespacesHasBeenSet(false),
    m_customNamespacesHasBeenSet(false),
    m_qceNamespacesNewHasBeenSet(false),
    m_customNamespacesNewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAllNamespacesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("QceNamespaces") && !rsp["QceNamespaces"].IsNull())
    {
        if (!rsp["QceNamespaces"].IsObject())
        {
            return CoreInternalOutcome(Error("response `QceNamespaces` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qceNamespaces.Deserialize(rsp["QceNamespaces"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qceNamespacesHasBeenSet = true;
    }

    if (rsp.HasMember("CustomNamespaces") && !rsp["CustomNamespaces"].IsNull())
    {
        if (!rsp["CustomNamespaces"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CustomNamespaces` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customNamespaces.Deserialize(rsp["CustomNamespaces"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customNamespacesHasBeenSet = true;
    }

    if (rsp.HasMember("QceNamespacesNew") && !rsp["QceNamespacesNew"].IsNull())
    {
        if (!rsp["QceNamespacesNew"].IsArray())
            return CoreInternalOutcome(Error("response `QceNamespacesNew` is not array type"));

        const rapidjson::Value &tmpValue = rsp["QceNamespacesNew"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonNamespace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qceNamespacesNew.push_back(item);
        }
        m_qceNamespacesNewHasBeenSet = true;
    }

    if (rsp.HasMember("CustomNamespacesNew") && !rsp["CustomNamespacesNew"].IsNull())
    {
        if (!rsp["CustomNamespacesNew"].IsArray())
            return CoreInternalOutcome(Error("response `CustomNamespacesNew` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomNamespacesNew"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonNamespace item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customNamespacesNew.push_back(item);
        }
        m_customNamespacesNewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


CommonNamespace DescribeAllNamespacesResponse::GetQceNamespaces() const
{
    return m_qceNamespaces;
}

bool DescribeAllNamespacesResponse::QceNamespacesHasBeenSet() const
{
    return m_qceNamespacesHasBeenSet;
}

CommonNamespace DescribeAllNamespacesResponse::GetCustomNamespaces() const
{
    return m_customNamespaces;
}

bool DescribeAllNamespacesResponse::CustomNamespacesHasBeenSet() const
{
    return m_customNamespacesHasBeenSet;
}

vector<CommonNamespace> DescribeAllNamespacesResponse::GetQceNamespacesNew() const
{
    return m_qceNamespacesNew;
}

bool DescribeAllNamespacesResponse::QceNamespacesNewHasBeenSet() const
{
    return m_qceNamespacesNewHasBeenSet;
}

vector<CommonNamespace> DescribeAllNamespacesResponse::GetCustomNamespacesNew() const
{
    return m_customNamespacesNew;
}

bool DescribeAllNamespacesResponse::CustomNamespacesNewHasBeenSet() const
{
    return m_customNamespacesNewHasBeenSet;
}


