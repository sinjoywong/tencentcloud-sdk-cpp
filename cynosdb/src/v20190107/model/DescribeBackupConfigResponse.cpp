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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupConfigResponse::DescribeBackupConfigResponse() :
    m_backupTimeBegHasBeenSet(false),
    m_backupTimeEndHasBeenSet(false),
    m_reserveDurationHasBeenSet(false),
    m_backupFreqHasBeenSet(false),
    m_backupTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackupTimeBeg") && !rsp["BackupTimeBeg"].IsNull())
    {
        if (!rsp["BackupTimeBeg"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BackupTimeBeg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeBeg = rsp["BackupTimeBeg"].GetUint64();
        m_backupTimeBegHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTimeEnd") && !rsp["BackupTimeEnd"].IsNull())
    {
        if (!rsp["BackupTimeEnd"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BackupTimeEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeEnd = rsp["BackupTimeEnd"].GetUint64();
        m_backupTimeEndHasBeenSet = true;
    }

    if (rsp.HasMember("ReserveDuration") && !rsp["ReserveDuration"].IsNull())
    {
        if (!rsp["ReserveDuration"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ReserveDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDuration = rsp["ReserveDuration"].GetUint64();
        m_reserveDurationHasBeenSet = true;
    }

    if (rsp.HasMember("BackupFreq") && !rsp["BackupFreq"].IsNull())
    {
        if (!rsp["BackupFreq"].IsArray())
            return CoreInternalOutcome(Error("response `BackupFreq` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupFreq"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupFreq.push_back((*itr).GetString());
        }
        m_backupFreqHasBeenSet = true;
    }

    if (rsp.HasMember("BackupType") && !rsp["BackupType"].IsNull())
    {
        if (!rsp["BackupType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(rsp["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeBackupConfigResponse::GetBackupTimeBeg() const
{
    return m_backupTimeBeg;
}

bool DescribeBackupConfigResponse::BackupTimeBegHasBeenSet() const
{
    return m_backupTimeBegHasBeenSet;
}

uint64_t DescribeBackupConfigResponse::GetBackupTimeEnd() const
{
    return m_backupTimeEnd;
}

bool DescribeBackupConfigResponse::BackupTimeEndHasBeenSet() const
{
    return m_backupTimeEndHasBeenSet;
}

uint64_t DescribeBackupConfigResponse::GetReserveDuration() const
{
    return m_reserveDuration;
}

bool DescribeBackupConfigResponse::ReserveDurationHasBeenSet() const
{
    return m_reserveDurationHasBeenSet;
}

vector<string> DescribeBackupConfigResponse::GetBackupFreq() const
{
    return m_backupFreq;
}

bool DescribeBackupConfigResponse::BackupFreqHasBeenSet() const
{
    return m_backupFreqHasBeenSet;
}

string DescribeBackupConfigResponse::GetBackupType() const
{
    return m_backupType;
}

bool DescribeBackupConfigResponse::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}


