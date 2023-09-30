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
// source: google/cloud/compute/routers/v1/routers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_INTERNAL_ROUTERS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_INTERNAL_ROUTERS_TRACING_CONNECTION_H

#include "google/cloud/compute/routers/v1/routers_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_routers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RoutersTracingConnection : public compute_routers_v1::RoutersConnection {
 public:
  ~RoutersTracingConnection() override = default;

  explicit RoutersTracingConnection(
      std::shared_ptr<compute_routers_v1::RoutersConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::RoutersScopedList>>
  AggregatedListRouters(
      google::cloud::cpp::compute::routers::v1::AggregatedListRoutersRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteRouter(
      google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Router> GetRouter(
      google::cloud::cpp::compute::routers::v1::GetRouterRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::NatIpInfoResponse> GetNatIpInfo(
      google::cloud::cpp::compute::routers::v1::GetNatIpInfoRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::VmEndpointNatMappingsList>
  GetNatMappingInfo(
      google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RouterStatusResponse>
  GetRouterStatus(
      google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertRouter(
      google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::Router> ListRouters(
      google::cloud::cpp::compute::routers::v1::ListRoutersRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchRouter(
      google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RoutersPreviewResponse> Preview(
      google::cloud::cpp::compute::routers::v1::PreviewRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateRouter(
      google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
          request) override;

 private:
  std::shared_ptr<compute_routers_v1::RoutersConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_routers_v1::RoutersConnection>
MakeRoutersTracingConnection(
    std::shared_ptr<compute_routers_v1::RoutersConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_INTERNAL_ROUTERS_TRACING_CONNECTION_H
