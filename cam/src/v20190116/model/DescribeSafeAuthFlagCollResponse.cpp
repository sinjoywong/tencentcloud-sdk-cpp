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

#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagCollResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

DescribeSafeAuthFlagCollResponse::DescribeSafeAuthFlagCollResponse() :
    m_loginFlagHasBeenSet(false),
    m_actionFlagHasBeenSet(false),
    m_offsiteFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSafeAuthFlagCollResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LoginFlag") && !rsp["LoginFlag"].IsNull())
    {
        if (!rsp["LoginFlag"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LoginFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginFlag.Deserialize(rsp["LoginFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ActionFlag") && !rsp["ActionFlag"].IsNull())
    {
        if (!rsp["ActionFlag"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ActionFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_actionFlag.Deserialize(rsp["ActionFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionFlagHasBeenSet = true;
    }

    if (rsp.HasMember("OffsiteFlag") && !rsp["OffsiteFlag"].IsNull())
    {
        if (!rsp["OffsiteFlag"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OffsiteFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offsiteFlag.Deserialize(rsp["OffsiteFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offsiteFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


LoginActionFlag DescribeSafeAuthFlagCollResponse::GetLoginFlag() const
{
    return m_loginFlag;
}

bool DescribeSafeAuthFlagCollResponse::LoginFlagHasBeenSet() const
{
    return m_loginFlagHasBeenSet;
}

LoginActionFlag DescribeSafeAuthFlagCollResponse::GetActionFlag() const
{
    return m_actionFlag;
}

bool DescribeSafeAuthFlagCollResponse::ActionFlagHasBeenSet() const
{
    return m_actionFlagHasBeenSet;
}

OffsiteFlag DescribeSafeAuthFlagCollResponse::GetOffsiteFlag() const
{
    return m_offsiteFlag;
}

bool DescribeSafeAuthFlagCollResponse::OffsiteFlagHasBeenSet() const
{
    return m_offsiteFlagHasBeenSet;
}


