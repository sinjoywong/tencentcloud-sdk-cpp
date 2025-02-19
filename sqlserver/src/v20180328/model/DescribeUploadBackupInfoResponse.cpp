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

#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeUploadBackupInfoResponse::DescribeUploadBackupInfoResponse() :
    m_bucketNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_xCosSecurityTokenHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUploadBackupInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BucketName") && !rsp["BucketName"].IsNull())
    {
        if (!rsp["BucketName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(rsp["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("Path") && !rsp["Path"].IsNull())
    {
        if (!rsp["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(rsp["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (rsp.HasMember("TmpSecretId") && !rsp["TmpSecretId"].IsNull())
    {
        if (!rsp["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(rsp["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (rsp.HasMember("TmpSecretKey") && !rsp["TmpSecretKey"].IsNull())
    {
        if (!rsp["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(rsp["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("XCosSecurityToken") && !rsp["XCosSecurityToken"].IsNull())
    {
        if (!rsp["XCosSecurityToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `XCosSecurityToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xCosSecurityToken = string(rsp["XCosSecurityToken"].GetString());
        m_xCosSecurityTokenHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredTime") && !rsp["ExpiredTime"].IsNull())
    {
        if (!rsp["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(rsp["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeUploadBackupInfoResponse::GetBucketName() const
{
    return m_bucketName;
}

bool DescribeUploadBackupInfoResponse::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetRegion() const
{
    return m_region;
}

bool DescribeUploadBackupInfoResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetPath() const
{
    return m_path;
}

bool DescribeUploadBackupInfoResponse::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

bool DescribeUploadBackupInfoResponse::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

bool DescribeUploadBackupInfoResponse::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetXCosSecurityToken() const
{
    return m_xCosSecurityToken;
}

bool DescribeUploadBackupInfoResponse::XCosSecurityTokenHasBeenSet() const
{
    return m_xCosSecurityTokenHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeUploadBackupInfoResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeUploadBackupInfoResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

bool DescribeUploadBackupInfoResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


