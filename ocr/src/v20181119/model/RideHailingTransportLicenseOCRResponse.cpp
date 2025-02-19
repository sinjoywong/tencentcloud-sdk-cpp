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

#include <tencentcloud/ocr/v20181119/model/RideHailingTransportLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RideHailingTransportLicenseOCRResponse::RideHailingTransportLicenseOCRResponse() :
    m_operationLicenseNumberHasBeenSet(false),
    m_vehicleOwnerHasBeenSet(false),
    m_vehicleNumberHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_releaseDateHasBeenSet(false)
{
}

CoreInternalOutcome RideHailingTransportLicenseOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OperationLicenseNumber") && !rsp["OperationLicenseNumber"].IsNull())
    {
        if (!rsp["OperationLicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `OperationLicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationLicenseNumber = string(rsp["OperationLicenseNumber"].GetString());
        m_operationLicenseNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VehicleOwner") && !rsp["VehicleOwner"].IsNull())
    {
        if (!rsp["VehicleOwner"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleOwner = string(rsp["VehicleOwner"].GetString());
        m_vehicleOwnerHasBeenSet = true;
    }

    if (rsp.HasMember("VehicleNumber") && !rsp["VehicleNumber"].IsNull())
    {
        if (!rsp["VehicleNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `VehicleNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleNumber = string(rsp["VehicleNumber"].GetString());
        m_vehicleNumberHasBeenSet = true;
    }

    if (rsp.HasMember("StartDate") && !rsp["StartDate"].IsNull())
    {
        if (!rsp["StartDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(rsp["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (rsp.HasMember("EndDate") && !rsp["EndDate"].IsNull())
    {
        if (!rsp["EndDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(rsp["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (rsp.HasMember("ReleaseDate") && !rsp["ReleaseDate"].IsNull())
    {
        if (!rsp["ReleaseDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReleaseDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDate = string(rsp["ReleaseDate"].GetString());
        m_releaseDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string RideHailingTransportLicenseOCRResponse::GetOperationLicenseNumber() const
{
    return m_operationLicenseNumber;
}

bool RideHailingTransportLicenseOCRResponse::OperationLicenseNumberHasBeenSet() const
{
    return m_operationLicenseNumberHasBeenSet;
}

string RideHailingTransportLicenseOCRResponse::GetVehicleOwner() const
{
    return m_vehicleOwner;
}

bool RideHailingTransportLicenseOCRResponse::VehicleOwnerHasBeenSet() const
{
    return m_vehicleOwnerHasBeenSet;
}

string RideHailingTransportLicenseOCRResponse::GetVehicleNumber() const
{
    return m_vehicleNumber;
}

bool RideHailingTransportLicenseOCRResponse::VehicleNumberHasBeenSet() const
{
    return m_vehicleNumberHasBeenSet;
}

string RideHailingTransportLicenseOCRResponse::GetStartDate() const
{
    return m_startDate;
}

bool RideHailingTransportLicenseOCRResponse::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string RideHailingTransportLicenseOCRResponse::GetEndDate() const
{
    return m_endDate;
}

bool RideHailingTransportLicenseOCRResponse::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string RideHailingTransportLicenseOCRResponse::GetReleaseDate() const
{
    return m_releaseDate;
}

bool RideHailingTransportLicenseOCRResponse::ReleaseDateHasBeenSet() const
{
    return m_releaseDateHasBeenSet;
}


