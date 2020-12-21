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

#include <tencentcloud/scf/v20180416/model/GetProvisionedConcurrencyConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetProvisionedConcurrencyConfigResponse::GetProvisionedConcurrencyConfigResponse() :
    m_unallocatedConcurrencyNumHasBeenSet(false),
    m_allocatedHasBeenSet(false)
{
}

CoreInternalOutcome GetProvisionedConcurrencyConfigResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("UnallocatedConcurrencyNum") && !rsp["UnallocatedConcurrencyNum"].IsNull())
    {
        if (!rsp["UnallocatedConcurrencyNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `UnallocatedConcurrencyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unallocatedConcurrencyNum = rsp["UnallocatedConcurrencyNum"].GetUint64();
        m_unallocatedConcurrencyNumHasBeenSet = true;
    }

    if (rsp.HasMember("Allocated") && !rsp["Allocated"].IsNull())
    {
        if (!rsp["Allocated"].IsArray())
            return CoreInternalOutcome(Error("response `Allocated` is not array type"));

        const Value &tmpValue = rsp["Allocated"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VersionProvisionedConcurrencyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_allocated.push_back(item);
        }
        m_allocatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t GetProvisionedConcurrencyConfigResponse::GetUnallocatedConcurrencyNum() const
{
    return m_unallocatedConcurrencyNum;
}

bool GetProvisionedConcurrencyConfigResponse::UnallocatedConcurrencyNumHasBeenSet() const
{
    return m_unallocatedConcurrencyNumHasBeenSet;
}

vector<VersionProvisionedConcurrencyInfo> GetProvisionedConcurrencyConfigResponse::GetAllocated() const
{
    return m_allocated;
}

bool GetProvisionedConcurrencyConfigResponse::AllocatedHasBeenSet() const
{
    return m_allocatedHasBeenSet;
}


