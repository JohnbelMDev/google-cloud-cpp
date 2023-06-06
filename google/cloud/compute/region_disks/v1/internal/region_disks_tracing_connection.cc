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
// source: google/cloud/compute/region_disks/v1/region_disks.proto

#include "google/cloud/compute/region_disks/v1/internal/region_disks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionDisksTracingConnection::RegionDisksTracingConnection(
    std::shared_ptr<compute_region_disks_v1::RegionDisksConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::AddResourcePolicies(
    google::cloud::cpp::compute::region_disks::v1::
        AddResourcePoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::AddResourcePolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AddResourcePolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::CreateSnapshot(
    google::cloud::cpp::compute::region_disks::v1::CreateSnapshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::CreateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSnapshot(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::DeleteRegionDisks(
    google::cloud::cpp::compute::region_disks::v1::
        DeleteRegionDisksRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::DeleteRegionDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRegionDisks(request));
}

StatusOr<google::cloud::cpp::compute::v1::Disk>
RegionDisksTracingConnection::GetRegionDisks(
    google::cloud::cpp::compute::region_disks::v1::GetRegionDisksRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::GetRegionDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRegionDisks(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionDisksTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::InsertRegionDisks(
    google::cloud::cpp::compute::region_disks::v1::
        InsertRegionDisksRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::InsertRegionDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertRegionDisks(request));
}

StreamRange<google::cloud::cpp::compute::v1::Disk>
RegionDisksTracingConnection::ListRegionDisks(
    google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::ListRegionDisks");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionDisks(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::Disk>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::RemoveResourcePolicies(
    google::cloud::cpp::compute::region_disks::v1::
        RemoveResourcePoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::RemoveResourcePolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RemoveResourcePolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::Resize(
    google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::Resize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionDisksTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::SetLabels(
    google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionDisksTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::region_disks::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksTracingConnection::UpdateRegionDisks(
    google::cloud::cpp::compute::region_disks::v1::
        UpdateRegionDisksRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_disks_v1::RegionDisksConnection::UpdateRegionDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateRegionDisks(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_disks_v1::RegionDisksConnection>
MakeRegionDisksTracingConnection(
    std::shared_ptr<compute_region_disks_v1::RegionDisksConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionDisksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disks_v1_internal
}  // namespace cloud
}  // namespace google
