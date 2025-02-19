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

#include <tencentcloud/iotvideo/v20191126/model/CreateAppUsrResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateAppUsrResponse::CreateAppUsrResponse() :
    m_cunionIdHasBeenSet(false),
    m_accessIdHasBeenSet(false),
    m_newRegistHasBeenSet(false)
{
}

CoreInternalOutcome CreateAppUsrResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CunionId") && !rsp["CunionId"].IsNull())
    {
        if (!rsp["CunionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CunionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cunionId = string(rsp["CunionId"].GetString());
        m_cunionIdHasBeenSet = true;
    }

    if (rsp.HasMember("AccessId") && !rsp["AccessId"].IsNull())
    {
        if (!rsp["AccessId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(rsp["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (rsp.HasMember("NewRegist") && !rsp["NewRegist"].IsNull())
    {
        if (!rsp["NewRegist"].IsBool())
        {
            return CoreInternalOutcome(Error("response `NewRegist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_newRegist = rsp["NewRegist"].GetBool();
        m_newRegistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateAppUsrResponse::GetCunionId() const
{
    return m_cunionId;
}

bool CreateAppUsrResponse::CunionIdHasBeenSet() const
{
    return m_cunionIdHasBeenSet;
}

string CreateAppUsrResponse::GetAccessId() const
{
    return m_accessId;
}

bool CreateAppUsrResponse::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

bool CreateAppUsrResponse::GetNewRegist() const
{
    return m_newRegist;
}

bool CreateAppUsrResponse::NewRegistHasBeenSet() const
{
    return m_newRegistHasBeenSet;
}


