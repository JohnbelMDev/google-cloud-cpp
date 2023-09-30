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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_ROUTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_ROUTERS_CONNECTION_H

#include "google/cloud/compute/routers/v1/internal/routers_retry_traits.h"
#include "google/cloud/compute/routers/v1/routers_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/routers/v1/routers.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_routers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RoutersConnection`.
class RoutersRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RoutersRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `RoutersConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RoutersLimitedErrorCountRetryPolicy : public RoutersRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RoutersLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  RoutersLimitedErrorCountRetryPolicy(
      RoutersLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RoutersLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  RoutersLimitedErrorCountRetryPolicy(
      RoutersLimitedErrorCountRetryPolicy const& rhs) noexcept
      : RoutersLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RoutersRetryPolicy> clone() const override {
    return std::make_unique<RoutersLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RoutersRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_routers_v1_internal::RoutersRetryTraits>
      impl_;
};

/**
 * A retry policy for `RoutersConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RoutersLimitedTimeRetryPolicy : public RoutersRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit RoutersLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RoutersLimitedTimeRetryPolicy(RoutersLimitedTimeRetryPolicy&& rhs) noexcept
      : RoutersLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  RoutersLimitedTimeRetryPolicy(
      RoutersLimitedTimeRetryPolicy const& rhs) noexcept
      : RoutersLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RoutersRetryPolicy> clone() const override {
    return std::make_unique<RoutersLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RoutersRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_routers_v1_internal::RoutersRetryTraits>
      impl_;
};

/**
 * The `RoutersConnection` object for `RoutersClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RoutersClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RoutersClient`.
 *
 * To create a concrete instance, see `MakeRoutersConnection()`.
 *
 * For mocking, see `compute_routers_v1_mocks::MockRoutersConnection`.
 */
class RoutersConnection {
 public:
  virtual ~RoutersConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::RoutersScopedList>>
  AggregatedListRouters(
      google::cloud::cpp::compute::routers::v1::AggregatedListRoutersRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRouter(
      google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Router> GetRouter(
      google::cloud::cpp::compute::routers::v1::GetRouterRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NatIpInfoResponse>
  GetNatIpInfo(
      google::cloud::cpp::compute::routers::v1::GetNatIpInfoRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::VmEndpointNatMappingsList>
  GetNatMappingInfo(
      google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::RouterStatusResponse>
  GetRouterStatus(
      google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRouter(
      google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Router> ListRouters(
      google::cloud::cpp::compute::routers::v1::ListRoutersRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRouter(
      google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::RoutersPreviewResponse>
  Preview(
      google::cloud::cpp::compute::routers::v1::PreviewRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateRouter(
      google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_ROUTERS_CONNECTION_H
