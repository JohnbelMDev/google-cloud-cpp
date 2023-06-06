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
// source: google/cloud/compute/networks/v1/networks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/networks/v1/networks.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_networks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworksConnectionIdempotencyPolicy {
 public:
  virtual ~NetworksConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetworksConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency AddPeering(
      google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
          request);

  virtual google::cloud::Idempotency DeleteNetworks(
      google::cloud::cpp::compute::networks::v1::DeleteNetworksRequest const&
          request);

  virtual google::cloud::Idempotency GetNetworks(
      google::cloud::cpp::compute::networks::v1::GetNetworksRequest const&
          request);

  virtual google::cloud::Idempotency GetEffectiveFirewalls(
      google::cloud::cpp::compute::networks::v1::
          GetEffectiveFirewallsRequest const& request);

  virtual google::cloud::Idempotency InsertNetworks(
      google::cloud::cpp::compute::networks::v1::InsertNetworksRequest const&
          request);

  virtual google::cloud::Idempotency ListNetworks(
      google::cloud::cpp::compute::networks::v1::ListNetworksRequest request);

  virtual google::cloud::Idempotency ListPeeringRoutes(
      google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest
          request);

  virtual google::cloud::Idempotency PatchNetworks(
      google::cloud::cpp::compute::networks::v1::PatchNetworksRequest const&
          request);

  virtual google::cloud::Idempotency RemovePeering(
      google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
          request);

  virtual google::cloud::Idempotency SwitchToCustomMode(
      google::cloud::cpp::compute::networks::v1::
          SwitchToCustomModeRequest const& request);

  virtual google::cloud::Idempotency UpdatePeering(
      google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
          request);
};

std::unique_ptr<NetworksConnectionIdempotencyPolicy>
MakeDefaultNetworksConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_IDEMPOTENCY_POLICY_H
