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
// google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates.proto

#include "google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_certificates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionSslCertificatesConnectionIdempotencyPolicy::
    ~RegionSslCertificatesConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionSslCertificatesConnectionIdempotencyPolicy>
RegionSslCertificatesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionSslCertificatesConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
RegionSslCertificatesConnectionIdempotencyPolicy::DeleteRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::
        DeleteRegionSslCertificatesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RegionSslCertificatesConnectionIdempotencyPolicy::GetRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::
        GetRegionSslCertificatesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
RegionSslCertificatesConnectionIdempotencyPolicy::InsertRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::
        InsertRegionSslCertificatesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RegionSslCertificatesConnectionIdempotencyPolicy::ListRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::
        ListRegionSslCertificatesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<RegionSslCertificatesConnectionIdempotencyPolicy>
MakeDefaultRegionSslCertificatesConnectionIdempotencyPolicy() {
  return std::make_unique<RegionSslCertificatesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_certificates_v1
}  // namespace cloud
}  // namespace google
