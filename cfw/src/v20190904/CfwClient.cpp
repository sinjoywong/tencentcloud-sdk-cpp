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

#include <tencentcloud/cfw/v20190904/CfwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfw::V20190904;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-04";
    const string ENDPOINT = "cfw.tencentcloudapi.com";
}

CfwClient::CfwClient(const Credential &credential, const string &region) :
    CfwClient(credential, region, ClientProfile())
{
}

CfwClient::CfwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfwClient::CreateAcRulesOutcome CfwClient::CreateAcRules(const CreateAcRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAcRulesResponse rsp = CreateAcRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAcRulesOutcome(rsp);
        else
            return CreateAcRulesOutcome(o.GetError());
    }
    else
    {
        return CreateAcRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAcRulesAsync(const CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAcRulesOutcomeCallable CfwClient::CreateAcRulesCallable(const CreateAcRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAcRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateAcRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::CreateSecurityGroupApiRulesOutcome CfwClient::CreateSecurityGroupApiRules(const CreateSecurityGroupApiRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupApiRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupApiRulesResponse rsp = CreateSecurityGroupApiRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupApiRulesOutcome(rsp);
        else
            return CreateSecurityGroupApiRulesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupApiRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateSecurityGroupApiRulesAsync(const CreateSecurityGroupApiRulesRequest& request, const CreateSecurityGroupApiRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroupApiRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateSecurityGroupApiRulesOutcomeCallable CfwClient::CreateSecurityGroupApiRulesCallable(const CreateSecurityGroupApiRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupApiRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroupApiRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteAcRuleOutcome CfwClient::DeleteAcRule(const DeleteAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAcRuleResponse rsp = DeleteAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAcRuleOutcome(rsp);
        else
            return DeleteAcRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAcRuleAsync(const DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAcRuleOutcomeCallable CfwClient::DeleteAcRuleCallable(const DeleteAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteAllAccessControlRuleOutcome CfwClient::DeleteAllAccessControlRule(const DeleteAllAccessControlRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllAccessControlRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllAccessControlRuleResponse rsp = DeleteAllAccessControlRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllAccessControlRuleOutcome(rsp);
        else
            return DeleteAllAccessControlRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAllAccessControlRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAllAccessControlRuleAsync(const DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllAccessControlRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAllAccessControlRuleOutcomeCallable CfwClient::DeleteAllAccessControlRuleCallable(const DeleteAllAccessControlRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllAccessControlRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllAccessControlRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteSecurityGroupAllRuleOutcome CfwClient::DeleteSecurityGroupAllRule(const DeleteSecurityGroupAllRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupAllRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupAllRuleResponse rsp = DeleteSecurityGroupAllRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupAllRuleOutcome(rsp);
        else
            return DeleteSecurityGroupAllRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupAllRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteSecurityGroupAllRuleAsync(const DeleteSecurityGroupAllRuleRequest& request, const DeleteSecurityGroupAllRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroupAllRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteSecurityGroupAllRuleOutcomeCallable CfwClient::DeleteSecurityGroupAllRuleCallable(const DeleteSecurityGroupAllRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupAllRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroupAllRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DeleteSecurityGroupRuleOutcome CfwClient::DeleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupRuleResponse rsp = DeleteSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupRuleOutcome(rsp);
        else
            return DeleteSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteSecurityGroupRuleAsync(const DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteSecurityGroupRuleOutcomeCallable CfwClient::DeleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAcListsOutcome CfwClient::DescribeAcLists(const DescribeAcListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAcLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAcListsResponse rsp = DescribeAcListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAcListsOutcome(rsp);
        else
            return DescribeAcListsOutcome(o.GetError());
    }
    else
    {
        return DescribeAcListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAcListsAsync(const DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAcLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAcListsOutcomeCallable CfwClient::DescribeAcListsCallable(const DescribeAcListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAcListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAcLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeAssociatedInstanceListOutcome CfwClient::DescribeAssociatedInstanceList(const DescribeAssociatedInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssociatedInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssociatedInstanceListResponse rsp = DescribeAssociatedInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssociatedInstanceListOutcome(rsp);
        else
            return DescribeAssociatedInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssociatedInstanceListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAssociatedInstanceListAsync(const DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssociatedInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAssociatedInstanceListOutcomeCallable CfwClient::DescribeAssociatedInstanceListCallable(const DescribeAssociatedInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssociatedInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssociatedInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeCfwEipsOutcome CfwClient::DescribeCfwEips(const DescribeCfwEipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfwEips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfwEipsResponse rsp = DescribeCfwEipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfwEipsOutcome(rsp);
        else
            return DescribeCfwEipsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfwEipsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeCfwEipsAsync(const DescribeCfwEipsRequest& request, const DescribeCfwEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfwEips(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeCfwEipsOutcomeCallable CfwClient::DescribeCfwEipsCallable(const DescribeCfwEipsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfwEipsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfwEips(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeGuideScanInfoOutcome CfwClient::DescribeGuideScanInfo(const DescribeGuideScanInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGuideScanInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGuideScanInfoResponse rsp = DescribeGuideScanInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGuideScanInfoOutcome(rsp);
        else
            return DescribeGuideScanInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGuideScanInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeGuideScanInfoAsync(const DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGuideScanInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeGuideScanInfoOutcomeCallable CfwClient::DescribeGuideScanInfoCallable(const DescribeGuideScanInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGuideScanInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeGuideScanInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeNatRuleOverviewOutcome CfwClient::DescribeNatRuleOverview(const DescribeNatRuleOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatRuleOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatRuleOverviewResponse rsp = DescribeNatRuleOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatRuleOverviewOutcome(rsp);
        else
            return DescribeNatRuleOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeNatRuleOverviewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatRuleOverviewAsync(const DescribeNatRuleOverviewRequest& request, const DescribeNatRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatRuleOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatRuleOverviewOutcomeCallable CfwClient::DescribeNatRuleOverviewCallable(const DescribeNatRuleOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatRuleOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatRuleOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeRuleOverviewOutcome CfwClient::DescribeRuleOverview(const DescribeRuleOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleOverviewResponse rsp = DescribeRuleOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOverviewOutcome(rsp);
        else
            return DescribeRuleOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOverviewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeRuleOverviewAsync(const DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeRuleOverviewOutcomeCallable CfwClient::DescribeRuleOverviewCallable(const DescribeRuleOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeSecurityGroupListOutcome CfwClient::DescribeSecurityGroupList(const DescribeSecurityGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupListResponse rsp = DescribeSecurityGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupListOutcome(rsp);
        else
            return DescribeSecurityGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSecurityGroupListAsync(const DescribeSecurityGroupListRequest& request, const DescribeSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSecurityGroupListOutcomeCallable CfwClient::DescribeSecurityGroupListCallable(const DescribeSecurityGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeSwitchListsOutcome CfwClient::DescribeSwitchLists(const DescribeSwitchListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSwitchLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSwitchListsResponse rsp = DescribeSwitchListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSwitchListsOutcome(rsp);
        else
            return DescribeSwitchListsOutcome(o.GetError());
    }
    else
    {
        return DescribeSwitchListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSwitchListsAsync(const DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSwitchLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSwitchListsOutcomeCallable CfwClient::DescribeSwitchListsCallable(const DescribeSwitchListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSwitchListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSwitchLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeSyncAssetStatusOutcome CfwClient::DescribeSyncAssetStatus(const DescribeSyncAssetStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncAssetStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncAssetStatusResponse rsp = DescribeSyncAssetStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncAssetStatusOutcome(rsp);
        else
            return DescribeSyncAssetStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncAssetStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSyncAssetStatusAsync(const DescribeSyncAssetStatusRequest& request, const DescribeSyncAssetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSyncAssetStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSyncAssetStatusOutcomeCallable CfwClient::DescribeSyncAssetStatusCallable(const DescribeSyncAssetStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSyncAssetStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSyncAssetStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeTableStatusOutcome CfwClient::DescribeTableStatus(const DescribeTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableStatusResponse rsp = DescribeTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableStatusOutcome(rsp);
        else
            return DescribeTableStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTableStatusAsync(const DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTableStatusOutcomeCallable CfwClient::DescribeTableStatusCallable(const DescribeTableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::DescribeVpcRuleOverviewOutcome CfwClient::DescribeVpcRuleOverview(const DescribeVpcRuleOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcRuleOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcRuleOverviewResponse rsp = DescribeVpcRuleOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcRuleOverviewOutcome(rsp);
        else
            return DescribeVpcRuleOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcRuleOverviewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeVpcRuleOverviewAsync(const DescribeVpcRuleOverviewRequest& request, const DescribeVpcRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcRuleOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeVpcRuleOverviewOutcomeCallable CfwClient::DescribeVpcRuleOverviewCallable(const DescribeVpcRuleOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcRuleOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcRuleOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ExpandCfwVerticalOutcome CfwClient::ExpandCfwVertical(const ExpandCfwVerticalRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandCfwVertical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandCfwVerticalResponse rsp = ExpandCfwVerticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandCfwVerticalOutcome(rsp);
        else
            return ExpandCfwVerticalOutcome(o.GetError());
    }
    else
    {
        return ExpandCfwVerticalOutcome(outcome.GetError());
    }
}

void CfwClient::ExpandCfwVerticalAsync(const ExpandCfwVerticalRequest& request, const ExpandCfwVerticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExpandCfwVertical(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ExpandCfwVerticalOutcomeCallable CfwClient::ExpandCfwVerticalCallable(const ExpandCfwVerticalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExpandCfwVerticalOutcome()>>(
        [this, request]()
        {
            return this->ExpandCfwVertical(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAcRuleOutcome CfwClient::ModifyAcRule(const ModifyAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAcRuleResponse rsp = ModifyAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAcRuleOutcome(rsp);
        else
            return ModifyAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAcRuleAsync(const ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAcRuleOutcomeCallable CfwClient::ModifyAcRuleCallable(const ModifyAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAcRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAllRuleStatusOutcome CfwClient::ModifyAllRuleStatus(const ModifyAllRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllRuleStatusResponse rsp = ModifyAllRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllRuleStatusOutcome(rsp);
        else
            return ModifyAllRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllRuleStatusAsync(const ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllRuleStatusOutcomeCallable CfwClient::ModifyAllRuleStatusCallable(const ModifyAllRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyAllSwitchStatusOutcome CfwClient::ModifyAllSwitchStatus(const ModifyAllSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllSwitchStatusResponse rsp = ModifyAllSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllSwitchStatusOutcome(rsp);
        else
            return ModifyAllSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllSwitchStatusAsync(const ModifyAllSwitchStatusRequest& request, const ModifyAllSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllSwitchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllSwitchStatusOutcomeCallable CfwClient::ModifyAllSwitchStatusCallable(const ModifyAllSwitchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllSwitchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllSwitchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyBlockIgnoreListOutcome CfwClient::ModifyBlockIgnoreList(const ModifyBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreListResponse rsp = ModifyBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreListOutcome(rsp);
        else
            return ModifyBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreListAsync(const ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockIgnoreListOutcomeCallable CfwClient::ModifyBlockIgnoreListCallable(const ModifyBlockIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyItemSwitchStatusOutcome CfwClient::ModifyItemSwitchStatus(const ModifyItemSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyItemSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyItemSwitchStatusResponse rsp = ModifyItemSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyItemSwitchStatusOutcome(rsp);
        else
            return ModifyItemSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyItemSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyItemSwitchStatusAsync(const ModifyItemSwitchStatusRequest& request, const ModifyItemSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyItemSwitchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyItemSwitchStatusOutcomeCallable CfwClient::ModifyItemSwitchStatusCallable(const ModifyItemSwitchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyItemSwitchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyItemSwitchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySecurityGroupAllRuleStatusOutcome CfwClient::ModifySecurityGroupAllRuleStatus(const ModifySecurityGroupAllRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupAllRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupAllRuleStatusResponse rsp = ModifySecurityGroupAllRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupAllRuleStatusOutcome(rsp);
        else
            return ModifySecurityGroupAllRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupAllRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupAllRuleStatusAsync(const ModifySecurityGroupAllRuleStatusRequest& request, const ModifySecurityGroupAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupAllRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySecurityGroupAllRuleStatusOutcomeCallable CfwClient::ModifySecurityGroupAllRuleStatusCallable(const ModifySecurityGroupAllRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupAllRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupAllRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifySequenceRulesOutcome CfwClient::ModifySequenceRules(const ModifySequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySequenceRulesResponse rsp = ModifySequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySequenceRulesOutcome(rsp);
        else
            return ModifySequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySequenceRulesAsync(const ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySequenceRulesOutcomeCallable CfwClient::ModifySequenceRulesCallable(const ModifySequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifySequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::ModifyTableStatusOutcome CfwClient::ModifyTableStatus(const ModifyTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableStatusResponse rsp = ModifyTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableStatusOutcome(rsp);
        else
            return ModifyTableStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyTableStatusAsync(const ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyTableStatusOutcomeCallable CfwClient::ModifyTableStatusCallable(const ModifyTableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::RunSyncAssetOutcome CfwClient::RunSyncAsset(const RunSyncAssetRequest &request)
{
    auto outcome = MakeRequest(request, "RunSyncAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunSyncAssetResponse rsp = RunSyncAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunSyncAssetOutcome(rsp);
        else
            return RunSyncAssetOutcome(o.GetError());
    }
    else
    {
        return RunSyncAssetOutcome(outcome.GetError());
    }
}

void CfwClient::RunSyncAssetAsync(const RunSyncAssetRequest& request, const RunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunSyncAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RunSyncAssetOutcomeCallable CfwClient::RunSyncAssetCallable(const RunSyncAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunSyncAssetOutcome()>>(
        [this, request]()
        {
            return this->RunSyncAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfwClient::SetNatFwDnatRuleOutcome CfwClient::SetNatFwDnatRule(const SetNatFwDnatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwDnatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwDnatRuleResponse rsp = SetNatFwDnatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwDnatRuleOutcome(rsp);
        else
            return SetNatFwDnatRuleOutcome(o.GetError());
    }
    else
    {
        return SetNatFwDnatRuleOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwDnatRuleAsync(const SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNatFwDnatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SetNatFwDnatRuleOutcomeCallable CfwClient::SetNatFwDnatRuleCallable(const SetNatFwDnatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNatFwDnatRuleOutcome()>>(
        [this, request]()
        {
            return this->SetNatFwDnatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

