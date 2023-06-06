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
// google/cloud/compute/region_health_checks/v1/region_health_checks.proto

#include "google/cloud/compute/region_health_checks/v1/region_health_checks_connection.h"
#include "google/cloud/compute/region_health_checks/v1/internal/region_health_checks_option_defaults.h"
#include "google/cloud/compute/region_health_checks/v1/internal/region_health_checks_tracing_connection.h"
#include "google/cloud/compute/region_health_checks/v1/region_health_checks_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionHealthChecksConnection::~RegionHealthChecksConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksConnection::DeleteRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        DeleteRegionHealthChecksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksConnection::GetRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        GetRegionHealthChecksRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksConnection::InsertRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        InsertRegionHealthChecksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksConnection::ListRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        ListRegionHealthChecksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::HealthCheck>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksConnection::PatchRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        PatchRegionHealthChecksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksConnection::UpdateRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        UpdateRegionHealthChecksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_checks_v1
}  // namespace cloud
}  // namespace google
