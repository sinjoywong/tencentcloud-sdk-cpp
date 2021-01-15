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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_PREDICTRATINGRESPONSE_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_PREDICTRATINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apcas/v20201127/model/RatingData.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * PredictRating返回参数结构体
                */
                class PredictRatingResponse : public AbstractModel
                {
                public:
                    PredictRatingResponse();
                    ~PredictRatingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取意向评级
                     * @return RatingData 意向评级
                     */
                    RatingData GetRatingData() const;

                    /**
                     * 判断参数 RatingData 是否已赋值
                     * @return RatingData 是否已赋值
                     */
                    bool RatingDataHasBeenSet() const;

                private:

                    /**
                     * 意向评级
                     */
                    RatingData m_ratingData;
                    bool m_ratingDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_PREDICTRATINGRESPONSE_H_
