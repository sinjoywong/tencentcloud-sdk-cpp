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

#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateReadOnlyDBInstanceResponse::CreateReadOnlyDBInstanceResponse() :
    m_dealNamesHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_dBInstanceIdSetHasBeenSet(false)
{
}

CoreInternalOutcome CreateReadOnlyDBInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DealNames") && !rsp["DealNames"].IsNull())
    {
        if (!rsp["DealNames"].IsArray())
            return CoreInternalOutcome(Error("response `DealNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DealNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }

    if (rsp.HasMember("BillId") && !rsp["BillId"].IsNull())
    {
        if (!rsp["BillId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(rsp["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (rsp.HasMember("DBInstanceIdSet") && !rsp["DBInstanceIdSet"].IsNull())
    {
        if (!rsp["DBInstanceIdSet"].IsArray())
            return CoreInternalOutcome(Error("response `DBInstanceIdSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DBInstanceIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBInstanceIdSet.push_back((*itr).GetString());
        }
        m_dBInstanceIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> CreateReadOnlyDBInstanceResponse::GetDealNames() const
{
    return m_dealNames;
}

bool CreateReadOnlyDBInstanceResponse::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

string CreateReadOnlyDBInstanceResponse::GetBillId() const
{
    return m_billId;
}

bool CreateReadOnlyDBInstanceResponse::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

vector<string> CreateReadOnlyDBInstanceResponse::GetDBInstanceIdSet() const
{
    return m_dBInstanceIdSet;
}

bool CreateReadOnlyDBInstanceResponse::DBInstanceIdSetHasBeenSet() const
{
    return m_dBInstanceIdSetHasBeenSet;
}


