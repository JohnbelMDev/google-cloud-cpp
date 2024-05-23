// Copyright 2024 Google LLC
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
// google/cloud/securitycentermanagement/v1/security_center_management.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_SECURITY_CENTER_MANAGEMENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_SECURITY_CENTER_MANAGEMENT_CONNECTION_H

#include "google/cloud/securitycentermanagement/v1/internal/security_center_management_retry_traits.h"
#include "google/cloud/securitycentermanagement/v1/security_center_management_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/securitycentermanagement/v1/security_center_management.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycentermanagement_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SecurityCenterManagementConnection`.
class SecurityCenterManagementRetryPolicy
    : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SecurityCenterManagementRetryPolicy> clone()
      const = 0;
};

/**
 * A retry policy for `SecurityCenterManagementConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SecurityCenterManagementLimitedErrorCountRetryPolicy
    : public SecurityCenterManagementRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SecurityCenterManagementLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  SecurityCenterManagementLimitedErrorCountRetryPolicy(
      SecurityCenterManagementLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SecurityCenterManagementLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  SecurityCenterManagementLimitedErrorCountRetryPolicy(
      SecurityCenterManagementLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SecurityCenterManagementLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SecurityCenterManagementRetryPolicy> clone() const override {
    return std::make_unique<
        SecurityCenterManagementLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SecurityCenterManagementRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      securitycentermanagement_v1_internal::SecurityCenterManagementRetryTraits>
      impl_;
};

/**
 * A retry policy for `SecurityCenterManagementConnection` based on elapsed
 * time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SecurityCenterManagementLimitedTimeRetryPolicy
    : public SecurityCenterManagementRetryPolicy {
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
  explicit SecurityCenterManagementLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SecurityCenterManagementLimitedTimeRetryPolicy(
      SecurityCenterManagementLimitedTimeRetryPolicy&& rhs) noexcept
      : SecurityCenterManagementLimitedTimeRetryPolicy(rhs.maximum_duration()) {
  }
  SecurityCenterManagementLimitedTimeRetryPolicy(
      SecurityCenterManagementLimitedTimeRetryPolicy const& rhs) noexcept
      : SecurityCenterManagementLimitedTimeRetryPolicy(rhs.maximum_duration()) {
  }

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
  std::unique_ptr<SecurityCenterManagementRetryPolicy> clone() const override {
    return std::make_unique<SecurityCenterManagementLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SecurityCenterManagementRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      securitycentermanagement_v1_internal::SecurityCenterManagementRetryTraits>
      impl_;
};

/**
 * The `SecurityCenterManagementConnection` object for
 * `SecurityCenterManagementClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SecurityCenterManagementClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `SecurityCenterManagementClient`.
 *
 * To create a concrete instance, see
 * `MakeSecurityCenterManagementConnection()`.
 *
 * For mocking, see
 * `securitycentermanagement_v1_mocks::MockSecurityCenterManagementConnection`.
 */
class SecurityCenterManagementConnection {
 public:
  virtual ~SecurityCenterManagementConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::securitycentermanagement::v1::
                          EffectiveSecurityHealthAnalyticsCustomModule>
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EffectiveSecurityHealthAnalyticsCustomModule>
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
              request);

  virtual StreamRange<google::cloud::securitycentermanagement::v1::
                          SecurityHealthAnalyticsCustomModule>
  ListSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest request);

  virtual StreamRange<google::cloud::securitycentermanagement::v1::
                          SecurityHealthAnalyticsCustomModule>
  ListDescendantSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SecurityHealthAnalyticsCustomModule>
  GetSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SecurityHealthAnalyticsCustomModule>
  CreateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SecurityHealthAnalyticsCustomModule>
  UpdateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual Status DeleteSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       SimulateSecurityHealthAnalyticsCustomModuleResponse>
  SimulateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycentermanagement::v1::
          SimulateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual StreamRange<google::cloud::securitycentermanagement::v1::
                          EffectiveEventThreatDetectionCustomModule>
  ListEffectiveEventThreatDetectionCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListEffectiveEventThreatDetectionCustomModulesRequest request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EffectiveEventThreatDetectionCustomModule>
  GetEffectiveEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetEffectiveEventThreatDetectionCustomModuleRequest const& request);

  virtual StreamRange<google::cloud::securitycentermanagement::v1::
                          EventThreatDetectionCustomModule>
  ListEventThreatDetectionCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListEventThreatDetectionCustomModulesRequest request);

  virtual StreamRange<google::cloud::securitycentermanagement::v1::
                          EventThreatDetectionCustomModule>
  ListDescendantEventThreatDetectionCustomModules(
      google::cloud::securitycentermanagement::v1::
          ListDescendantEventThreatDetectionCustomModulesRequest request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EventThreatDetectionCustomModule>
  GetEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          GetEventThreatDetectionCustomModuleRequest const& request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EventThreatDetectionCustomModule>
  CreateEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          CreateEventThreatDetectionCustomModuleRequest const& request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       EventThreatDetectionCustomModule>
  UpdateEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          UpdateEventThreatDetectionCustomModuleRequest const& request);

  virtual Status DeleteEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          DeleteEventThreatDetectionCustomModuleRequest const& request);

  virtual StatusOr<google::cloud::securitycentermanagement::v1::
                       ValidateEventThreatDetectionCustomModuleResponse>
  ValidateEventThreatDetectionCustomModule(
      google::cloud::securitycentermanagement::v1::
          ValidateEventThreatDetectionCustomModuleRequest const& request);

  virtual StatusOr<
      google::cloud::securitycentermanagement::v1::SecurityCenterService>
  GetSecurityCenterService(google::cloud::securitycentermanagement::v1::
                               GetSecurityCenterServiceRequest const& request);

  virtual StreamRange<
      google::cloud::securitycentermanagement::v1::SecurityCenterService>
  ListSecurityCenterServices(google::cloud::securitycentermanagement::v1::
                                 ListSecurityCenterServicesRequest request);

  virtual StatusOr<
      google::cloud::securitycentermanagement::v1::SecurityCenterService>
  UpdateSecurityCenterService(
      google::cloud::securitycentermanagement::v1::
          UpdateSecurityCenterServiceRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `SecurityCenterManagementConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * SecurityCenterManagementClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SecurityCenterManagementConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::securitycentermanagement_v1::SecurityCenterManagementPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SecurityCenterManagementConnection`
 * created by this function.
 */
std::shared_ptr<SecurityCenterManagementConnection>
MakeSecurityCenterManagementConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycentermanagement_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTERMANAGEMENT_V1_SECURITY_CENTER_MANAGEMENT_CONNECTION_H
