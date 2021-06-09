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

#include <tencentcloud/dnspod/v20210323/model/ModifyRecordBatchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyRecordBatchResponse::ModifyRecordBatchResponse() :
    m_jobIdHasBeenSet(false),
    m_detailListHasBeenSet(false)
{
}

CoreInternalOutcome ModifyRecordBatchResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `JobId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = rsp["JobId"].GetUint64();
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("DetailList") && !rsp["DetailList"].IsNull())
    {
        if (!rsp["DetailList"].IsArray())
            return CoreInternalOutcome(Error("response `DetailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModifyRecordBatchDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailList.push_back(item);
        }
        m_detailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t ModifyRecordBatchResponse::GetJobId() const
{
    return m_jobId;
}

bool ModifyRecordBatchResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<ModifyRecordBatchDetail> ModifyRecordBatchResponse::GetDetailList() const
{
    return m_detailList;
}

bool ModifyRecordBatchResponse::DetailListHasBeenSet() const
{
    return m_detailListHasBeenSet;
}


