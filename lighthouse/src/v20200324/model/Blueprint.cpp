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

#include <tencentcloud/lighthouse/v20200324/model/Blueprint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Blueprint::Blueprint() :
    m_blueprintIdHasBeenSet(false),
    m_displayTitleHasBeenSet(false),
    m_displayVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_blueprintTypeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_requiredSystemDiskSizeHasBeenSet(false),
    m_blueprintStateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_blueprintNameHasBeenSet(false),
    m_supportAutomationToolsHasBeenSet(false),
    m_requiredMemorySizeHasBeenSet(false)
{
}

CoreInternalOutcome Blueprint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlueprintId") && !value["BlueprintId"].IsNull())
    {
        if (!value["BlueprintId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.BlueprintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintId = string(value["BlueprintId"].GetString());
        m_blueprintIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayTitle") && !value["DisplayTitle"].IsNull())
    {
        if (!value["DisplayTitle"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.DisplayTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayTitle = string(value["DisplayTitle"].GetString());
        m_displayTitleHasBeenSet = true;
    }

    if (value.HasMember("DisplayVersion") && !value["DisplayVersion"].IsNull())
    {
        if (!value["DisplayVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.DisplayVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayVersion = string(value["DisplayVersion"].GetString());
        m_displayVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("PlatformType") && !value["PlatformType"].IsNull())
    {
        if (!value["PlatformType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.PlatformType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformType = string(value["PlatformType"].GetString());
        m_platformTypeHasBeenSet = true;
    }

    if (value.HasMember("BlueprintType") && !value["BlueprintType"].IsNull())
    {
        if (!value["BlueprintType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.BlueprintType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintType = string(value["BlueprintType"].GetString());
        m_blueprintTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("RequiredSystemDiskSize") && !value["RequiredSystemDiskSize"].IsNull())
    {
        if (!value["RequiredSystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Blueprint.RequiredSystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requiredSystemDiskSize = value["RequiredSystemDiskSize"].GetInt64();
        m_requiredSystemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("BlueprintState") && !value["BlueprintState"].IsNull())
    {
        if (!value["BlueprintState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.BlueprintState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintState = string(value["BlueprintState"].GetString());
        m_blueprintStateHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("BlueprintName") && !value["BlueprintName"].IsNull())
    {
        if (!value["BlueprintName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Blueprint.BlueprintName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintName = string(value["BlueprintName"].GetString());
        m_blueprintNameHasBeenSet = true;
    }

    if (value.HasMember("SupportAutomationTools") && !value["SupportAutomationTools"].IsNull())
    {
        if (!value["SupportAutomationTools"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Blueprint.SupportAutomationTools` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportAutomationTools = value["SupportAutomationTools"].GetBool();
        m_supportAutomationToolsHasBeenSet = true;
    }

    if (value.HasMember("RequiredMemorySize") && !value["RequiredMemorySize"].IsNull())
    {
        if (!value["RequiredMemorySize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Blueprint.RequiredMemorySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requiredMemorySize = value["RequiredMemorySize"].GetInt64();
        m_requiredMemorySizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Blueprint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_displayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformType.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiredSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requiredSystemDiskSize, allocator);
    }

    if (m_blueprintStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintState.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintName.c_str(), allocator).Move(), allocator);
    }

    if (m_supportAutomationToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportAutomationTools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportAutomationTools, allocator);
    }

    if (m_requiredMemorySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiredMemorySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requiredMemorySize, allocator);
    }

}


string Blueprint::GetBlueprintId() const
{
    return m_blueprintId;
}

void Blueprint::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool Blueprint::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

string Blueprint::GetDisplayTitle() const
{
    return m_displayTitle;
}

void Blueprint::SetDisplayTitle(const string& _displayTitle)
{
    m_displayTitle = _displayTitle;
    m_displayTitleHasBeenSet = true;
}

bool Blueprint::DisplayTitleHasBeenSet() const
{
    return m_displayTitleHasBeenSet;
}

string Blueprint::GetDisplayVersion() const
{
    return m_displayVersion;
}

void Blueprint::SetDisplayVersion(const string& _displayVersion)
{
    m_displayVersion = _displayVersion;
    m_displayVersionHasBeenSet = true;
}

bool Blueprint::DisplayVersionHasBeenSet() const
{
    return m_displayVersionHasBeenSet;
}

string Blueprint::GetDescription() const
{
    return m_description;
}

void Blueprint::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Blueprint::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Blueprint::GetOsName() const
{
    return m_osName;
}

void Blueprint::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool Blueprint::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string Blueprint::GetPlatform() const
{
    return m_platform;
}

void Blueprint::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Blueprint::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string Blueprint::GetPlatformType() const
{
    return m_platformType;
}

void Blueprint::SetPlatformType(const string& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool Blueprint::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

string Blueprint::GetBlueprintType() const
{
    return m_blueprintType;
}

void Blueprint::SetBlueprintType(const string& _blueprintType)
{
    m_blueprintType = _blueprintType;
    m_blueprintTypeHasBeenSet = true;
}

bool Blueprint::BlueprintTypeHasBeenSet() const
{
    return m_blueprintTypeHasBeenSet;
}

string Blueprint::GetImageUrl() const
{
    return m_imageUrl;
}

void Blueprint::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool Blueprint::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t Blueprint::GetRequiredSystemDiskSize() const
{
    return m_requiredSystemDiskSize;
}

void Blueprint::SetRequiredSystemDiskSize(const int64_t& _requiredSystemDiskSize)
{
    m_requiredSystemDiskSize = _requiredSystemDiskSize;
    m_requiredSystemDiskSizeHasBeenSet = true;
}

bool Blueprint::RequiredSystemDiskSizeHasBeenSet() const
{
    return m_requiredSystemDiskSizeHasBeenSet;
}

string Blueprint::GetBlueprintState() const
{
    return m_blueprintState;
}

void Blueprint::SetBlueprintState(const string& _blueprintState)
{
    m_blueprintState = _blueprintState;
    m_blueprintStateHasBeenSet = true;
}

bool Blueprint::BlueprintStateHasBeenSet() const
{
    return m_blueprintStateHasBeenSet;
}

string Blueprint::GetCreatedTime() const
{
    return m_createdTime;
}

void Blueprint::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Blueprint::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Blueprint::GetBlueprintName() const
{
    return m_blueprintName;
}

void Blueprint::SetBlueprintName(const string& _blueprintName)
{
    m_blueprintName = _blueprintName;
    m_blueprintNameHasBeenSet = true;
}

bool Blueprint::BlueprintNameHasBeenSet() const
{
    return m_blueprintNameHasBeenSet;
}

bool Blueprint::GetSupportAutomationTools() const
{
    return m_supportAutomationTools;
}

void Blueprint::SetSupportAutomationTools(const bool& _supportAutomationTools)
{
    m_supportAutomationTools = _supportAutomationTools;
    m_supportAutomationToolsHasBeenSet = true;
}

bool Blueprint::SupportAutomationToolsHasBeenSet() const
{
    return m_supportAutomationToolsHasBeenSet;
}

int64_t Blueprint::GetRequiredMemorySize() const
{
    return m_requiredMemorySize;
}

void Blueprint::SetRequiredMemorySize(const int64_t& _requiredMemorySize)
{
    m_requiredMemorySize = _requiredMemorySize;
    m_requiredMemorySizeHasBeenSet = true;
}

bool Blueprint::RequiredMemorySizeHasBeenSet() const
{
    return m_requiredMemorySizeHasBeenSet;
}

