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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEFLEETREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEFLEETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/InboundPermission.h>
#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>
#include <tencentcloud/gse/v20191112/model/RuntimeConfiguration.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateFleet请求参数结构体
                */
                class CreateFleetRequest : public AbstractModel
                {
                public:
                    CreateFleetRequest();
                    ~CreateFleetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包 Id
                     * @return AssetId 生成包 Id
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置生成包 Id
                     * @param AssetId 生成包 Id
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取描述，最小长度0，最大长度100
                     * @return Description 描述，最小长度0，最大长度100
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述，最小长度0，最大长度100
                     * @param Description 描述，最小长度0，最大长度100
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取网络配置
                     * @return InboundPermissions 网络配置
                     */
                    std::vector<InboundPermission> GetInboundPermissions() const;

                    /**
                     * 设置网络配置
                     * @param InboundPermissions 网络配置
                     */
                    void SetInboundPermissions(const std::vector<InboundPermission>& _inboundPermissions);

                    /**
                     * 判断参数 InboundPermissions 是否已赋值
                     * @return InboundPermissions 是否已赋值
                     */
                    bool InboundPermissionsHasBeenSet() const;

                    /**
                     * 获取服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * @return InstanceType 服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * @param InstanceType 服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取服务器舰队类型，目前只支持ON_DEMAND类型
                     * @return FleetType 服务器舰队类型，目前只支持ON_DEMAND类型
                     */
                    std::string GetFleetType() const;

                    /**
                     * 设置服务器舰队类型，目前只支持ON_DEMAND类型
                     * @param FleetType 服务器舰队类型，目前只支持ON_DEMAND类型
                     */
                    void SetFleetType(const std::string& _fleetType);

                    /**
                     * 判断参数 FleetType 是否已赋值
                     * @return FleetType 是否已赋值
                     */
                    bool FleetTypeHasBeenSet() const;

                    /**
                     * 获取服务器舰队名称，最小长度1，最大长度50
                     * @return Name 服务器舰队名称，最小长度1，最大长度50
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务器舰队名称，最小长度1，最大长度50
                     * @param Name 服务器舰队名称，最小长度1，最大长度50
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     * @return NewGameServerSessionProtectionPolicy 保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     */
                    std::string GetNewGameServerSessionProtectionPolicy() const;

                    /**
                     * 设置保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     * @param NewGameServerSessionProtectionPolicy 保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     */
                    void SetNewGameServerSessionProtectionPolicy(const std::string& _newGameServerSessionProtectionPolicy);

                    /**
                     * 判断参数 NewGameServerSessionProtectionPolicy 是否已赋值
                     * @return NewGameServerSessionProtectionPolicy 是否已赋值
                     */
                    bool NewGameServerSessionProtectionPolicyHasBeenSet() const;

                    /**
                     * 获取VPC 网络 Id，对等连接已不再使用
                     * @return PeerVpcId VPC 网络 Id，对等连接已不再使用
                     */
                    std::string GetPeerVpcId() const;

                    /**
                     * 设置VPC 网络 Id，对等连接已不再使用
                     * @param PeerVpcId VPC 网络 Id，对等连接已不再使用
                     */
                    void SetPeerVpcId(const std::string& _peerVpcId);

                    /**
                     * 判断参数 PeerVpcId 是否已赋值
                     * @return PeerVpcId 是否已赋值
                     */
                    bool PeerVpcIdHasBeenSet() const;

                    /**
                     * 获取资源创建限制策略
                     * @return ResourceCreationLimitPolicy 资源创建限制策略
                     */
                    ResourceCreationLimitPolicy GetResourceCreationLimitPolicy() const;

                    /**
                     * 设置资源创建限制策略
                     * @param ResourceCreationLimitPolicy 资源创建限制策略
                     */
                    void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy);

                    /**
                     * 判断参数 ResourceCreationLimitPolicy 是否已赋值
                     * @return ResourceCreationLimitPolicy 是否已赋值
                     */
                    bool ResourceCreationLimitPolicyHasBeenSet() const;

                    /**
                     * 获取进程配置
                     * @return RuntimeConfiguration 进程配置
                     */
                    RuntimeConfiguration GetRuntimeConfiguration() const;

                    /**
                     * 设置进程配置
                     * @param RuntimeConfiguration 进程配置
                     */
                    void SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration);

                    /**
                     * 判断参数 RuntimeConfiguration 是否已赋值
                     * @return RuntimeConfiguration 是否已赋值
                     */
                    bool RuntimeConfigurationHasBeenSet() const;

                    /**
                     * 获取VPC 子网，对等连接已不再使用
                     * @return SubNetId VPC 子网，对等连接已不再使用
                     */
                    std::string GetSubNetId() const;

                    /**
                     * 设置VPC 子网，对等连接已不再使用
                     * @param SubNetId VPC 子网，对等连接已不再使用
                     */
                    void SetSubNetId(const std::string& _subNetId);

                    /**
                     * 判断参数 SubNetId 是否已赋值
                     * @return SubNetId 是否已赋值
                     */
                    bool SubNetIdHasBeenSet() const;

                    /**
                     * 获取时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     * @return GameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     */
                    int64_t GetGameServerSessionProtectionTimeLimit() const;

                    /**
                     * 设置时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     * @param GameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     */
                    void SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit);

                    /**
                     * 判断参数 GameServerSessionProtectionTimeLimit 是否已赋值
                     * @return GameServerSessionProtectionTimeLimit 是否已赋值
                     */
                    bool GameServerSessionProtectionTimeLimitHasBeenSet() const;

                    /**
                     * 获取标签列表，最大长度50组
                     * @return Tags 标签列表，最大长度50组
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
                     * @param Tags 标签列表，最大长度50组
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 生成包 Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 描述，最小长度0，最大长度100
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 网络配置
                     */
                    std::vector<InboundPermission> m_inboundPermissions;
                    bool m_inboundPermissionsHasBeenSet;

                    /**
                     * 服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 服务器舰队类型，目前只支持ON_DEMAND类型
                     */
                    std::string m_fleetType;
                    bool m_fleetTypeHasBeenSet;

                    /**
                     * 服务器舰队名称，最小长度1，最大长度50
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     */
                    std::string m_newGameServerSessionProtectionPolicy;
                    bool m_newGameServerSessionProtectionPolicyHasBeenSet;

                    /**
                     * VPC 网络 Id，对等连接已不再使用
                     */
                    std::string m_peerVpcId;
                    bool m_peerVpcIdHasBeenSet;

                    /**
                     * 资源创建限制策略
                     */
                    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
                    bool m_resourceCreationLimitPolicyHasBeenSet;

                    /**
                     * 进程配置
                     */
                    RuntimeConfiguration m_runtimeConfiguration;
                    bool m_runtimeConfigurationHasBeenSet;

                    /**
                     * VPC 子网，对等连接已不再使用
                     */
                    std::string m_subNetId;
                    bool m_subNetIdHasBeenSet;

                    /**
                     * 时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     */
                    int64_t m_gameServerSessionProtectionTimeLimit;
                    bool m_gameServerSessionProtectionTimeLimitHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEFLEETREQUEST_H_
