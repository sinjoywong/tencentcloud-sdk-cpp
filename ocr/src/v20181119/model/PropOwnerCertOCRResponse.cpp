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

#include <tencentcloud/ocr/v20181119/model/PropOwnerCertOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PropOwnerCertOCRResponse::PropOwnerCertOCRResponse() :
    m_ownerHasBeenSet(false),
    m_possessionHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_purposeHasBeenSet(false),
    m_natureHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome PropOwnerCertOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Owner") && !rsp["Owner"].IsNull())
    {
        if (!rsp["Owner"].IsString())
        {
            return CoreInternalOutcome(Error("response `Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(rsp["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (rsp.HasMember("Possession") && !rsp["Possession"].IsNull())
    {
        if (!rsp["Possession"].IsString())
        {
            return CoreInternalOutcome(Error("response `Possession` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_possession = string(rsp["Possession"].GetString());
        m_possessionHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterTime") && !rsp["RegisterTime"].IsNull())
    {
        if (!rsp["RegisterTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = string(rsp["RegisterTime"].GetString());
        m_registerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Purpose") && !rsp["Purpose"].IsNull())
    {
        if (!rsp["Purpose"].IsString())
        {
            return CoreInternalOutcome(Error("response `Purpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purpose = string(rsp["Purpose"].GetString());
        m_purposeHasBeenSet = true;
    }

    if (rsp.HasMember("Nature") && !rsp["Nature"].IsNull())
    {
        if (!rsp["Nature"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nature = string(rsp["Nature"].GetString());
        m_natureHasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsString())
        {
            return CoreInternalOutcome(Error("response `Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(rsp["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string PropOwnerCertOCRResponse::GetOwner() const
{
    return m_owner;
}

bool PropOwnerCertOCRResponse::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string PropOwnerCertOCRResponse::GetPossession() const
{
    return m_possession;
}

bool PropOwnerCertOCRResponse::PossessionHasBeenSet() const
{
    return m_possessionHasBeenSet;
}

string PropOwnerCertOCRResponse::GetRegisterTime() const
{
    return m_registerTime;
}

bool PropOwnerCertOCRResponse::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string PropOwnerCertOCRResponse::GetPurpose() const
{
    return m_purpose;
}

bool PropOwnerCertOCRResponse::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

string PropOwnerCertOCRResponse::GetNature() const
{
    return m_nature;
}

bool PropOwnerCertOCRResponse::NatureHasBeenSet() const
{
    return m_natureHasBeenSet;
}

string PropOwnerCertOCRResponse::GetLocation() const
{
    return m_location;
}

bool PropOwnerCertOCRResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}


