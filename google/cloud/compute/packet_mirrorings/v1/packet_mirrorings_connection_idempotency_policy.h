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
// source: google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_PACKET_MIRRORINGS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_PACKET_MIRRORINGS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PacketMirroringsConnectionIdempotencyPolicy {
 public:
  virtual ~PacketMirroringsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<PacketMirroringsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          AggregatedListPacketMirroringsRequest const& request);

  virtual google::cloud::Idempotency DeletePacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          DeletePacketMirroringsRequest const& request);

  virtual google::cloud::Idempotency GetPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          GetPacketMirroringsRequest const& request);

  virtual google::cloud::Idempotency InsertPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          InsertPacketMirroringsRequest const& request);

  virtual google::cloud::Idempotency ListPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          ListPacketMirroringsRequest request);

  virtual google::cloud::Idempotency PatchPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          PatchPacketMirroringsRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<PacketMirroringsConnectionIdempotencyPolicy>
MakeDefaultPacketMirroringsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_PACKET_MIRRORINGS_CONNECTION_IDEMPOTENCY_POLICY_H
