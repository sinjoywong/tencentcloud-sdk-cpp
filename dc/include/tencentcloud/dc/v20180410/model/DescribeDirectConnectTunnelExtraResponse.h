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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTTUNNELEXTRARESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTTUNNELEXTRARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/DirectConnectTunnelExtra.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeDirectConnectTunnelExtra返回参数结构体
                */
                class DescribeDirectConnectTunnelExtraResponse : public AbstractModel
                {
                public:
                    DescribeDirectConnectTunnelExtraResponse();
                    ~DescribeDirectConnectTunnelExtraResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取专用通道扩展信息
                     * @return DirectConnectTunnelExtra 专用通道扩展信息
                     */
                    DirectConnectTunnelExtra GetDirectConnectTunnelExtra() const;

                    /**
                     * 判断参数 DirectConnectTunnelExtra 是否已赋值
                     * @return DirectConnectTunnelExtra 是否已赋值
                     */
                    bool DirectConnectTunnelExtraHasBeenSet() const;

                private:

                    /**
                     * 专用通道扩展信息
                     */
                    DirectConnectTunnelExtra m_directConnectTunnelExtra;
                    bool m_directConnectTunnelExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTTUNNELEXTRARESPONSE_H_
