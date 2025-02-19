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

#include <tencentcloud/live/v20180801/model/DescribeLivePackageInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLivePackageInfoResponse::DescribeLivePackageInfoResponse() :
    m_livePackageInfoListHasBeenSet(false),
    m_packageBillModeHasBeenSet(false),
    m_totalPageHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLivePackageInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LivePackageInfoList") && !rsp["LivePackageInfoList"].IsNull())
    {
        if (!rsp["LivePackageInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `LivePackageInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LivePackageInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LivePackageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_livePackageInfoList.push_back(item);
        }
        m_livePackageInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("PackageBillMode") && !rsp["PackageBillMode"].IsNull())
    {
        if (!rsp["PackageBillMode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PackageBillMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packageBillMode = rsp["PackageBillMode"].GetInt64();
        m_packageBillModeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetInt64();
        m_pageNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<LivePackageInfo> DescribeLivePackageInfoResponse::GetLivePackageInfoList() const
{
    return m_livePackageInfoList;
}

bool DescribeLivePackageInfoResponse::LivePackageInfoListHasBeenSet() const
{
    return m_livePackageInfoListHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetPackageBillMode() const
{
    return m_packageBillMode;
}

bool DescribeLivePackageInfoResponse::PackageBillModeHasBeenSet() const
{
    return m_packageBillModeHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribeLivePackageInfoResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeLivePackageInfoResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribeLivePackageInfoResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

int64_t DescribeLivePackageInfoResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeLivePackageInfoResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


