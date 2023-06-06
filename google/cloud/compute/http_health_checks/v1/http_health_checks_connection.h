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
// source: google/cloud/compute/http_health_checks/v1/http_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_CONNECTION_H

#include "google/cloud/compute/http_health_checks/v1/http_health_checks_connection_idempotency_policy.h"
#include "google/cloud/compute/http_health_checks/v1/internal/http_health_checks_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/http_health_checks/v1/http_health_checks.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_http_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using HttpHealthChecksRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_http_health_checks_v1_internal::HttpHealthChecksRetryTraits>;

using HttpHealthChecksLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_http_health_checks_v1_internal::HttpHealthChecksRetryTraits>;

using HttpHealthChecksLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_http_health_checks_v1_internal::HttpHealthChecksRetryTraits>;

/**
 * The `HttpHealthChecksConnection` object for `HttpHealthChecksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `HttpHealthChecksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `HttpHealthChecksClient`.
 *
 * To create a concrete instance, see `MakeHttpHealthChecksConnection()`.
 *
 * For mocking, see
 * `compute_http_health_checks_v1_mocks::MockHttpHealthChecksConnection`.
 */
class HttpHealthChecksConnection {
 public:
  virtual ~HttpHealthChecksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                             DeleteHttpHealthChecksRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::HttpHealthCheck>
  GetHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                          GetHttpHealthChecksRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                             InsertHttpHealthChecksRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::HttpHealthCheck>
  ListHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                           ListHttpHealthChecksRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                            PatchHttpHealthChecksRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateHttpHealthChecks(google::cloud::cpp::compute::http_health_checks::v1::
                             UpdateHttpHealthChecksRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_http_health_checks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_CONNECTION_H
