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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETOCLASSREQUEST_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETOCLASSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ImageInfo.h>
#include <tencentcloud/mrs/v20200910/model/HandleParam.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * ImageToClass请求参数结构体
                */
                class ImageToClassRequest : public AbstractModel
                {
                public:
                    ImageToClassRequest();
                    ~ImageToClassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片列表，允许传入多张图片，支持传入图片的url或base64编码
                     * @return ImageInfoList 图片列表，允许传入多张图片，支持传入图片的url或base64编码
                     */
                    std::vector<ImageInfo> GetImageInfoList() const;

                    /**
                     * 设置图片列表，允许传入多张图片，支持传入图片的url或base64编码
                     * @param ImageInfoList 图片列表，允许传入多张图片，支持传入图片的url或base64编码
                     */
                    void SetImageInfoList(const std::vector<ImageInfo>& _imageInfoList);

                    /**
                     * 判断参数 ImageInfoList 是否已赋值
                     * @return ImageInfoList 是否已赋值
                     */
                    bool ImageInfoListHasBeenSet() const;

                    /**
                     * 获取图片处理参数
                     * @return HandleParam 图片处理参数
                     */
                    HandleParam GetHandleParam() const;

                    /**
                     * 设置图片处理参数
                     * @param HandleParam 图片处理参数
                     */
                    void SetHandleParam(const HandleParam& _handleParam);

                    /**
                     * 判断参数 HandleParam 是否已赋值
                     * @return HandleParam 是否已赋值
                     */
                    bool HandleParamHasBeenSet() const;

                    /**
                     * 获取图片类型，目前支持11（检验报告），12（检查报告），15（病理报告），218（诊断证明）。
                     * @return Type 图片类型，目前支持11（检验报告），12（检查报告），15（病理报告），218（诊断证明）。
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置图片类型，目前支持11（检验报告），12（检查报告），15（病理报告），218（诊断证明）。
                     * @param Type 图片类型，目前支持11（检验报告），12（检查报告），15（病理报告），218（诊断证明）。
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 图片列表，允许传入多张图片，支持传入图片的url或base64编码
                     */
                    std::vector<ImageInfo> m_imageInfoList;
                    bool m_imageInfoListHasBeenSet;

                    /**
                     * 图片处理参数
                     */
                    HandleParam m_handleParam;
                    bool m_handleParamHasBeenSet;

                    /**
                     * 图片类型，目前支持11（检验报告），12（检查报告），15（病理报告），218（诊断证明）。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETOCLASSREQUEST_H_
