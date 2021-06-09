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

#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DescribeFirmwareTaskResponse::DescribeFirmwareTaskResponse() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_upgradeModeHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirmwareTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductName") && !rsp["ProductName"].IsNull())
    {
        if (!rsp["ProductName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(rsp["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (rsp.HasMember("UpgradeMode") && !rsp["UpgradeMode"].IsNull())
    {
        if (!rsp["UpgradeMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpgradeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeMode = string(rsp["UpgradeMode"].GetString());
        m_upgradeModeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(rsp["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeFirmwareTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeFirmwareTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeFirmwareTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeFirmwareTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeFirmwareTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeFirmwareTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeFirmwareTaskResponse::GetType() const
{
    return m_type;
}

bool DescribeFirmwareTaskResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetProductName() const
{
    return m_productName;
}

bool DescribeFirmwareTaskResponse::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetUpgradeMode() const
{
    return m_upgradeMode;
}

bool DescribeFirmwareTaskResponse::UpgradeModeHasBeenSet() const
{
    return m_upgradeModeHasBeenSet;
}

string DescribeFirmwareTaskResponse::GetProductId() const
{
    return m_productId;
}

bool DescribeFirmwareTaskResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}


