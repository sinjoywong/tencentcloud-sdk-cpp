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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 地域实体对象
                */
                class Region : public AbstractModel
                {
                public:
                    Region();
                    ~Region() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param RegionId 地域ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param RegionName 地域名称
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return AreaName 区域名称
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置区域名称
                     * @param AreaName 区域名称
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     */
                    bool AreaNameHasBeenSet() const;

                    /**
                     * 获取地域代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCode 地域代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionCode 地域代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取地域代码（V3版本）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCodeV3 地域代码（V3版本）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionCodeV3() const;

                    /**
                     * 设置地域代码（V3版本）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionCodeV3 地域代码（V3版本）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionCodeV3(const std::string& _regionCodeV3);

                    /**
                     * 判断参数 RegionCodeV3 是否已赋值
                     * @return RegionCodeV3 是否已赋值
                     */
                    bool RegionCodeV3HasBeenSet() const;

                    /**
                     * 获取NONE:默认值不支持任何特殊机型\nCVM:支持CVM类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Support NONE:默认值不支持任何特殊机型\nCVM:支持CVM类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSupport() const;

                    /**
                     * 设置NONE:默认值不支持任何特殊机型\nCVM:支持CVM类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Support NONE:默认值不支持任何特殊机型\nCVM:支持CVM类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSupport(const std::string& _support);

                    /**
                     * 判断参数 Support 是否已赋值
                     * @return Support 是否已赋值
                     */
                    bool SupportHasBeenSet() const;

                    /**
                     * 获取是否支持ipv6, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 是否支持ipv6, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIpv6() const;

                    /**
                     * 设置是否支持ipv6, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ipv6 是否支持ipv6, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpv6(const int64_t& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取是否支持跨可用区, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiZone 是否支持跨可用区, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMultiZone() const;

                    /**
                     * 设置是否支持跨可用区, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MultiZone 是否支持跨可用区, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMultiZone(const int64_t& _multiZone);

                    /**
                     * 判断参数 MultiZone 是否已赋值
                     * @return MultiZone 是否已赋值
                     */
                    bool MultiZoneHasBeenSet() const;

                private:

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * 地域代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 地域代码（V3版本）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCodeV3;
                    bool m_regionCodeV3HasBeenSet;

                    /**
                     * NONE:默认值不支持任何特殊机型\nCVM:支持CVM类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_support;
                    bool m_supportHasBeenSet;

                    /**
                     * 是否支持ipv6, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 是否支持跨可用区, 0：表示不支持，1：表示支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_multiZone;
                    bool m_multiZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGION_H_
