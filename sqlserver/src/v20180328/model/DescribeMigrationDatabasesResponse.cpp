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

#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDatabasesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeMigrationDatabasesResponse::DescribeMigrationDatabasesResponse() :
    m_amountHasBeenSet(false),
    m_migrateDBSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMigrationDatabasesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Amount") && !rsp["Amount"].IsNull())
    {
        if (!rsp["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = rsp["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }

    if (rsp.HasMember("MigrateDBSet") && !rsp["MigrateDBSet"].IsNull())
    {
        if (!rsp["MigrateDBSet"].IsArray())
            return CoreInternalOutcome(Error("response `MigrateDBSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MigrateDBSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_migrateDBSet.push_back((*itr).GetString());
        }
        m_migrateDBSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeMigrationDatabasesResponse::GetAmount() const
{
    return m_amount;
}

bool DescribeMigrationDatabasesResponse::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

vector<string> DescribeMigrationDatabasesResponse::GetMigrateDBSet() const
{
    return m_migrateDBSet;
}

bool DescribeMigrationDatabasesResponse::MigrateDBSetHasBeenSet() const
{
    return m_migrateDBSetHasBeenSet;
}


