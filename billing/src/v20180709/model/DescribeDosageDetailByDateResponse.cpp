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

#include <tencentcloud/billing/v20180709/model/DescribeDosageDetailByDateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeDosageDetailByDateResponse::DescribeDosageDetailByDateResponse() :
    m_unitHasBeenSet(false),
    m_detailSetsHasBeenSet(false),
    m_retCodeHasBeenSet(false),
    m_retMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDosageDetailByDateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Unit") && !rsp["Unit"].IsNull())
    {
        if (!rsp["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(rsp["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (rsp.HasMember("DetailSets") && !rsp["DetailSets"].IsNull())
    {
        if (!rsp["DetailSets"].IsArray())
            return CoreInternalOutcome(Error("response `DetailSets` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DetailSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailSets.push_back(item);
        }
        m_detailSetsHasBeenSet = true;
    }

    if (rsp.HasMember("RetCode") && !rsp["RetCode"].IsNull())
    {
        if (!rsp["RetCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = rsp["RetCode"].GetInt64();
        m_retCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RetMsg") && !rsp["RetMsg"].IsNull())
    {
        if (!rsp["RetMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `RetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retMsg = string(rsp["RetMsg"].GetString());
        m_retMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDosageDetailByDateResponse::GetUnit() const
{
    return m_unit;
}

bool DescribeDosageDetailByDateResponse::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

vector<DetailSet> DescribeDosageDetailByDateResponse::GetDetailSets() const
{
    return m_detailSets;
}

bool DescribeDosageDetailByDateResponse::DetailSetsHasBeenSet() const
{
    return m_detailSetsHasBeenSet;
}

int64_t DescribeDosageDetailByDateResponse::GetRetCode() const
{
    return m_retCode;
}

bool DescribeDosageDetailByDateResponse::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

string DescribeDosageDetailByDateResponse::GetRetMsg() const
{
    return m_retMsg;
}

bool DescribeDosageDetailByDateResponse::RetMsgHasBeenSet() const
{
    return m_retMsgHasBeenSet;
}


