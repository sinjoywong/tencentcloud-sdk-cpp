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

#include <tencentcloud/ssl/v20191205/model/DescribeManagerDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeManagerDetailResponse::DescribeManagerDetailResponse() :
    m_statusHasBeenSet(false),
    m_managerFirstNameHasBeenSet(false),
    m_managerMailHasBeenSet(false),
    m_contactFirstNameHasBeenSet(false),
    m_managerLastNameHasBeenSet(false),
    m_contactPositionHasBeenSet(false),
    m_managerPositionHasBeenSet(false),
    m_verifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_contactLastNameHasBeenSet(false),
    m_managerPhoneHasBeenSet(false),
    m_contactPhoneHasBeenSet(false),
    m_contactMailHasBeenSet(false),
    m_managerDepartmentHasBeenSet(false),
    m_companyInfoHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_managerIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeManagerDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerFirstName") && !rsp["ManagerFirstName"].IsNull())
    {
        if (!rsp["ManagerFirstName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManagerFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerFirstName = string(rsp["ManagerFirstName"].GetString());
        m_managerFirstNameHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerMail") && !rsp["ManagerMail"].IsNull())
    {
        if (!rsp["ManagerMail"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManagerMail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerMail = string(rsp["ManagerMail"].GetString());
        m_managerMailHasBeenSet = true;
    }

    if (rsp.HasMember("ContactFirstName") && !rsp["ContactFirstName"].IsNull())
    {
        if (!rsp["ContactFirstName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContactFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactFirstName = string(rsp["ContactFirstName"].GetString());
        m_contactFirstNameHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerLastName") && !rsp["ManagerLastName"].IsNull())
    {
        if (!rsp["ManagerLastName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManagerLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerLastName = string(rsp["ManagerLastName"].GetString());
        m_managerLastNameHasBeenSet = true;
    }

    if (rsp.HasMember("ContactPosition") && !rsp["ContactPosition"].IsNull())
    {
        if (!rsp["ContactPosition"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContactPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactPosition = string(rsp["ContactPosition"].GetString());
        m_contactPositionHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerPosition") && !rsp["ManagerPosition"].IsNull())
    {
        if (!rsp["ManagerPosition"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManagerPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerPosition = string(rsp["ManagerPosition"].GetString());
        m_managerPositionHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyTime") && !rsp["VerifyTime"].IsNull())
    {
        if (!rsp["VerifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyTime = string(rsp["VerifyTime"].GetString());
        m_verifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ContactLastName") && !rsp["ContactLastName"].IsNull())
    {
        if (!rsp["ContactLastName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContactLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactLastName = string(rsp["ContactLastName"].GetString());
        m_contactLastNameHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerPhone") && !rsp["ManagerPhone"].IsNull())
    {
        if (!rsp["ManagerPhone"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManagerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerPhone = string(rsp["ManagerPhone"].GetString());
        m_managerPhoneHasBeenSet = true;
    }

    if (rsp.HasMember("ContactPhone") && !rsp["ContactPhone"].IsNull())
    {
        if (!rsp["ContactPhone"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContactPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactPhone = string(rsp["ContactPhone"].GetString());
        m_contactPhoneHasBeenSet = true;
    }

    if (rsp.HasMember("ContactMail") && !rsp["ContactMail"].IsNull())
    {
        if (!rsp["ContactMail"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContactMail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactMail = string(rsp["ContactMail"].GetString());
        m_contactMailHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerDepartment") && !rsp["ManagerDepartment"].IsNull())
    {
        if (!rsp["ManagerDepartment"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManagerDepartment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerDepartment = string(rsp["ManagerDepartment"].GetString());
        m_managerDepartmentHasBeenSet = true;
    }

    if (rsp.HasMember("CompanyInfo") && !rsp["CompanyInfo"].IsNull())
    {
        if (!rsp["CompanyInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CompanyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_companyInfo.Deserialize(rsp["CompanyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_companyInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CompanyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = rsp["CompanyId"].GetInt64();
        m_companyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ManagerId") && !rsp["ManagerId"].IsNull())
    {
        if (!rsp["ManagerId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ManagerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managerId = rsp["ManagerId"].GetInt64();
        m_managerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeManagerDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeManagerDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeManagerDetailResponse::GetManagerFirstName() const
{
    return m_managerFirstName;
}

bool DescribeManagerDetailResponse::ManagerFirstNameHasBeenSet() const
{
    return m_managerFirstNameHasBeenSet;
}

string DescribeManagerDetailResponse::GetManagerMail() const
{
    return m_managerMail;
}

bool DescribeManagerDetailResponse::ManagerMailHasBeenSet() const
{
    return m_managerMailHasBeenSet;
}

string DescribeManagerDetailResponse::GetContactFirstName() const
{
    return m_contactFirstName;
}

bool DescribeManagerDetailResponse::ContactFirstNameHasBeenSet() const
{
    return m_contactFirstNameHasBeenSet;
}

string DescribeManagerDetailResponse::GetManagerLastName() const
{
    return m_managerLastName;
}

bool DescribeManagerDetailResponse::ManagerLastNameHasBeenSet() const
{
    return m_managerLastNameHasBeenSet;
}

string DescribeManagerDetailResponse::GetContactPosition() const
{
    return m_contactPosition;
}

bool DescribeManagerDetailResponse::ContactPositionHasBeenSet() const
{
    return m_contactPositionHasBeenSet;
}

string DescribeManagerDetailResponse::GetManagerPosition() const
{
    return m_managerPosition;
}

bool DescribeManagerDetailResponse::ManagerPositionHasBeenSet() const
{
    return m_managerPositionHasBeenSet;
}

string DescribeManagerDetailResponse::GetVerifyTime() const
{
    return m_verifyTime;
}

bool DescribeManagerDetailResponse::VerifyTimeHasBeenSet() const
{
    return m_verifyTimeHasBeenSet;
}

string DescribeManagerDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeManagerDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeManagerDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeManagerDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeManagerDetailResponse::GetContactLastName() const
{
    return m_contactLastName;
}

bool DescribeManagerDetailResponse::ContactLastNameHasBeenSet() const
{
    return m_contactLastNameHasBeenSet;
}

string DescribeManagerDetailResponse::GetManagerPhone() const
{
    return m_managerPhone;
}

bool DescribeManagerDetailResponse::ManagerPhoneHasBeenSet() const
{
    return m_managerPhoneHasBeenSet;
}

string DescribeManagerDetailResponse::GetContactPhone() const
{
    return m_contactPhone;
}

bool DescribeManagerDetailResponse::ContactPhoneHasBeenSet() const
{
    return m_contactPhoneHasBeenSet;
}

string DescribeManagerDetailResponse::GetContactMail() const
{
    return m_contactMail;
}

bool DescribeManagerDetailResponse::ContactMailHasBeenSet() const
{
    return m_contactMailHasBeenSet;
}

string DescribeManagerDetailResponse::GetManagerDepartment() const
{
    return m_managerDepartment;
}

bool DescribeManagerDetailResponse::ManagerDepartmentHasBeenSet() const
{
    return m_managerDepartmentHasBeenSet;
}

CompanyInfo DescribeManagerDetailResponse::GetCompanyInfo() const
{
    return m_companyInfo;
}

bool DescribeManagerDetailResponse::CompanyInfoHasBeenSet() const
{
    return m_companyInfoHasBeenSet;
}

int64_t DescribeManagerDetailResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeManagerDetailResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeManagerDetailResponse::GetManagerId() const
{
    return m_managerId;
}

bool DescribeManagerDetailResponse::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}


