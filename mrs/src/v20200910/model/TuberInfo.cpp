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

#include <tencentcloud/mrs/v20200910/model/TuberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TuberInfo::TuberInfo() :
    m_typeHasBeenSet(false),
    m_partHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_multipleHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_edgeHasBeenSet(false),
    m_innerEchoHasBeenSet(false),
    m_rearEchoHasBeenSet(false),
    m_elasticHasBeenSet(false),
    m_shapeHasBeenSet(false),
    m_shapeAttrHasBeenSet(false),
    m_skinMedullaHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_calcificationHasBeenSet(false),
    m_envelopeHasBeenSet(false),
    m_enhancementHasBeenSet(false),
    m_lymphEnlargementHasBeenSet(false),
    m_lymphDoorHasBeenSet(false),
    m_activityHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_cDFIHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_sizeStatusHasBeenSet(false),
    m_innerEchoDistributionHasBeenSet(false),
    m_innerEchoTypeHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_structureHasBeenSet(false),
    m_densityHasBeenSet(false),
    m_vasHasBeenSet(false),
    m_cysticwallHasBeenSet(false),
    m_capsuleHasBeenSet(false),
    m_isthmusThickneseHasBeenSet(false),
    m_srcHasBeenSet(false)
{
}

CoreInternalOutcome TuberInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Type` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_type.Deserialize(value["Type"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsArray())
            return CoreInternalOutcome(Error("response `TuberInfo.Size` is not array type"));

        const rapidjson::Value &tmpValue = value["Size"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_size.push_back(item);
        }
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Multiple") && !value["Multiple"].IsNull())
    {
        if (!value["Multiple"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Multiple` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiple.Deserialize(value["Multiple"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multipleHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.AspectRatio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aspectRatio.Deserialize(value["AspectRatio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("Edge") && !value["Edge"].IsNull())
    {
        if (!value["Edge"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Edge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_edge.Deserialize(value["Edge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_edgeHasBeenSet = true;
    }

    if (value.HasMember("InnerEcho") && !value["InnerEcho"].IsNull())
    {
        if (!value["InnerEcho"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.InnerEcho` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerEcho.Deserialize(value["InnerEcho"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerEchoHasBeenSet = true;
    }

    if (value.HasMember("RearEcho") && !value["RearEcho"].IsNull())
    {
        if (!value["RearEcho"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.RearEcho` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rearEcho.Deserialize(value["RearEcho"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rearEchoHasBeenSet = true;
    }

    if (value.HasMember("Elastic") && !value["Elastic"].IsNull())
    {
        if (!value["Elastic"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Elastic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_elastic.Deserialize(value["Elastic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_elasticHasBeenSet = true;
    }

    if (value.HasMember("Shape") && !value["Shape"].IsNull())
    {
        if (!value["Shape"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Shape` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shape.Deserialize(value["Shape"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shapeHasBeenSet = true;
    }

    if (value.HasMember("ShapeAttr") && !value["ShapeAttr"].IsNull())
    {
        if (!value["ShapeAttr"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.ShapeAttr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shapeAttr.Deserialize(value["ShapeAttr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shapeAttrHasBeenSet = true;
    }

    if (value.HasMember("SkinMedulla") && !value["SkinMedulla"].IsNull())
    {
        if (!value["SkinMedulla"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.SkinMedulla` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skinMedulla.Deserialize(value["SkinMedulla"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skinMedullaHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Trend` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trend.Deserialize(value["Trend"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trendHasBeenSet = true;
    }

    if (value.HasMember("Calcification") && !value["Calcification"].IsNull())
    {
        if (!value["Calcification"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Calcification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_calcification.Deserialize(value["Calcification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_calcificationHasBeenSet = true;
    }

    if (value.HasMember("Envelope") && !value["Envelope"].IsNull())
    {
        if (!value["Envelope"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Envelope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envelope.Deserialize(value["Envelope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envelopeHasBeenSet = true;
    }

    if (value.HasMember("Enhancement") && !value["Enhancement"].IsNull())
    {
        if (!value["Enhancement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Enhancement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhancement.Deserialize(value["Enhancement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhancementHasBeenSet = true;
    }

    if (value.HasMember("LymphEnlargement") && !value["LymphEnlargement"].IsNull())
    {
        if (!value["LymphEnlargement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.LymphEnlargement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lymphEnlargement.Deserialize(value["LymphEnlargement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lymphEnlargementHasBeenSet = true;
    }

    if (value.HasMember("LymphDoor") && !value["LymphDoor"].IsNull())
    {
        if (!value["LymphDoor"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.LymphDoor` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lymphDoor.Deserialize(value["LymphDoor"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lymphDoorHasBeenSet = true;
    }

    if (value.HasMember("Activity") && !value["Activity"].IsNull())
    {
        if (!value["Activity"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Activity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_activity.Deserialize(value["Activity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_activityHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Operation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operation.Deserialize(value["Operation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationHasBeenSet = true;
    }

    if (value.HasMember("CDFI") && !value["CDFI"].IsNull())
    {
        if (!value["CDFI"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.CDFI` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cDFI.Deserialize(value["CDFI"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cDFIHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Error("response `TuberInfo.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("SizeStatus") && !value["SizeStatus"].IsNull())
    {
        if (!value["SizeStatus"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.SizeStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sizeStatus.Deserialize(value["SizeStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sizeStatusHasBeenSet = true;
    }

    if (value.HasMember("InnerEchoDistribution") && !value["InnerEchoDistribution"].IsNull())
    {
        if (!value["InnerEchoDistribution"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.InnerEchoDistribution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerEchoDistribution.Deserialize(value["InnerEchoDistribution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerEchoDistributionHasBeenSet = true;
    }

    if (value.HasMember("InnerEchoType") && !value["InnerEchoType"].IsNull())
    {
        if (!value["InnerEchoType"].IsArray())
            return CoreInternalOutcome(Error("response `TuberInfo.InnerEchoType` is not array type"));

        const rapidjson::Value &tmpValue = value["InnerEchoType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_innerEchoType.push_back(item);
        }
        m_innerEchoTypeHasBeenSet = true;
    }

    if (value.HasMember("Outline") && !value["Outline"].IsNull())
    {
        if (!value["Outline"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Outline` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outline.Deserialize(value["Outline"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outlineHasBeenSet = true;
    }

    if (value.HasMember("Structure") && !value["Structure"].IsNull())
    {
        if (!value["Structure"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Structure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_structure.Deserialize(value["Structure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_structureHasBeenSet = true;
    }

    if (value.HasMember("Density") && !value["Density"].IsNull())
    {
        if (!value["Density"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Density` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_density.Deserialize(value["Density"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_densityHasBeenSet = true;
    }

    if (value.HasMember("Vas") && !value["Vas"].IsNull())
    {
        if (!value["Vas"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Vas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vas.Deserialize(value["Vas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vasHasBeenSet = true;
    }

    if (value.HasMember("Cysticwall") && !value["Cysticwall"].IsNull())
    {
        if (!value["Cysticwall"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Cysticwall` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cysticwall.Deserialize(value["Cysticwall"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cysticwallHasBeenSet = true;
    }

    if (value.HasMember("Capsule") && !value["Capsule"].IsNull())
    {
        if (!value["Capsule"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Capsule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capsule.Deserialize(value["Capsule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capsuleHasBeenSet = true;
    }

    if (value.HasMember("IsthmusThicknese") && !value["IsthmusThicknese"].IsNull())
    {
        if (!value["IsthmusThicknese"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.IsthmusThicknese` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_isthmusThicknese.Deserialize(value["IsthmusThicknese"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_isthmusThickneseHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Error("response `TuberInfo.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TuberInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_type.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_size.begin(); itr != m_size.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_multipleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Multiple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiple.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aspectRatio.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_edgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_edge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerEchoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerEcho";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerEcho.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rearEchoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RearEcho";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rearEcho.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_elasticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elastic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_elastic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shape.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shapeAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShapeAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shapeAttr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skinMedullaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkinMedulla";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skinMedulla.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trend.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_calcificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Calcification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_calcification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envelopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envelope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envelope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enhancement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphEnlargementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphEnlargement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lymphEnlargement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphDoorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphDoor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lymphDoor.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_activityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Activity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_activity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cDFIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDFI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cDFI.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sizeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sizeStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerEchoDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerEchoDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerEchoDistribution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerEchoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerEchoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_innerEchoType.begin(); itr != m_innerEchoType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outline.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_structureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Structure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_structure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_densityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Density";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_density.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cysticwallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cysticwall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cysticwall.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_capsuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capsule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capsule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isthmusThickneseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsthmusThicknese";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_isthmusThicknese.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

}


BlockInfo TuberInfo::GetType() const
{
    return m_type;
}

void TuberInfo::SetType(const BlockInfo& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TuberInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Part TuberInfo::GetPart() const
{
    return m_part;
}

void TuberInfo::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool TuberInfo::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

vector<Size> TuberInfo::GetSize() const
{
    return m_size;
}

void TuberInfo::SetSize(const vector<Size>& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TuberInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

Multiple TuberInfo::GetMultiple() const
{
    return m_multiple;
}

void TuberInfo::SetMultiple(const Multiple& _multiple)
{
    m_multiple = _multiple;
    m_multipleHasBeenSet = true;
}

bool TuberInfo::MultipleHasBeenSet() const
{
    return m_multipleHasBeenSet;
}

AspectRatio TuberInfo::GetAspectRatio() const
{
    return m_aspectRatio;
}

void TuberInfo::SetAspectRatio(const AspectRatio& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool TuberInfo::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

BlockInfo TuberInfo::GetEdge() const
{
    return m_edge;
}

void TuberInfo::SetEdge(const BlockInfo& _edge)
{
    m_edge = _edge;
    m_edgeHasBeenSet = true;
}

bool TuberInfo::EdgeHasBeenSet() const
{
    return m_edgeHasBeenSet;
}

BlockInfo TuberInfo::GetInnerEcho() const
{
    return m_innerEcho;
}

void TuberInfo::SetInnerEcho(const BlockInfo& _innerEcho)
{
    m_innerEcho = _innerEcho;
    m_innerEchoHasBeenSet = true;
}

bool TuberInfo::InnerEchoHasBeenSet() const
{
    return m_innerEchoHasBeenSet;
}

BlockInfo TuberInfo::GetRearEcho() const
{
    return m_rearEcho;
}

void TuberInfo::SetRearEcho(const BlockInfo& _rearEcho)
{
    m_rearEcho = _rearEcho;
    m_rearEchoHasBeenSet = true;
}

bool TuberInfo::RearEchoHasBeenSet() const
{
    return m_rearEchoHasBeenSet;
}

Elastic TuberInfo::GetElastic() const
{
    return m_elastic;
}

void TuberInfo::SetElastic(const Elastic& _elastic)
{
    m_elastic = _elastic;
    m_elasticHasBeenSet = true;
}

bool TuberInfo::ElasticHasBeenSet() const
{
    return m_elasticHasBeenSet;
}

BlockInfo TuberInfo::GetShape() const
{
    return m_shape;
}

void TuberInfo::SetShape(const BlockInfo& _shape)
{
    m_shape = _shape;
    m_shapeHasBeenSet = true;
}

bool TuberInfo::ShapeHasBeenSet() const
{
    return m_shapeHasBeenSet;
}

BlockInfo TuberInfo::GetShapeAttr() const
{
    return m_shapeAttr;
}

void TuberInfo::SetShapeAttr(const BlockInfo& _shapeAttr)
{
    m_shapeAttr = _shapeAttr;
    m_shapeAttrHasBeenSet = true;
}

bool TuberInfo::ShapeAttrHasBeenSet() const
{
    return m_shapeAttrHasBeenSet;
}

BlockInfo TuberInfo::GetSkinMedulla() const
{
    return m_skinMedulla;
}

void TuberInfo::SetSkinMedulla(const BlockInfo& _skinMedulla)
{
    m_skinMedulla = _skinMedulla;
    m_skinMedullaHasBeenSet = true;
}

bool TuberInfo::SkinMedullaHasBeenSet() const
{
    return m_skinMedullaHasBeenSet;
}

BlockInfo TuberInfo::GetTrend() const
{
    return m_trend;
}

void TuberInfo::SetTrend(const BlockInfo& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool TuberInfo::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

BlockInfo TuberInfo::GetCalcification() const
{
    return m_calcification;
}

void TuberInfo::SetCalcification(const BlockInfo& _calcification)
{
    m_calcification = _calcification;
    m_calcificationHasBeenSet = true;
}

bool TuberInfo::CalcificationHasBeenSet() const
{
    return m_calcificationHasBeenSet;
}

BlockInfo TuberInfo::GetEnvelope() const
{
    return m_envelope;
}

void TuberInfo::SetEnvelope(const BlockInfo& _envelope)
{
    m_envelope = _envelope;
    m_envelopeHasBeenSet = true;
}

bool TuberInfo::EnvelopeHasBeenSet() const
{
    return m_envelopeHasBeenSet;
}

BlockInfo TuberInfo::GetEnhancement() const
{
    return m_enhancement;
}

void TuberInfo::SetEnhancement(const BlockInfo& _enhancement)
{
    m_enhancement = _enhancement;
    m_enhancementHasBeenSet = true;
}

bool TuberInfo::EnhancementHasBeenSet() const
{
    return m_enhancementHasBeenSet;
}

BlockInfo TuberInfo::GetLymphEnlargement() const
{
    return m_lymphEnlargement;
}

void TuberInfo::SetLymphEnlargement(const BlockInfo& _lymphEnlargement)
{
    m_lymphEnlargement = _lymphEnlargement;
    m_lymphEnlargementHasBeenSet = true;
}

bool TuberInfo::LymphEnlargementHasBeenSet() const
{
    return m_lymphEnlargementHasBeenSet;
}

BlockInfo TuberInfo::GetLymphDoor() const
{
    return m_lymphDoor;
}

void TuberInfo::SetLymphDoor(const BlockInfo& _lymphDoor)
{
    m_lymphDoor = _lymphDoor;
    m_lymphDoorHasBeenSet = true;
}

bool TuberInfo::LymphDoorHasBeenSet() const
{
    return m_lymphDoorHasBeenSet;
}

BlockInfo TuberInfo::GetActivity() const
{
    return m_activity;
}

void TuberInfo::SetActivity(const BlockInfo& _activity)
{
    m_activity = _activity;
    m_activityHasBeenSet = true;
}

bool TuberInfo::ActivityHasBeenSet() const
{
    return m_activityHasBeenSet;
}

BlockInfo TuberInfo::GetOperation() const
{
    return m_operation;
}

void TuberInfo::SetOperation(const BlockInfo& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool TuberInfo::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

BlockInfo TuberInfo::GetCDFI() const
{
    return m_cDFI;
}

void TuberInfo::SetCDFI(const BlockInfo& _cDFI)
{
    m_cDFI = _cDFI;
    m_cDFIHasBeenSet = true;
}

bool TuberInfo::CDFIHasBeenSet() const
{
    return m_cDFIHasBeenSet;
}

vector<int64_t> TuberInfo::GetIndex() const
{
    return m_index;
}

void TuberInfo::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool TuberInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

BlockInfo TuberInfo::GetSizeStatus() const
{
    return m_sizeStatus;
}

void TuberInfo::SetSizeStatus(const BlockInfo& _sizeStatus)
{
    m_sizeStatus = _sizeStatus;
    m_sizeStatusHasBeenSet = true;
}

bool TuberInfo::SizeStatusHasBeenSet() const
{
    return m_sizeStatusHasBeenSet;
}

BlockInfo TuberInfo::GetInnerEchoDistribution() const
{
    return m_innerEchoDistribution;
}

void TuberInfo::SetInnerEchoDistribution(const BlockInfo& _innerEchoDistribution)
{
    m_innerEchoDistribution = _innerEchoDistribution;
    m_innerEchoDistributionHasBeenSet = true;
}

bool TuberInfo::InnerEchoDistributionHasBeenSet() const
{
    return m_innerEchoDistributionHasBeenSet;
}

vector<BlockInfo> TuberInfo::GetInnerEchoType() const
{
    return m_innerEchoType;
}

void TuberInfo::SetInnerEchoType(const vector<BlockInfo>& _innerEchoType)
{
    m_innerEchoType = _innerEchoType;
    m_innerEchoTypeHasBeenSet = true;
}

bool TuberInfo::InnerEchoTypeHasBeenSet() const
{
    return m_innerEchoTypeHasBeenSet;
}

BlockInfo TuberInfo::GetOutline() const
{
    return m_outline;
}

void TuberInfo::SetOutline(const BlockInfo& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool TuberInfo::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

BlockInfo TuberInfo::GetStructure() const
{
    return m_structure;
}

void TuberInfo::SetStructure(const BlockInfo& _structure)
{
    m_structure = _structure;
    m_structureHasBeenSet = true;
}

bool TuberInfo::StructureHasBeenSet() const
{
    return m_structureHasBeenSet;
}

BlockInfo TuberInfo::GetDensity() const
{
    return m_density;
}

void TuberInfo::SetDensity(const BlockInfo& _density)
{
    m_density = _density;
    m_densityHasBeenSet = true;
}

bool TuberInfo::DensityHasBeenSet() const
{
    return m_densityHasBeenSet;
}

BlockInfo TuberInfo::GetVas() const
{
    return m_vas;
}

void TuberInfo::SetVas(const BlockInfo& _vas)
{
    m_vas = _vas;
    m_vasHasBeenSet = true;
}

bool TuberInfo::VasHasBeenSet() const
{
    return m_vasHasBeenSet;
}

BlockInfo TuberInfo::GetCysticwall() const
{
    return m_cysticwall;
}

void TuberInfo::SetCysticwall(const BlockInfo& _cysticwall)
{
    m_cysticwall = _cysticwall;
    m_cysticwallHasBeenSet = true;
}

bool TuberInfo::CysticwallHasBeenSet() const
{
    return m_cysticwallHasBeenSet;
}

BlockInfo TuberInfo::GetCapsule() const
{
    return m_capsule;
}

void TuberInfo::SetCapsule(const BlockInfo& _capsule)
{
    m_capsule = _capsule;
    m_capsuleHasBeenSet = true;
}

bool TuberInfo::CapsuleHasBeenSet() const
{
    return m_capsuleHasBeenSet;
}

Size TuberInfo::GetIsthmusThicknese() const
{
    return m_isthmusThicknese;
}

void TuberInfo::SetIsthmusThicknese(const Size& _isthmusThicknese)
{
    m_isthmusThicknese = _isthmusThicknese;
    m_isthmusThickneseHasBeenSet = true;
}

bool TuberInfo::IsthmusThickneseHasBeenSet() const
{
    return m_isthmusThickneseHasBeenSet;
}

string TuberInfo::GetSrc() const
{
    return m_src;
}

void TuberInfo::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool TuberInfo::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

