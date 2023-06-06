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
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy {
 public:
  virtual ~GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency DeleteGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          DeleteGlobalPublicDelegatedPrefixesRequest const& request);

  virtual google::cloud::Idempotency GetGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          GetGlobalPublicDelegatedPrefixesRequest const& request);

  virtual google::cloud::Idempotency InsertGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          InsertGlobalPublicDelegatedPrefixesRequest const& request);

  virtual google::cloud::Idempotency ListGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          ListGlobalPublicDelegatedPrefixesRequest request);

  virtual google::cloud::Idempotency PatchGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          PatchGlobalPublicDelegatedPrefixesRequest const& request);
};

std::unique_ptr<GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>
MakeDefaultGlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CONNECTION_IDEMPOTENCY_POLICY_H
