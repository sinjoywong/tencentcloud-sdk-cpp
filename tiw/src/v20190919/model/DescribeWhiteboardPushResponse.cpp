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

#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeWhiteboardPushResponse::DescribeWhiteboardPushResponse() :
    m_finishReasonHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_pushUserIdHasBeenSet(false),
    m_pushStartTimeHasBeenSet(false),
    m_pushStopTimeHasBeenSet(false),
    m_exceptionCntHasBeenSet(false),
    m_iMSyncTimeHasBeenSet(false),
    m_backupHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWhiteboardPushResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FinishReason") && !rsp["FinishReason"].IsNull())
    {
        if (!rsp["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(rsp["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
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

    if (rsp.HasMember("RoomId") && !rsp["RoomId"].IsNull())
    {
        if (!rsp["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = rsp["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("PushUserId") && !rsp["PushUserId"].IsNull())
    {
        if (!rsp["PushUserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUserId = string(rsp["PushUserId"].GetString());
        m_pushUserIdHasBeenSet = true;
    }

    if (rsp.HasMember("PushStartTime") && !rsp["PushStartTime"].IsNull())
    {
        if (!rsp["PushStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PushStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushStartTime = rsp["PushStartTime"].GetInt64();
        m_pushStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PushStopTime") && !rsp["PushStopTime"].IsNull())
    {
        if (!rsp["PushStopTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PushStopTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushStopTime = rsp["PushStopTime"].GetInt64();
        m_pushStopTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExceptionCnt") && !rsp["ExceptionCnt"].IsNull())
    {
        if (!rsp["ExceptionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExceptionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionCnt = rsp["ExceptionCnt"].GetInt64();
        m_exceptionCntHasBeenSet = true;
    }

    if (rsp.HasMember("IMSyncTime") && !rsp["IMSyncTime"].IsNull())
    {
        if (!rsp["IMSyncTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `IMSyncTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iMSyncTime = rsp["IMSyncTime"].GetInt64();
        m_iMSyncTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Backup") && !rsp["Backup"].IsNull())
    {
        if (!rsp["Backup"].IsString())
        {
            return CoreInternalOutcome(Error("response `Backup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backup = string(rsp["Backup"].GetString());
        m_backupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeWhiteboardPushResponse::GetFinishReason() const
{
    return m_finishReason;
}

bool DescribeWhiteboardPushResponse::FinishReasonHasBeenSet() const
{
    return m_finishReasonHasBeenSet;
}

string DescribeWhiteboardPushResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeWhiteboardPushResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeWhiteboardPushResponse::GetStatus() const
{
    return m_status;
}

bool DescribeWhiteboardPushResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeWhiteboardPushResponse::GetRoomId() const
{
    return m_roomId;
}

bool DescribeWhiteboardPushResponse::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string DescribeWhiteboardPushResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeWhiteboardPushResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeWhiteboardPushResponse::GetPushUserId() const
{
    return m_pushUserId;
}

bool DescribeWhiteboardPushResponse::PushUserIdHasBeenSet() const
{
    return m_pushUserIdHasBeenSet;
}

int64_t DescribeWhiteboardPushResponse::GetPushStartTime() const
{
    return m_pushStartTime;
}

bool DescribeWhiteboardPushResponse::PushStartTimeHasBeenSet() const
{
    return m_pushStartTimeHasBeenSet;
}

int64_t DescribeWhiteboardPushResponse::GetPushStopTime() const
{
    return m_pushStopTime;
}

bool DescribeWhiteboardPushResponse::PushStopTimeHasBeenSet() const
{
    return m_pushStopTimeHasBeenSet;
}

int64_t DescribeWhiteboardPushResponse::GetExceptionCnt() const
{
    return m_exceptionCnt;
}

bool DescribeWhiteboardPushResponse::ExceptionCntHasBeenSet() const
{
    return m_exceptionCntHasBeenSet;
}

int64_t DescribeWhiteboardPushResponse::GetIMSyncTime() const
{
    return m_iMSyncTime;
}

bool DescribeWhiteboardPushResponse::IMSyncTimeHasBeenSet() const
{
    return m_iMSyncTimeHasBeenSet;
}

string DescribeWhiteboardPushResponse::GetBackup() const
{
    return m_backup;
}

bool DescribeWhiteboardPushResponse::BackupHasBeenSet() const
{
    return m_backupHasBeenSet;
}


