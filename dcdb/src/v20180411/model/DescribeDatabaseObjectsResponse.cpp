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

#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDatabaseObjectsResponse::DescribeDatabaseObjectsResponse() :
    m_instanceIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_viewsHasBeenSet(false),
    m_procsHasBeenSet(false),
    m_funcsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatabaseObjectsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("DbName") && !rsp["DbName"].IsNull())
    {
        if (!rsp["DbName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(rsp["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (rsp.HasMember("Tables") && !rsp["Tables"].IsNull())
    {
        if (!rsp["Tables"].IsArray())
            return CoreInternalOutcome(Error("response `Tables` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabaseTable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tables.push_back(item);
        }
        m_tablesHasBeenSet = true;
    }

    if (rsp.HasMember("Views") && !rsp["Views"].IsNull())
    {
        if (!rsp["Views"].IsArray())
            return CoreInternalOutcome(Error("response `Views` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Views"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabaseView item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_views.push_back(item);
        }
        m_viewsHasBeenSet = true;
    }

    if (rsp.HasMember("Procs") && !rsp["Procs"].IsNull())
    {
        if (!rsp["Procs"].IsArray())
            return CoreInternalOutcome(Error("response `Procs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Procs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabaseProcedure item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_procs.push_back(item);
        }
        m_procsHasBeenSet = true;
    }

    if (rsp.HasMember("Funcs") && !rsp["Funcs"].IsNull())
    {
        if (!rsp["Funcs"].IsArray())
            return CoreInternalOutcome(Error("response `Funcs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Funcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabaseFunction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_funcs.push_back(item);
        }
        m_funcsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDatabaseObjectsResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDatabaseObjectsResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDatabaseObjectsResponse::GetDbName() const
{
    return m_dbName;
}

bool DescribeDatabaseObjectsResponse::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

vector<DatabaseTable> DescribeDatabaseObjectsResponse::GetTables() const
{
    return m_tables;
}

bool DescribeDatabaseObjectsResponse::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

vector<DatabaseView> DescribeDatabaseObjectsResponse::GetViews() const
{
    return m_views;
}

bool DescribeDatabaseObjectsResponse::ViewsHasBeenSet() const
{
    return m_viewsHasBeenSet;
}

vector<DatabaseProcedure> DescribeDatabaseObjectsResponse::GetProcs() const
{
    return m_procs;
}

bool DescribeDatabaseObjectsResponse::ProcsHasBeenSet() const
{
    return m_procsHasBeenSet;
}

vector<DatabaseFunction> DescribeDatabaseObjectsResponse::GetFuncs() const
{
    return m_funcs;
}

bool DescribeDatabaseObjectsResponse::FuncsHasBeenSet() const
{
    return m_funcsHasBeenSet;
}


