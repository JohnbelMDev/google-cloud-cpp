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
// source: google/cloud/compute/interconnects/v1/interconnects.proto

#include "google/cloud/compute/interconnects/v1/internal/interconnects_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_interconnects_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectsRestMetadata::InterconnectsRestMetadata(
    std::shared_ptr<InterconnectsRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsRestMetadata::AsyncDeleteInterconnect(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::interconnects::v1::
        DeleteInterconnectRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteInterconnect(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Interconnect>
InterconnectsRestMetadata::GetInterconnect(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::interconnects::v1::
        GetInterconnectRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetInterconnect(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectsGetDiagnosticsResponse>
InterconnectsRestMetadata::GetDiagnostics(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::interconnects::v1::GetDiagnosticsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetDiagnostics(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectsGetMacsecConfigResponse>
InterconnectsRestMetadata::GetMacsecConfig(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::interconnects::v1::
        GetMacsecConfigRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetMacsecConfig(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsRestMetadata::AsyncInsertInterconnect(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::interconnects::v1::
        InsertInterconnectRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertInterconnect(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectList>
InterconnectsRestMetadata::ListInterconnects(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::interconnects::v1::
        ListInterconnectsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListInterconnects(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsRestMetadata::AsyncPatchInterconnect(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::interconnects::v1::
        PatchInterconnectRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchInterconnect(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetLabels(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> InterconnectsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void InterconnectsRestMetadata::SetMetadata(
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
}  // namespace compute_interconnects_v1_internal
}  // namespace cloud
}  // namespace google
