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

#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

DescribeModuleDetailResponse::DescribeModuleDetailResponse() :
    m_moduleHasBeenSet(false),
    m_moduleCounterHasBeenSet(false)
{
}

CoreInternalOutcome DescribeModuleDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Module") && !rsp["Module"].IsNull())
    {
        if (!rsp["Module"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Module` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_module.Deserialize(rsp["Module"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_moduleHasBeenSet = true;
    }

    if (rsp.HasMember("ModuleCounter") && !rsp["ModuleCounter"].IsNull())
    {
        if (!rsp["ModuleCounter"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ModuleCounter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_moduleCounter.Deserialize(rsp["ModuleCounter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_moduleCounterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


Module DescribeModuleDetailResponse::GetModule() const
{
    return m_module;
}

bool DescribeModuleDetailResponse::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

ModuleCounter DescribeModuleDetailResponse::GetModuleCounter() const
{
    return m_moduleCounter;
}

bool DescribeModuleDetailResponse::ModuleCounterHasBeenSet() const
{
    return m_moduleCounterHasBeenSet;
}


