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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSINSTANCEOVERVIEW_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSINSTANCEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 托管prometheus实例概览
                */
                class PrometheusInstanceOverview : public AbstractModel
                {
                public:
                    PrometheusInstanceOverview();
                    ~PrometheusInstanceOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param Name 实例名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例vpcId
                     * @return VpcId 实例vpcId
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例vpcId
                     * @param VpcId 实例vpcId
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取实例子网Id
                     * @return SubnetId 实例子网Id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置实例子网Id
                     * @param SubnetId 实例子网Id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例当前的状态
prepare_env = 初始化环境
install_suit = 安装组件
running = 运行中
                     * @return Status 实例当前的状态
prepare_env = 初始化环境
install_suit = 安装组件
running = 运行中
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例当前的状态
prepare_env = 初始化环境
install_suit = 安装组件
running = 运行中
                     * @param Status 实例当前的状态
prepare_env = 初始化环境
install_suit = 安装组件
running = 运行中
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取COS桶存储
                     * @return COSBucket COS桶存储
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置COS桶存储
                     * @param COSBucket COS桶存储
                     */
                    void SetCOSBucket(const std::string& _cOSBucket);

                    /**
                     * 判断参数 COSBucket 是否已赋值
                     * @return COSBucket 是否已赋值
                     */
                    bool COSBucketHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例vpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例当前的状态
prepare_env = 初始化环境
install_suit = 安装组件
running = 运行中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * COS桶存储
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSINSTANCEOVERVIEW_H_
