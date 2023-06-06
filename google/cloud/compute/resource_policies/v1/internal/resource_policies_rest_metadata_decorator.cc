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
// source: google/cloud/compute/resource_policies/v1/resource_policies.proto

#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourcePoliciesRestMetadata::ResourcePoliciesRestMetadata(
    std::shared_ptr<ResourcePoliciesRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::ResourcePolicyAggregatedList>
ResourcePoliciesRestMetadata::AggregatedListResourcePolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        AggregatedListResourcePoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListResourcePolicies(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesRestMetadata::AsyncDeleteResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        DeleteResourcePoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteResourcePolicies(cq, std::move(rest_context),
                                             request);
}

StatusOr<google::cloud::cpp::compute::v1::ResourcePolicy>
ResourcePoliciesRestMetadata::GetResourcePolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        GetResourcePoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetResourcePolicies(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ResourcePoliciesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesRestMetadata::AsyncInsertResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        InsertResourcePoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertResourcePolicies(cq, std::move(rest_context),
                                             request);
}

StatusOr<google::cloud::cpp::compute::v1::ResourcePolicyList>
ResourcePoliciesRestMetadata::ListResourcePolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        ListResourcePoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListResourcePolicies(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ResourcePoliciesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ResourcePoliciesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::resource_policies::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ResourcePoliciesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> ResourcePoliciesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void ResourcePoliciesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1_internal
}  // namespace cloud
}  // namespace google
