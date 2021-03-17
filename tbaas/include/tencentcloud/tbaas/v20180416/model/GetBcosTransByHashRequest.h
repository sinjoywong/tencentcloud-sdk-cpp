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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSTRANSBYHASHREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSTRANSBYHASHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetBcosTransByHash请求参数结构体
                */
                class GetBcosTransByHashRequest : public AbstractModel
                {
                public:
                    GetBcosTransByHashRequest();
                    ~GetBcosTransByHashRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情或列表中获取
                     * @param ClusterId 网络ID，可在区块链网络详情或列表中获取
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取群组编号，可在群组列表中获取
                     * @return GroupId 群组编号，可在群组列表中获取
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置群组编号，可在群组列表中获取
                     * @param GroupId 群组编号，可在群组列表中获取
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取交易哈希值，可以从InvokeBcosTrans接口的返回值中解析获取
                     * @return TransHash 交易哈希值，可以从InvokeBcosTrans接口的返回值中解析获取
                     */
                    std::string GetTransHash() const;

                    /**
                     * 设置交易哈希值，可以从InvokeBcosTrans接口的返回值中解析获取
                     * @param TransHash 交易哈希值，可以从InvokeBcosTrans接口的返回值中解析获取
                     */
                    void SetTransHash(const std::string& _transHash);

                    /**
                     * 判断参数 TransHash 是否已赋值
                     * @return TransHash 是否已赋值
                     */
                    bool TransHashHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组编号，可在群组列表中获取
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 交易哈希值，可以从InvokeBcosTrans接口的返回值中解析获取
                     */
                    std::string m_transHash;
                    bool m_transHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSTRANSBYHASHREQUEST_H_
