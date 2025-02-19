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

#include <tencentcloud/iotvideoindustry/v20201201/model/CreateDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

CreateDeviceResponse::CreateDeviceResponse() :
    m_deviceCodeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_virtualGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateDeviceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeviceCode") && !rsp["DeviceCode"].IsNull())
    {
        if (!rsp["DeviceCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCode = string(rsp["DeviceCode"].GetString());
        m_deviceCodeHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceId") && !rsp["DeviceId"].IsNull())
    {
        if (!rsp["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(rsp["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualGroupId") && !rsp["VirtualGroupId"].IsNull())
    {
        if (!rsp["VirtualGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VirtualGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualGroupId = string(rsp["VirtualGroupId"].GetString());
        m_virtualGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateDeviceResponse::GetDeviceCode() const
{
    return m_deviceCode;
}

bool CreateDeviceResponse::DeviceCodeHasBeenSet() const
{
    return m_deviceCodeHasBeenSet;
}

string CreateDeviceResponse::GetDeviceId() const
{
    return m_deviceId;
}

bool CreateDeviceResponse::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string CreateDeviceResponse::GetVirtualGroupId() const
{
    return m_virtualGroupId;
}

bool CreateDeviceResponse::VirtualGroupIdHasBeenSet() const
{
    return m_virtualGroupIdHasBeenSet;
}


