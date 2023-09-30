// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/region_security_policies/v1/region_security_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultRegionSecurityPoliciesRestStub::DefaultRegionSecurityPoliciesRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultRegionSecurityPoliciesRestStub::DefaultRegionSecurityPoliciesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncAddRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        AddRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.security_policy_rule_resource(), false,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "securityPolicies", "/",
                             request.security_policy(), "/", "addRule"),
                rest_internal::TrimEmptyQueryParameters({std::make_pair(
                    "validate_only", request.validate_only() ? "1" : "0")})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncDeleteSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        DeleteSecurityPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "securityPolicies", "/",
                             request.security_policy()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
DefaultRegionSecurityPoliciesRestStub::GetSecurityPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        GetSecurityPolicyRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::SecurityPolicy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "securityPolicies", "/", request.security_policy()));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
DefaultRegionSecurityPoliciesRestStub::GetRule(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        GetRuleRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::SecurityPolicyRule>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "securityPolicies", "/", request.security_policy(), "/",
                   "getRule"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("priority", std::to_string(request.priority()))}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncInsertSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        InsertSecurityPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.security_policy_resource(),
                false,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "securityPolicies"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id()),
                     std::make_pair("validate_only",
                                    request.validate_only() ? "1" : "0")})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyList>
DefaultRegionSecurityPoliciesRestStub::ListRegionSecurityPolicies(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        ListRegionSecurityPoliciesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::SecurityPolicyList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "regions", "/", request.region(),
                   "/", "securityPolicies"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncPatchSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchSecurityPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.security_policy_resource(),
                false,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "securityPolicies", "/",
                             request.security_policy()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncPatchRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.security_policy_rule_resource(), false,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "securityPolicies", "/",
                             request.security_policy(), "/", "patchRule"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("priority",
                                    std::to_string(request.priority())),
                     std::make_pair("validate_only",
                                    request.validate_only() ? "1" : "0")})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncRemoveRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_security_policies::v1::
        RemoveRuleRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "regions", "/",
                             request.region(), "/", "securityPolicies", "/",
                             request.security_policy(), "/", "removeRule"),
                rest_internal::TrimEmptyQueryParameters({std::make_pair(
                    "priority", std::to_string(request.priority()))})));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultRegionSecurityPoliciesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/regions/", request.region(), "/operations/",
                             request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultRegionSecurityPoliciesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
                  p.set_value(rest_internal::Post<google::protobuf::Empty>(
                      *operations, *rest_context, request, false,
                      absl::StrCat("/compute/v1/projects/", request.project(),
                                   "/regions/", request.region(),
                                   "/operations/", request.operation())));
                },
                std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1_internal
}  // namespace cloud
}  // namespace google
