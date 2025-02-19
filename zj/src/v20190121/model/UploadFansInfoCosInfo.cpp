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

#include <tencentcloud/zj/v20190121/model/UploadFansInfoCosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

UploadFansInfoCosInfo::UploadFansInfoCosInfo() :
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome UploadFansInfoCosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `UploadFansInfoCosInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Error("response `UploadFansInfoCosInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `UploadFansInfoCosInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadFansInfoCosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string UploadFansInfoCosInfo::GetBucket() const
{
    return m_bucket;
}

void UploadFansInfoCosInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool UploadFansInfoCosInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string UploadFansInfoCosInfo::GetKey() const
{
    return m_key;
}

void UploadFansInfoCosInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool UploadFansInfoCosInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string UploadFansInfoCosInfo::GetRegion() const
{
    return m_region;
}

void UploadFansInfoCosInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool UploadFansInfoCosInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

