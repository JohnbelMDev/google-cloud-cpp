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
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceGroupManagersRestMetadata::InstanceGroupManagersRestMetadata(
    std::shared_ptr<InstanceGroupManagersRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncAbandonInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncAbandonInstances(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>
InstanceGroupManagersRestMetadata::AggregatedListInstanceGroupManagers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AggregatedListInstanceGroupManagersRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListInstanceGroupManagers(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncApplyUpdatesToInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncApplyUpdatesToInstances(cq, std::move(rest_context),
                                              request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncCreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCreateInstances(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncDeleteInstanceGroupManagers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstanceGroupManagersRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteInstanceGroupManagers(cq, std::move(rest_context),
                                                  request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncDeleteInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteInstances(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncDeletePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeletePerInstanceConfigs(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
InstanceGroupManagersRestMetadata::GetInstanceGroupManagers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        GetInstanceGroupManagersRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetInstanceGroupManagers(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncInsertInstanceGroupManagers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        InsertInstanceGroupManagersRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertInstanceGroupManagers(cq, std::move(rest_context),
                                                  request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerList>
InstanceGroupManagersRestMetadata::ListInstanceGroupManagers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListInstanceGroupManagersRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListInstanceGroupManagers(rest_context, request);
}

StatusOr<
    google::cloud::cpp::compute::v1::InstanceGroupManagersListErrorsResponse>
InstanceGroupManagersRestMetadata::ListErrors(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListErrorsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListErrors(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListManagedInstancesResponse>
InstanceGroupManagersRestMetadata::ListManagedInstances(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListManagedInstances(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListPerInstanceConfigsResp>
InstanceGroupManagersRestMetadata::ListPerInstanceConfigs(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListPerInstanceConfigsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListPerInstanceConfigs(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncPatchInstanceGroupManagers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchInstanceGroupManagersRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchInstanceGroupManagers(cq, std::move(rest_context),
                                                 request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncPatchPerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchPerInstanceConfigs(cq, std::move(rest_context),
                                              request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncRecreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncRecreateInstances(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResizeRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncResize(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncSetInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetInstanceTemplate(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncSetTargetPools(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetTargetPools(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncUpdatePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdatePerInstanceConfigs(cq, std::move(rest_context),
                                               request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> InstanceGroupManagersRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void InstanceGroupManagersRestMetadata::SetMetadata(
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
}  // namespace compute_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
