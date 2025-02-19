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

#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventsCntResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeSecurityEventsCntResponse::DescribeSecurityEventsCntResponse() :
    m_malwareHasBeenSet(false),
    m_hostLoginHasBeenSet(false),
    m_bruteAttackHasBeenSet(false),
    m_riskDnsHasBeenSet(false),
    m_bashHasBeenSet(false),
    m_privilegeRulesHasBeenSet(false),
    m_reverseShellHasBeenSet(false),
    m_sysVulHasBeenSet(false),
    m_webVulHasBeenSet(false),
    m_emergencyVulHasBeenSet(false),
    m_baseLineHasBeenSet(false),
    m_attackLogsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityEventsCntResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Malware") && !rsp["Malware"].IsNull())
    {
        if (!rsp["Malware"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Malware` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_malware.Deserialize(rsp["Malware"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_malwareHasBeenSet = true;
    }

    if (rsp.HasMember("HostLogin") && !rsp["HostLogin"].IsNull())
    {
        if (!rsp["HostLogin"].IsObject())
        {
            return CoreInternalOutcome(Error("response `HostLogin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostLogin.Deserialize(rsp["HostLogin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostLoginHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttack") && !rsp["BruteAttack"].IsNull())
    {
        if (!rsp["BruteAttack"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BruteAttack` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bruteAttack.Deserialize(rsp["BruteAttack"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bruteAttackHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDns") && !rsp["RiskDns"].IsNull())
    {
        if (!rsp["RiskDns"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RiskDns` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskDns.Deserialize(rsp["RiskDns"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskDnsHasBeenSet = true;
    }

    if (rsp.HasMember("Bash") && !rsp["Bash"].IsNull())
    {
        if (!rsp["Bash"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Bash` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bash.Deserialize(rsp["Bash"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bashHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeRules") && !rsp["PrivilegeRules"].IsNull())
    {
        if (!rsp["PrivilegeRules"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PrivilegeRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilegeRules.Deserialize(rsp["PrivilegeRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegeRulesHasBeenSet = true;
    }

    if (rsp.HasMember("ReverseShell") && !rsp["ReverseShell"].IsNull())
    {
        if (!rsp["ReverseShell"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ReverseShell` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reverseShell.Deserialize(rsp["ReverseShell"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reverseShellHasBeenSet = true;
    }

    if (rsp.HasMember("SysVul") && !rsp["SysVul"].IsNull())
    {
        if (!rsp["SysVul"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SysVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sysVul.Deserialize(rsp["SysVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sysVulHasBeenSet = true;
    }

    if (rsp.HasMember("WebVul") && !rsp["WebVul"].IsNull())
    {
        if (!rsp["WebVul"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WebVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webVul.Deserialize(rsp["WebVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webVulHasBeenSet = true;
    }

    if (rsp.HasMember("EmergencyVul") && !rsp["EmergencyVul"].IsNull())
    {
        if (!rsp["EmergencyVul"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EmergencyVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emergencyVul.Deserialize(rsp["EmergencyVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emergencyVulHasBeenSet = true;
    }

    if (rsp.HasMember("BaseLine") && !rsp["BaseLine"].IsNull())
    {
        if (!rsp["BaseLine"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BaseLine` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseLine.Deserialize(rsp["BaseLine"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseLineHasBeenSet = true;
    }

    if (rsp.HasMember("AttackLogs") && !rsp["AttackLogs"].IsNull())
    {
        if (!rsp["AttackLogs"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AttackLogs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attackLogs.Deserialize(rsp["AttackLogs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attackLogsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


SecurityEventInfo DescribeSecurityEventsCntResponse::GetMalware() const
{
    return m_malware;
}

bool DescribeSecurityEventsCntResponse::MalwareHasBeenSet() const
{
    return m_malwareHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetHostLogin() const
{
    return m_hostLogin;
}

bool DescribeSecurityEventsCntResponse::HostLoginHasBeenSet() const
{
    return m_hostLoginHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetBruteAttack() const
{
    return m_bruteAttack;
}

bool DescribeSecurityEventsCntResponse::BruteAttackHasBeenSet() const
{
    return m_bruteAttackHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetRiskDns() const
{
    return m_riskDns;
}

bool DescribeSecurityEventsCntResponse::RiskDnsHasBeenSet() const
{
    return m_riskDnsHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetBash() const
{
    return m_bash;
}

bool DescribeSecurityEventsCntResponse::BashHasBeenSet() const
{
    return m_bashHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetPrivilegeRules() const
{
    return m_privilegeRules;
}

bool DescribeSecurityEventsCntResponse::PrivilegeRulesHasBeenSet() const
{
    return m_privilegeRulesHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetReverseShell() const
{
    return m_reverseShell;
}

bool DescribeSecurityEventsCntResponse::ReverseShellHasBeenSet() const
{
    return m_reverseShellHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetSysVul() const
{
    return m_sysVul;
}

bool DescribeSecurityEventsCntResponse::SysVulHasBeenSet() const
{
    return m_sysVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetWebVul() const
{
    return m_webVul;
}

bool DescribeSecurityEventsCntResponse::WebVulHasBeenSet() const
{
    return m_webVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetEmergencyVul() const
{
    return m_emergencyVul;
}

bool DescribeSecurityEventsCntResponse::EmergencyVulHasBeenSet() const
{
    return m_emergencyVulHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetBaseLine() const
{
    return m_baseLine;
}

bool DescribeSecurityEventsCntResponse::BaseLineHasBeenSet() const
{
    return m_baseLineHasBeenSet;
}

SecurityEventInfo DescribeSecurityEventsCntResponse::GetAttackLogs() const
{
    return m_attackLogs;
}

bool DescribeSecurityEventsCntResponse::AttackLogsHasBeenSet() const
{
    return m_attackLogsHasBeenSet;
}


