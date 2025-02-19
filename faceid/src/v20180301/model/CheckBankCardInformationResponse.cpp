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

#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CheckBankCardInformationResponse::CheckBankCardInformationResponse() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_accountBankHasBeenSet(false),
    m_accountTypeHasBeenSet(false)
{
}

CoreInternalOutcome CheckBankCardInformationResponse::Deserialize(const string &payload)
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
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("AccountBank") && !rsp["AccountBank"].IsNull())
    {
        if (!rsp["AccountBank"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountBank` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountBank = string(rsp["AccountBank"].GetString());
        m_accountBankHasBeenSet = true;
    }

    if (rsp.HasMember("AccountType") && !rsp["AccountType"].IsNull())
    {
        if (!rsp["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = rsp["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CheckBankCardInformationResponse::GetResult() const
{
    return m_result;
}

bool CheckBankCardInformationResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CheckBankCardInformationResponse::GetDescription() const
{
    return m_description;
}

bool CheckBankCardInformationResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CheckBankCardInformationResponse::GetAccountBank() const
{
    return m_accountBank;
}

bool CheckBankCardInformationResponse::AccountBankHasBeenSet() const
{
    return m_accountBankHasBeenSet;
}

int64_t CheckBankCardInformationResponse::GetAccountType() const
{
    return m_accountType;
}

bool CheckBankCardInformationResponse::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}


