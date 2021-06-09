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

#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DescribeDeviceResponse::DescribeDeviceResponse() :
    m_deviceNameHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_deviceCertHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_connIPHasBeenSet(false),
    m_nbiotDeviceIDHasBeenSet(false),
    m_loraDevEuiHasBeenSet(false),
    m_loraMoteTypeHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_firstOnlineTimeHasBeenSet(false),
    m_lastOfflineTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_certStateHasBeenSet(false),
    m_enableStateHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_firmwareUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeviceName") && !rsp["DeviceName"].IsNull())
    {
        if (!rsp["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(rsp["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Online") && !rsp["Online"].IsNull())
    {
        if (!rsp["Online"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = rsp["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (rsp.HasMember("LoginTime") && !rsp["LoginTime"].IsNull())
    {
        if (!rsp["LoginTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = rsp["LoginTime"].GetUint64();
        m_loginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("LastUpdateTime") && !rsp["LastUpdateTime"].IsNull())
    {
        if (!rsp["LastUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LastUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = rsp["LastUpdateTime"].GetUint64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceCert") && !rsp["DeviceCert"].IsNull())
    {
        if (!rsp["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(rsp["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (rsp.HasMember("DevicePsk") && !rsp["DevicePsk"].IsNull())
    {
        if (!rsp["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Error("response `DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(rsp["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceType") && !rsp["DeviceType"].IsNull())
    {
        if (!rsp["DeviceType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DeviceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = rsp["DeviceType"].GetUint64();
        m_deviceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Imei") && !rsp["Imei"].IsNull())
    {
        if (!rsp["Imei"].IsString())
        {
            return CoreInternalOutcome(Error("response `Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(rsp["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (rsp.HasMember("Isp") && !rsp["Isp"].IsNull())
    {
        if (!rsp["Isp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Isp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isp = rsp["Isp"].GetUint64();
        m_ispHasBeenSet = true;
    }

    if (rsp.HasMember("ConnIP") && !rsp["ConnIP"].IsNull())
    {
        if (!rsp["ConnIP"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ConnIP` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connIP = rsp["ConnIP"].GetUint64();
        m_connIPHasBeenSet = true;
    }

    if (rsp.HasMember("NbiotDeviceID") && !rsp["NbiotDeviceID"].IsNull())
    {
        if (!rsp["NbiotDeviceID"].IsString())
        {
            return CoreInternalOutcome(Error("response `NbiotDeviceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nbiotDeviceID = string(rsp["NbiotDeviceID"].GetString());
        m_nbiotDeviceIDHasBeenSet = true;
    }

    if (rsp.HasMember("LoraDevEui") && !rsp["LoraDevEui"].IsNull())
    {
        if (!rsp["LoraDevEui"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoraDevEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraDevEui = string(rsp["LoraDevEui"].GetString());
        m_loraDevEuiHasBeenSet = true;
    }

    if (rsp.HasMember("LoraMoteType") && !rsp["LoraMoteType"].IsNull())
    {
        if (!rsp["LoraMoteType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoraMoteType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loraMoteType = rsp["LoraMoteType"].GetUint64();
        m_loraMoteTypeHasBeenSet = true;
    }

    if (rsp.HasMember("LogLevel") && !rsp["LogLevel"].IsNull())
    {
        if (!rsp["LogLevel"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LogLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = rsp["LogLevel"].GetUint64();
        m_logLevelHasBeenSet = true;
    }

    if (rsp.HasMember("FirstOnlineTime") && !rsp["FirstOnlineTime"].IsNull())
    {
        if (!rsp["FirstOnlineTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FirstOnlineTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstOnlineTime = rsp["FirstOnlineTime"].GetUint64();
        m_firstOnlineTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastOfflineTime") && !rsp["LastOfflineTime"].IsNull())
    {
        if (!rsp["LastOfflineTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LastOfflineTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOfflineTime = rsp["LastOfflineTime"].GetUint64();
        m_lastOfflineTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CertState") && !rsp["CertState"].IsNull())
    {
        if (!rsp["CertState"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CertState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certState = rsp["CertState"].GetUint64();
        m_certStateHasBeenSet = true;
    }

    if (rsp.HasMember("EnableState") && !rsp["EnableState"].IsNull())
    {
        if (!rsp["EnableState"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EnableState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableState = rsp["EnableState"].GetUint64();
        m_enableStateHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("ClientIP") && !rsp["ClientIP"].IsNull())
    {
        if (!rsp["ClientIP"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIP = string(rsp["ClientIP"].GetString());
        m_clientIPHasBeenSet = true;
    }

    if (rsp.HasMember("FirmwareUpdateTime") && !rsp["FirmwareUpdateTime"].IsNull())
    {
        if (!rsp["FirmwareUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FirmwareUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firmwareUpdateTime = rsp["FirmwareUpdateTime"].GetUint64();
        m_firmwareUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDeviceResponse::GetDeviceName() const
{
    return m_deviceName;
}

bool DescribeDeviceResponse::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetOnline() const
{
    return m_online;
}

bool DescribeDeviceResponse::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLoginTime() const
{
    return m_loginTime;
}

bool DescribeDeviceResponse::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string DescribeDeviceResponse::GetVersion() const
{
    return m_version;
}

bool DescribeDeviceResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

bool DescribeDeviceResponse::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string DescribeDeviceResponse::GetDeviceCert() const
{
    return m_deviceCert;
}

bool DescribeDeviceResponse::DeviceCertHasBeenSet() const
{
    return m_deviceCertHasBeenSet;
}

string DescribeDeviceResponse::GetDevicePsk() const
{
    return m_devicePsk;
}

bool DescribeDeviceResponse::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

vector<DeviceTag> DescribeDeviceResponse::GetTags() const
{
    return m_tags;
}

bool DescribeDeviceResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetDeviceType() const
{
    return m_deviceType;
}

bool DescribeDeviceResponse::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DescribeDeviceResponse::GetImei() const
{
    return m_imei;
}

bool DescribeDeviceResponse::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetIsp() const
{
    return m_isp;
}

bool DescribeDeviceResponse::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetConnIP() const
{
    return m_connIP;
}

bool DescribeDeviceResponse::ConnIPHasBeenSet() const
{
    return m_connIPHasBeenSet;
}

string DescribeDeviceResponse::GetNbiotDeviceID() const
{
    return m_nbiotDeviceID;
}

bool DescribeDeviceResponse::NbiotDeviceIDHasBeenSet() const
{
    return m_nbiotDeviceIDHasBeenSet;
}

string DescribeDeviceResponse::GetLoraDevEui() const
{
    return m_loraDevEui;
}

bool DescribeDeviceResponse::LoraDevEuiHasBeenSet() const
{
    return m_loraDevEuiHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLoraMoteType() const
{
    return m_loraMoteType;
}

bool DescribeDeviceResponse::LoraMoteTypeHasBeenSet() const
{
    return m_loraMoteTypeHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLogLevel() const
{
    return m_logLevel;
}

bool DescribeDeviceResponse::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetFirstOnlineTime() const
{
    return m_firstOnlineTime;
}

bool DescribeDeviceResponse::FirstOnlineTimeHasBeenSet() const
{
    return m_firstOnlineTimeHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetLastOfflineTime() const
{
    return m_lastOfflineTime;
}

bool DescribeDeviceResponse::LastOfflineTimeHasBeenSet() const
{
    return m_lastOfflineTimeHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDeviceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetCertState() const
{
    return m_certState;
}

bool DescribeDeviceResponse::CertStateHasBeenSet() const
{
    return m_certStateHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetEnableState() const
{
    return m_enableState;
}

bool DescribeDeviceResponse::EnableStateHasBeenSet() const
{
    return m_enableStateHasBeenSet;
}

vector<DeviceLabel> DescribeDeviceResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeDeviceResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string DescribeDeviceResponse::GetClientIP() const
{
    return m_clientIP;
}

bool DescribeDeviceResponse::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

uint64_t DescribeDeviceResponse::GetFirmwareUpdateTime() const
{
    return m_firmwareUpdateTime;
}

bool DescribeDeviceResponse::FirmwareUpdateTimeHasBeenSet() const
{
    return m_firmwareUpdateTimeHasBeenSet;
}


