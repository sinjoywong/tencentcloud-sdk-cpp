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

#include <tencentcloud/tke/v20180525/model/PrometheusAlertRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

PrometheusAlertRule::PrometheusAlertRule() :
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_forHasBeenSet(false),
    m_describeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertRule::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `PrometheusAlertRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Error("response `PrometheusAlertRule.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Error("response `PrometheusAlertRule.Labels` is not array type"));

        const Value &tmpValue = value["Labels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsString())
        {
            return CoreInternalOutcome(Error("response `PrometheusAlertRule.Template` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_template = string(value["Template"].GetString());
        m_templateHasBeenSet = true;
    }

    if (value.HasMember("For") && !value["For"].IsNull())
    {
        if (!value["For"].IsString())
        {
            return CoreInternalOutcome(Error("response `PrometheusAlertRule.For` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_for = string(value["For"].GetString());
        m_forHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Error("response `PrometheusAlertRule.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertRule::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_template.c_str(), allocator).Move(), allocator);
    }

    if (m_forHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "For";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_for.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_describe.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusAlertRule::GetName() const
{
    return m_name;
}

void PrometheusAlertRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusAlertRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusAlertRule::GetRule() const
{
    return m_rule;
}

void PrometheusAlertRule::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool PrometheusAlertRule::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

vector<Label> PrometheusAlertRule::GetLabels() const
{
    return m_labels;
}

void PrometheusAlertRule::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool PrometheusAlertRule::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string PrometheusAlertRule::GetTemplate() const
{
    return m_template;
}

void PrometheusAlertRule::SetTemplate(const string& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool PrometheusAlertRule::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

string PrometheusAlertRule::GetFor() const
{
    return m_for;
}

void PrometheusAlertRule::SetFor(const string& _for)
{
    m_for = _for;
    m_forHasBeenSet = true;
}

bool PrometheusAlertRule::ForHasBeenSet() const
{
    return m_forHasBeenSet;
}

string PrometheusAlertRule::GetDescribe() const
{
    return m_describe;
}

void PrometheusAlertRule::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool PrometheusAlertRule::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

