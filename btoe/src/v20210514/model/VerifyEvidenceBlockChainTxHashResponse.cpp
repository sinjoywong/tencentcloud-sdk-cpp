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

#include <tencentcloud/btoe/v20210514/model/VerifyEvidenceBlockChainTxHashResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Btoe::V20210514::Model;
using namespace std;

VerifyEvidenceBlockChainTxHashResponse::VerifyEvidenceBlockChainTxHashResponse() :
    m_resultHasBeenSet(false),
    m_evidenceTimeHasBeenSet(false),
    m_evidenceIdHasBeenSet(false)
{
}

CoreInternalOutcome VerifyEvidenceBlockChainTxHashResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceTime") && !rsp["EvidenceTime"].IsNull())
    {
        if (!rsp["EvidenceTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EvidenceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceTime = string(rsp["EvidenceTime"].GetString());
        m_evidenceTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceId") && !rsp["EvidenceId"].IsNull())
    {
        if (!rsp["EvidenceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EvidenceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceId = string(rsp["EvidenceId"].GetString());
        m_evidenceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


bool VerifyEvidenceBlockChainTxHashResponse::GetResult() const
{
    return m_result;
}

bool VerifyEvidenceBlockChainTxHashResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string VerifyEvidenceBlockChainTxHashResponse::GetEvidenceTime() const
{
    return m_evidenceTime;
}

bool VerifyEvidenceBlockChainTxHashResponse::EvidenceTimeHasBeenSet() const
{
    return m_evidenceTimeHasBeenSet;
}

string VerifyEvidenceBlockChainTxHashResponse::GetEvidenceId() const
{
    return m_evidenceId;
}

bool VerifyEvidenceBlockChainTxHashResponse::EvidenceIdHasBeenSet() const
{
    return m_evidenceIdHasBeenSet;
}


