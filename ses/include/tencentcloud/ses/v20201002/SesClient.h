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

#ifndef TENCENTCLOUD_SES_V20201002_SESCLIENT_H_
#define TENCENTCLOUD_SES_V20201002_SESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteBlackListRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteBlackListResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/GetEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/GetEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/GetEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/GetEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusRequest.h>
#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusResponse.h>
#include <tencentcloud/ses/v20201002/model/GetStatisticsReportRequest.h>
#include <tencentcloud/ses/v20201002/model/GetStatisticsReportResponse.h>
#include <tencentcloud/ses/v20201002/model/ListBlackEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/ListBlackEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailTemplatesRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailTemplatesResponse.h>
#include <tencentcloud/ses/v20201002/model/SendEmailRequest.h>
#include <tencentcloud/ses/v20201002/model/SendEmailResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailTemplateResponse.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            class SesClient : public AbstractClient
            {
            public:
                SesClient(const Credential &credential, const std::string &region);
                SesClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateEmailAddressResponse> CreateEmailAddressOutcome;
                typedef std::future<CreateEmailAddressOutcome> CreateEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailAddressRequest&, CreateEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailAddressAsyncHandler;
                typedef Outcome<Error, Model::CreateEmailIdentityResponse> CreateEmailIdentityOutcome;
                typedef std::future<CreateEmailIdentityOutcome> CreateEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailIdentityRequest&, CreateEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailIdentityAsyncHandler;
                typedef Outcome<Error, Model::CreateEmailTemplateResponse> CreateEmailTemplateOutcome;
                typedef std::future<CreateEmailTemplateOutcome> CreateEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailTemplateRequest&, CreateEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteBlackListResponse> DeleteBlackListOutcome;
                typedef std::future<DeleteBlackListOutcome> DeleteBlackListOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteBlackListRequest&, DeleteBlackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlackListAsyncHandler;
                typedef Outcome<Error, Model::DeleteEmailAddressResponse> DeleteEmailAddressOutcome;
                typedef std::future<DeleteEmailAddressOutcome> DeleteEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailAddressRequest&, DeleteEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailAddressAsyncHandler;
                typedef Outcome<Error, Model::DeleteEmailIdentityResponse> DeleteEmailIdentityOutcome;
                typedef std::future<DeleteEmailIdentityOutcome> DeleteEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailIdentityRequest&, DeleteEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailIdentityAsyncHandler;
                typedef Outcome<Error, Model::DeleteEmailTemplateResponse> DeleteEmailTemplateOutcome;
                typedef std::future<DeleteEmailTemplateOutcome> DeleteEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailTemplateRequest&, DeleteEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailTemplateAsyncHandler;
                typedef Outcome<Error, Model::GetEmailIdentityResponse> GetEmailIdentityOutcome;
                typedef std::future<GetEmailIdentityOutcome> GetEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetEmailIdentityRequest&, GetEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmailIdentityAsyncHandler;
                typedef Outcome<Error, Model::GetEmailTemplateResponse> GetEmailTemplateOutcome;
                typedef std::future<GetEmailTemplateOutcome> GetEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetEmailTemplateRequest&, GetEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmailTemplateAsyncHandler;
                typedef Outcome<Error, Model::GetSendEmailStatusResponse> GetSendEmailStatusOutcome;
                typedef std::future<GetSendEmailStatusOutcome> GetSendEmailStatusOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetSendEmailStatusRequest&, GetSendEmailStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSendEmailStatusAsyncHandler;
                typedef Outcome<Error, Model::GetStatisticsReportResponse> GetStatisticsReportOutcome;
                typedef std::future<GetStatisticsReportOutcome> GetStatisticsReportOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetStatisticsReportRequest&, GetStatisticsReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsReportAsyncHandler;
                typedef Outcome<Error, Model::ListBlackEmailAddressResponse> ListBlackEmailAddressOutcome;
                typedef std::future<ListBlackEmailAddressOutcome> ListBlackEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListBlackEmailAddressRequest&, ListBlackEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListBlackEmailAddressAsyncHandler;
                typedef Outcome<Error, Model::ListEmailAddressResponse> ListEmailAddressOutcome;
                typedef std::future<ListEmailAddressOutcome> ListEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailAddressRequest&, ListEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailAddressAsyncHandler;
                typedef Outcome<Error, Model::ListEmailIdentitiesResponse> ListEmailIdentitiesOutcome;
                typedef std::future<ListEmailIdentitiesOutcome> ListEmailIdentitiesOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailIdentitiesRequest&, ListEmailIdentitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailIdentitiesAsyncHandler;
                typedef Outcome<Error, Model::ListEmailTemplatesResponse> ListEmailTemplatesOutcome;
                typedef std::future<ListEmailTemplatesOutcome> ListEmailTemplatesOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailTemplatesRequest&, ListEmailTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailTemplatesAsyncHandler;
                typedef Outcome<Error, Model::SendEmailResponse> SendEmailOutcome;
                typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::SendEmailRequest&, SendEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendEmailAsyncHandler;
                typedef Outcome<Error, Model::UpdateEmailIdentityResponse> UpdateEmailIdentityOutcome;
                typedef std::future<UpdateEmailIdentityOutcome> UpdateEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailIdentityRequest&, UpdateEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailIdentityAsyncHandler;
                typedef Outcome<Error, Model::UpdateEmailTemplateResponse> UpdateEmailTemplateOutcome;
                typedef std::future<UpdateEmailTemplateOutcome> UpdateEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailTemplateRequest&, UpdateEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailTemplateAsyncHandler;



                /**
                 *在验证了发信域名之后，您需要一个发信地址来发送邮件。例如发信域名是mail.qcloud.com，那么发信地址可以为 service@mail.qcloud.com。如果您想要收件人在收件箱列表中显示您的别名，例如"腾讯云邮件通知"。那么发信地址为： 别名 空格 尖括号 邮箱地址。请注意中间需要有空格
                 * @param req CreateEmailAddressRequest
                 * @return CreateEmailAddressOutcome
                 */
                CreateEmailAddressOutcome CreateEmailAddress(const Model::CreateEmailAddressRequest &request);
                void CreateEmailAddressAsync(const Model::CreateEmailAddressRequest& request, const CreateEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailAddressOutcomeCallable CreateEmailAddressCallable(const Model::CreateEmailAddressRequest& request);

                /**
                 *在使用身份发送电子邮件之前，您需要有一个电子邮件域名，该域名可以是您的网站或者移动应用的域名。您首先必须进行验证，证明自己是该域名的所有者，并且授权给腾讯云SES发送许可，才可以从该域名发送电子邮件。
                 * @param req CreateEmailIdentityRequest
                 * @return CreateEmailIdentityOutcome
                 */
                CreateEmailIdentityOutcome CreateEmailIdentity(const Model::CreateEmailIdentityRequest &request);
                void CreateEmailIdentityAsync(const Model::CreateEmailIdentityRequest& request, const CreateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailIdentityOutcomeCallable CreateEmailIdentityCallable(const Model::CreateEmailIdentityRequest& request);

                /**
                 *创建模板，该模板可以是TXT或者HTML，请注意如果HTML不要包含外部文件的CSS。模板中的变量使用 {{变量名}} 表示。
注意：模版需要审核通过才可以使用。
                 * @param req CreateEmailTemplateRequest
                 * @return CreateEmailTemplateOutcome
                 */
                CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest &request);
                void CreateEmailTemplateAsync(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const Model::CreateEmailTemplateRequest& request);

                /**
                 *邮箱被拉黑之后，用户如果确认收件邮箱有效或者已经处于激活状态，可以从腾讯云地址库中删除该黑名单之后继续投递。
                 * @param req DeleteBlackListRequest
                 * @return DeleteBlackListOutcome
                 */
                DeleteBlackListOutcome DeleteBlackList(const Model::DeleteBlackListRequest &request);
                void DeleteBlackListAsync(const Model::DeleteBlackListRequest& request, const DeleteBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlackListOutcomeCallable DeleteBlackListCallable(const Model::DeleteBlackListRequest& request);

                /**
                 *删除发信人地址
                 * @param req DeleteEmailAddressRequest
                 * @return DeleteEmailAddressOutcome
                 */
                DeleteEmailAddressOutcome DeleteEmailAddress(const Model::DeleteEmailAddressRequest &request);
                void DeleteEmailAddressAsync(const Model::DeleteEmailAddressRequest& request, const DeleteEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailAddressOutcomeCallable DeleteEmailAddressCallable(const Model::DeleteEmailAddressRequest& request);

                /**
                 *删除发信域名，删除后，将不可再使用该域名进行发信
                 * @param req DeleteEmailIdentityRequest
                 * @return DeleteEmailIdentityOutcome
                 */
                DeleteEmailIdentityOutcome DeleteEmailIdentity(const Model::DeleteEmailIdentityRequest &request);
                void DeleteEmailIdentityAsync(const Model::DeleteEmailIdentityRequest& request, const DeleteEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailIdentityOutcomeCallable DeleteEmailIdentityCallable(const Model::DeleteEmailIdentityRequest& request);

                /**
                 *删除发信模版
                 * @param req DeleteEmailTemplateRequest
                 * @return DeleteEmailTemplateOutcome
                 */
                DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest &request);
                void DeleteEmailTemplateAsync(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const Model::DeleteEmailTemplateRequest& request);

                /**
                 *获取某个发信域名的配置详情
                 * @param req GetEmailIdentityRequest
                 * @return GetEmailIdentityOutcome
                 */
                GetEmailIdentityOutcome GetEmailIdentity(const Model::GetEmailIdentityRequest &request);
                void GetEmailIdentityAsync(const Model::GetEmailIdentityRequest& request, const GetEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmailIdentityOutcomeCallable GetEmailIdentityCallable(const Model::GetEmailIdentityRequest& request);

                /**
                 *根据模板ID获取模板详情
                 * @param req GetEmailTemplateRequest
                 * @return GetEmailTemplateOutcome
                 */
                GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest &request);
                void GetEmailTemplateAsync(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const Model::GetEmailTemplateRequest& request);

                /**
                 *获取邮件发送状态。仅支持查询90天之内的数据
                 * @param req GetSendEmailStatusRequest
                 * @return GetSendEmailStatusOutcome
                 */
                GetSendEmailStatusOutcome GetSendEmailStatus(const Model::GetSendEmailStatusRequest &request);
                void GetSendEmailStatusAsync(const Model::GetSendEmailStatusRequest& request, const GetSendEmailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSendEmailStatusOutcomeCallable GetSendEmailStatusCallable(const Model::GetSendEmailStatusRequest& request);

                /**
                 *获取近期发送的统计情况，包含发送量、送达率、打开率、退信率等一系列数据。
                 * @param req GetStatisticsReportRequest
                 * @return GetStatisticsReportOutcome
                 */
                GetStatisticsReportOutcome GetStatisticsReport(const Model::GetStatisticsReportRequest &request);
                void GetStatisticsReportAsync(const Model::GetStatisticsReportRequest& request, const GetStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStatisticsReportOutcomeCallable GetStatisticsReportCallable(const Model::GetStatisticsReportRequest& request);

                /**
                 *腾讯云发送的邮件一旦被收件方判断为硬退(Hard Bounce)，腾讯云会拉黑该地址，并不允许所有用户向该地址发送邮件。成为邮箱黑名单。如果业务方确认是误判，可以从黑名单中删除。
                 * @param req ListBlackEmailAddressRequest
                 * @return ListBlackEmailAddressOutcome
                 */
                ListBlackEmailAddressOutcome ListBlackEmailAddress(const Model::ListBlackEmailAddressRequest &request);
                void ListBlackEmailAddressAsync(const Model::ListBlackEmailAddressRequest& request, const ListBlackEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListBlackEmailAddressOutcomeCallable ListBlackEmailAddressCallable(const Model::ListBlackEmailAddressRequest& request);

                /**
                 *获取发信地址列表
                 * @param req ListEmailAddressRequest
                 * @return ListEmailAddressOutcome
                 */
                ListEmailAddressOutcome ListEmailAddress(const Model::ListEmailAddressRequest &request);
                void ListEmailAddressAsync(const Model::ListEmailAddressRequest& request, const ListEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailAddressOutcomeCallable ListEmailAddressCallable(const Model::ListEmailAddressRequest& request);

                /**
                 *获取当前发信域名列表，包含已验证通过与未验证的域名
                 * @param req ListEmailIdentitiesRequest
                 * @return ListEmailIdentitiesOutcome
                 */
                ListEmailIdentitiesOutcome ListEmailIdentities(const Model::ListEmailIdentitiesRequest &request);
                void ListEmailIdentitiesAsync(const Model::ListEmailIdentitiesRequest& request, const ListEmailIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailIdentitiesOutcomeCallable ListEmailIdentitiesCallable(const Model::ListEmailIdentitiesRequest& request);

                /**
                 *获取当前邮件模板列表
                 * @param req ListEmailTemplatesRequest
                 * @return ListEmailTemplatesOutcome
                 */
                ListEmailTemplatesOutcome ListEmailTemplates(const Model::ListEmailTemplatesRequest &request);
                void ListEmailTemplatesAsync(const Model::ListEmailTemplatesRequest& request, const ListEmailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailTemplatesOutcomeCallable ListEmailTemplatesCallable(const Model::ListEmailTemplatesRequest& request);

                /**
                 *您可以通过此API发送TEXT或者HTML邮件，默认仅支持使用模板发送邮件，如需发送自定义内容，请单独联系商务开通此功能。
                 * @param req SendEmailRequest
                 * @return SendEmailOutcome
                 */
                SendEmailOutcome SendEmail(const Model::SendEmailRequest &request);
                void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request);

                /**
                 *您已经成功配置好了您的DNS，接下来请求腾讯云验证您的DNS配置是否正确
                 * @param req UpdateEmailIdentityRequest
                 * @return UpdateEmailIdentityOutcome
                 */
                UpdateEmailIdentityOutcome UpdateEmailIdentity(const Model::UpdateEmailIdentityRequest &request);
                void UpdateEmailIdentityAsync(const Model::UpdateEmailIdentityRequest& request, const UpdateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailIdentityOutcomeCallable UpdateEmailIdentityCallable(const Model::UpdateEmailIdentityRequest& request);

                /**
                 *更新邮件模板，更新后需再次审核
                 * @param req UpdateEmailTemplateRequest
                 * @return UpdateEmailTemplateOutcome
                 */
                UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest &request);
                void UpdateEmailTemplateAsync(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const Model::UpdateEmailTemplateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_SESCLIENT_H_
