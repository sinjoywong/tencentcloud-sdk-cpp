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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITAUDITMANAGERREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITAUDITMANAGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * SubmitAuditManager请求参数结构体
                */
                class SubmitAuditManagerRequest : public AbstractModel
                {
                public:
                    SubmitAuditManagerRequest();
                    ~SubmitAuditManagerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取管理人ID
                     * @return ManagerId 管理人ID
                     */
                    int64_t GetManagerId() const;

                    /**
                     * 设置管理人ID
                     * @param ManagerId 管理人ID
                     */
                    void SetManagerId(const int64_t& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     */
                    bool ManagerIdHasBeenSet() const;

                private:

                    /**
                     * 管理人ID
                     */
                    int64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITAUDITMANAGERREQUEST_H_
