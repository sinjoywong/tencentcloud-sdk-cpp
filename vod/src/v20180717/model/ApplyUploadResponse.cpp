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

#include <tencentcloud/vod/v20180717/model/ApplyUploadResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ApplyUploadResponse::ApplyUploadResponse() :
    m_storageBucketHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_vodSessionKeyHasBeenSet(false),
    m_mediaStoragePathHasBeenSet(false),
    m_coverStoragePathHasBeenSet(false),
    m_tempCertificateHasBeenSet(false)
{
}

CoreInternalOutcome ApplyUploadResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StorageBucket") && !rsp["StorageBucket"].IsNull())
    {
        if (!rsp["StorageBucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageBucket = string(rsp["StorageBucket"].GetString());
        m_storageBucketHasBeenSet = true;
    }

    if (rsp.HasMember("StorageRegion") && !rsp["StorageRegion"].IsNull())
    {
        if (!rsp["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(rsp["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (rsp.HasMember("VodSessionKey") && !rsp["VodSessionKey"].IsNull())
    {
        if (!rsp["VodSessionKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `VodSessionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodSessionKey = string(rsp["VodSessionKey"].GetString());
        m_vodSessionKeyHasBeenSet = true;
    }

    if (rsp.HasMember("MediaStoragePath") && !rsp["MediaStoragePath"].IsNull())
    {
        if (!rsp["MediaStoragePath"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaStoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaStoragePath = string(rsp["MediaStoragePath"].GetString());
        m_mediaStoragePathHasBeenSet = true;
    }

    if (rsp.HasMember("CoverStoragePath") && !rsp["CoverStoragePath"].IsNull())
    {
        if (!rsp["CoverStoragePath"].IsString())
        {
            return CoreInternalOutcome(Error("response `CoverStoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverStoragePath = string(rsp["CoverStoragePath"].GetString());
        m_coverStoragePathHasBeenSet = true;
    }

    if (rsp.HasMember("TempCertificate") && !rsp["TempCertificate"].IsNull())
    {
        if (!rsp["TempCertificate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TempCertificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tempCertificate.Deserialize(rsp["TempCertificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tempCertificateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ApplyUploadResponse::GetStorageBucket() const
{
    return m_storageBucket;
}

bool ApplyUploadResponse::StorageBucketHasBeenSet() const
{
    return m_storageBucketHasBeenSet;
}

string ApplyUploadResponse::GetStorageRegion() const
{
    return m_storageRegion;
}

bool ApplyUploadResponse::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string ApplyUploadResponse::GetVodSessionKey() const
{
    return m_vodSessionKey;
}

bool ApplyUploadResponse::VodSessionKeyHasBeenSet() const
{
    return m_vodSessionKeyHasBeenSet;
}

string ApplyUploadResponse::GetMediaStoragePath() const
{
    return m_mediaStoragePath;
}

bool ApplyUploadResponse::MediaStoragePathHasBeenSet() const
{
    return m_mediaStoragePathHasBeenSet;
}

string ApplyUploadResponse::GetCoverStoragePath() const
{
    return m_coverStoragePath;
}

bool ApplyUploadResponse::CoverStoragePathHasBeenSet() const
{
    return m_coverStoragePathHasBeenSet;
}

TempCertificate ApplyUploadResponse::GetTempCertificate() const
{
    return m_tempCertificate;
}

bool ApplyUploadResponse::TempCertificateHasBeenSet() const
{
    return m_tempCertificateHasBeenSet;
}


