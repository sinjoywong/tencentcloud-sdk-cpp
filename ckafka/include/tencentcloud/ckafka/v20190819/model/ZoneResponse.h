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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ZoneInfo.h>
#include <tencentcloud/ckafka/v20190819/model/Price.h>
#include <tencentcloud/ckafka/v20190819/model/ClusterInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 查询kafka的zone信息返回的实体
                */
                class ZoneResponse : public AbstractModel
                {
                public:
                    ZoneResponse();
                    ~ZoneResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取zone列表
                     * @return ZoneList zone列表
                     */
                    std::vector<ZoneInfo> GetZoneList() const;

                    /**
                     * 设置zone列表
                     * @param ZoneList zone列表
                     */
                    void SetZoneList(const std::vector<ZoneInfo>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取最大购买实例个数
                     * @return MaxBuyInstanceNum 最大购买实例个数
                     */
                    int64_t GetMaxBuyInstanceNum() const;

                    /**
                     * 设置最大购买实例个数
                     * @param MaxBuyInstanceNum 最大购买实例个数
                     */
                    void SetMaxBuyInstanceNum(const int64_t& _maxBuyInstanceNum);

                    /**
                     * 判断参数 MaxBuyInstanceNum 是否已赋值
                     * @return MaxBuyInstanceNum 是否已赋值
                     */
                    bool MaxBuyInstanceNumHasBeenSet() const;

                    /**
                     * 获取最大购买带宽 单位Mb/s
                     * @return MaxBandwidth 最大购买带宽 单位Mb/s
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置最大购买带宽 单位Mb/s
                     * @param MaxBandwidth 最大购买带宽 单位Mb/s
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取后付费单位价格
                     * @return UnitPrice 后付费单位价格
                     */
                    Price GetUnitPrice() const;

                    /**
                     * 设置后付费单位价格
                     * @param UnitPrice 后付费单位价格
                     */
                    void SetUnitPrice(const Price& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取后付费消息单价
                     * @return MessagePrice 后付费消息单价
                     */
                    Price GetMessagePrice() const;

                    /**
                     * 设置后付费消息单价
                     * @param MessagePrice 后付费消息单价
                     */
                    void SetMessagePrice(const Price& _messagePrice);

                    /**
                     * 判断参数 MessagePrice 是否已赋值
                     * @return MessagePrice 是否已赋值
                     */
                    bool MessagePriceHasBeenSet() const;

                    /**
                     * 获取用户独占集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterInfo 用户独占集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置用户独占集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterInfo 用户独占集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterInfo(const std::vector<ClusterInfo>& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取购买标准版配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Standard 购买标准版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置购买标准版配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Standard 购买标准版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     */
                    bool StandardHasBeenSet() const;

                    /**
                     * 获取购买标准版S2配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardS2 购买标准版S2配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStandardS2() const;

                    /**
                     * 设置购买标准版S2配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StandardS2 购买标准版S2配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStandardS2(const std::string& _standardS2);

                    /**
                     * 判断参数 StandardS2 是否已赋值
                     * @return StandardS2 是否已赋值
                     */
                    bool StandardS2HasBeenSet() const;

                    /**
                     * 获取购买专业版配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profession 购买专业版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置购买专业版配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Profession 购买专业版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取购买物理独占版配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Physical 购买物理独占版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPhysical() const;

                    /**
                     * 设置购买物理独占版配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Physical 购买物理独占版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPhysical(const std::string& _physical);

                    /**
                     * 判断参数 Physical 是否已赋值
                     * @return Physical 是否已赋值
                     */
                    bool PhysicalHasBeenSet() const;

                private:

                    /**
                     * zone列表
                     */
                    std::vector<ZoneInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * 最大购买实例个数
                     */
                    int64_t m_maxBuyInstanceNum;
                    bool m_maxBuyInstanceNumHasBeenSet;

                    /**
                     * 最大购买带宽 单位Mb/s
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 后付费单位价格
                     */
                    Price m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 后付费消息单价
                     */
                    Price m_messagePrice;
                    bool m_messagePriceHasBeenSet;

                    /**
                     * 用户独占集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 购买标准版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * 购买标准版S2配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standardS2;
                    bool m_standardS2HasBeenSet;

                    /**
                     * 购买专业版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * 购买物理独占版配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_physical;
                    bool m_physicalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
