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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_INSTANCES_V1_TARGET_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_INSTANCES_V1_TARGET_INSTANCES_CONNECTION_H

#include "google/cloud/compute/target_instances/v1/internal/target_instances_retry_traits.h"
#include "google/cloud/compute/target_instances/v1/target_instances_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_instances/v1/target_instances.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `TargetInstancesConnection`.
class TargetInstancesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<TargetInstancesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `TargetInstancesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TargetInstancesLimitedErrorCountRetryPolicy
    : public TargetInstancesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit TargetInstancesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  TargetInstancesLimitedErrorCountRetryPolicy(
      TargetInstancesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : TargetInstancesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  TargetInstancesLimitedErrorCountRetryPolicy(
      TargetInstancesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : TargetInstancesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<TargetInstancesRetryPolicy> clone() const override {
    return std::make_unique<TargetInstancesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TargetInstancesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_target_instances_v1_internal::TargetInstancesRetryTraits>
      impl_;
};

/**
 * A retry policy for `TargetInstancesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class TargetInstancesLimitedTimeRetryPolicy
    : public TargetInstancesRetryPolicy {
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
  explicit TargetInstancesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  TargetInstancesLimitedTimeRetryPolicy(
      TargetInstancesLimitedTimeRetryPolicy&& rhs) noexcept
      : TargetInstancesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  TargetInstancesLimitedTimeRetryPolicy(
      TargetInstancesLimitedTimeRetryPolicy const& rhs) noexcept
      : TargetInstancesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<TargetInstancesRetryPolicy> clone() const override {
    return std::make_unique<TargetInstancesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = TargetInstancesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_target_instances_v1_internal::TargetInstancesRetryTraits>
      impl_;
};

/**
 * The `TargetInstancesConnection` object for `TargetInstancesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TargetInstancesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TargetInstancesClient`.
 *
 * To create a concrete instance, see `MakeTargetInstancesConnection()`.
 *
 * For mocking, see
 * `compute_target_instances_v1_mocks::MockTargetInstancesConnection`.
 */
class TargetInstancesConnection {
 public:
  virtual ~TargetInstancesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::TargetInstancesScopedList>>
  AggregatedListTargetInstances(
      google::cloud::cpp::compute::target_instances::v1::
          AggregatedListTargetInstancesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetInstance(google::cloud::cpp::compute::target_instances::v1::
                           DeleteTargetInstanceRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
  GetTargetInstance(google::cloud::cpp::compute::target_instances::v1::
                        GetTargetInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetInstance(google::cloud::cpp::compute::target_instances::v1::
                           InsertTargetInstanceRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
  ListTargetInstances(google::cloud::cpp::compute::target_instances::v1::
                          ListTargetInstancesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(google::cloud::cpp::compute::target_instances::v1::
                        SetSecurityPolicyRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_INSTANCES_V1_TARGET_INSTANCES_CONNECTION_H
