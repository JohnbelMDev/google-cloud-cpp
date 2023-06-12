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
// source: google/cloud/networkservices/v1/network_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_NETWORK_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_NETWORK_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/networkservices/v1/network_services.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networkservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkServicesConnectionIdempotencyPolicy {
 public:
  virtual ~NetworkServicesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetworkServicesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListEndpointPolicies(
      google::cloud::networkservices::v1::ListEndpointPoliciesRequest request);

  virtual google::cloud::Idempotency GetEndpointPolicy(
      google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
          request);

  virtual google::cloud::Idempotency CreateEndpointPolicy(
      google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
          request);

  virtual google::cloud::Idempotency UpdateEndpointPolicy(
      google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
          request);

  virtual google::cloud::Idempotency DeleteEndpointPolicy(
      google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
          request);

  virtual google::cloud::Idempotency ListGateways(
      google::cloud::networkservices::v1::ListGatewaysRequest request);

  virtual google::cloud::Idempotency GetGateway(
      google::cloud::networkservices::v1::GetGatewayRequest const& request);

  virtual google::cloud::Idempotency CreateGateway(
      google::cloud::networkservices::v1::CreateGatewayRequest const& request);

  virtual google::cloud::Idempotency UpdateGateway(
      google::cloud::networkservices::v1::UpdateGatewayRequest const& request);

  virtual google::cloud::Idempotency DeleteGateway(
      google::cloud::networkservices::v1::DeleteGatewayRequest const& request);

  virtual google::cloud::Idempotency ListGrpcRoutes(
      google::cloud::networkservices::v1::ListGrpcRoutesRequest request);

  virtual google::cloud::Idempotency GetGrpcRoute(
      google::cloud::networkservices::v1::GetGrpcRouteRequest const& request);

  virtual google::cloud::Idempotency CreateGrpcRoute(
      google::cloud::networkservices::v1::CreateGrpcRouteRequest const&
          request);

  virtual google::cloud::Idempotency UpdateGrpcRoute(
      google::cloud::networkservices::v1::UpdateGrpcRouteRequest const&
          request);

  virtual google::cloud::Idempotency DeleteGrpcRoute(
      google::cloud::networkservices::v1::DeleteGrpcRouteRequest const&
          request);

  virtual google::cloud::Idempotency ListHttpRoutes(
      google::cloud::networkservices::v1::ListHttpRoutesRequest request);

  virtual google::cloud::Idempotency GetHttpRoute(
      google::cloud::networkservices::v1::GetHttpRouteRequest const& request);

  virtual google::cloud::Idempotency CreateHttpRoute(
      google::cloud::networkservices::v1::CreateHttpRouteRequest const&
          request);

  virtual google::cloud::Idempotency UpdateHttpRoute(
      google::cloud::networkservices::v1::UpdateHttpRouteRequest const&
          request);

  virtual google::cloud::Idempotency DeleteHttpRoute(
      google::cloud::networkservices::v1::DeleteHttpRouteRequest const&
          request);

  virtual google::cloud::Idempotency ListTcpRoutes(
      google::cloud::networkservices::v1::ListTcpRoutesRequest request);

  virtual google::cloud::Idempotency GetTcpRoute(
      google::cloud::networkservices::v1::GetTcpRouteRequest const& request);

  virtual google::cloud::Idempotency CreateTcpRoute(
      google::cloud::networkservices::v1::CreateTcpRouteRequest const& request);

  virtual google::cloud::Idempotency UpdateTcpRoute(
      google::cloud::networkservices::v1::UpdateTcpRouteRequest const& request);

  virtual google::cloud::Idempotency DeleteTcpRoute(
      google::cloud::networkservices::v1::DeleteTcpRouteRequest const& request);

  virtual google::cloud::Idempotency ListTlsRoutes(
      google::cloud::networkservices::v1::ListTlsRoutesRequest request);

  virtual google::cloud::Idempotency GetTlsRoute(
      google::cloud::networkservices::v1::GetTlsRouteRequest const& request);

  virtual google::cloud::Idempotency CreateTlsRoute(
      google::cloud::networkservices::v1::CreateTlsRouteRequest const& request);

  virtual google::cloud::Idempotency UpdateTlsRoute(
      google::cloud::networkservices::v1::UpdateTlsRouteRequest const& request);

  virtual google::cloud::Idempotency DeleteTlsRoute(
      google::cloud::networkservices::v1::DeleteTlsRouteRequest const& request);

  virtual google::cloud::Idempotency ListServiceBindings(
      google::cloud::networkservices::v1::ListServiceBindingsRequest request);

  virtual google::cloud::Idempotency GetServiceBinding(
      google::cloud::networkservices::v1::GetServiceBindingRequest const&
          request);

  virtual google::cloud::Idempotency CreateServiceBinding(
      google::cloud::networkservices::v1::CreateServiceBindingRequest const&
          request);

  virtual google::cloud::Idempotency DeleteServiceBinding(
      google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
          request);

  virtual google::cloud::Idempotency ListMeshes(
      google::cloud::networkservices::v1::ListMeshesRequest request);

  virtual google::cloud::Idempotency GetMesh(
      google::cloud::networkservices::v1::GetMeshRequest const& request);

  virtual google::cloud::Idempotency CreateMesh(
      google::cloud::networkservices::v1::CreateMeshRequest const& request);

  virtual google::cloud::Idempotency UpdateMesh(
      google::cloud::networkservices::v1::UpdateMeshRequest const& request);

  virtual google::cloud::Idempotency DeleteMesh(
      google::cloud::networkservices::v1::DeleteMeshRequest const& request);
};

std::unique_ptr<NetworkServicesConnectionIdempotencyPolicy>
MakeDefaultNetworkServicesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_NETWORK_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
