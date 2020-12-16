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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RUNJOBFLOWRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RUNJOBFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * RunJobFlow返回参数结构体
                */
                class RunJobFlowResponse : public AbstractModel
                {
                public:
                    RunJobFlowResponse();
                    ~RunJobFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取作业流程ID。
                     * @return JobFlowId 作业流程ID。
                     */
                    int64_t GetJobFlowId() const;

                    /**
                     * 判断参数 JobFlowId 是否已赋值
                     * @return JobFlowId 是否已赋值
                     */
                    bool JobFlowIdHasBeenSet() const;

                private:

                    /**
                     * 作业流程ID。
                     */
                    int64_t m_jobFlowId;
                    bool m_jobFlowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RUNJOBFLOWRESPONSE_H_
