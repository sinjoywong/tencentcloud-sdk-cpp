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

#include <tencentcloud/cdn/v20180606/model/DescribeReportDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeReportDataResponse::DescribeReportDataResponse() :
    m_domainReportHasBeenSet(false),
    m_projectReportHasBeenSet(false)
{
}

CoreInternalOutcome DescribeReportDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DomainReport") && !rsp["DomainReport"].IsNull())
    {
        if (!rsp["DomainReport"].IsArray())
            return CoreInternalOutcome(Error("response `DomainReport` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DomainReport"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReportData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_domainReport.push_back(item);
        }
        m_domainReportHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectReport") && !rsp["ProjectReport"].IsNull())
    {
        if (!rsp["ProjectReport"].IsArray())
            return CoreInternalOutcome(Error("response `ProjectReport` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProjectReport"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReportData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_projectReport.push_back(item);
        }
        m_projectReportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<ReportData> DescribeReportDataResponse::GetDomainReport() const
{
    return m_domainReport;
}

bool DescribeReportDataResponse::DomainReportHasBeenSet() const
{
    return m_domainReportHasBeenSet;
}

vector<ReportData> DescribeReportDataResponse::GetProjectReport() const
{
    return m_projectReport;
}

bool DescribeReportDataResponse::ProjectReportHasBeenSet() const
{
    return m_projectReportHasBeenSet;
}


