// Copyright 2022 Google LLC
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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_IMPL_H

#include "google/cloud/iap/identity_aware_proxy_admin_connection.h"
#include "google/cloud/iap/identity_aware_proxy_admin_connection_idempotency_policy.h"
#include "google/cloud/iap/identity_aware_proxy_admin_options.h"
#include "google/cloud/iap/internal/identity_aware_proxy_admin_retry_traits.h"
#include "google/cloud/iap/internal/identity_aware_proxy_admin_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IdentityAwareProxyAdminServiceConnectionImpl
    : public iap::IdentityAwareProxyAdminServiceConnection {
 public:
  ~IdentityAwareProxyAdminServiceConnectionImpl() override = default;

  IdentityAwareProxyAdminServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<iap_internal::IdentityAwareProxyAdminServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IapSettings> GetIapSettings(
      google::cloud::iap::v1::GetIapSettingsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IapSettings> UpdateIapSettings(
      google::cloud::iap::v1::UpdateIapSettingsRequest const& request) override;

  StreamRange<google::cloud::iap::v1::TunnelDestGroup> ListTunnelDestGroups(
      google::cloud::iap::v1::ListTunnelDestGroupsRequest request) override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> CreateTunnelDestGroup(
      google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> GetTunnelDestGroup(
      google::cloud::iap::v1::GetTunnelDestGroupRequest const& request)
      override;

  Status DeleteTunnelDestGroup(
      google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> UpdateTunnelDestGroup(
      google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request)
      override;

 private:
  std::unique_ptr<iap::IdentityAwareProxyAdminServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<iap::IdentityAwareProxyAdminServiceRetryPolicyOption>()) {
      return options
          .get<iap::IdentityAwareProxyAdminServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<iap::IdentityAwareProxyAdminServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<iap::IdentityAwareProxyAdminServiceBackoffPolicyOption>()) {
      return options
          .get<iap::IdentityAwareProxyAdminServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<iap::IdentityAwareProxyAdminServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      iap::IdentityAwareProxyAdminServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            iap::
                IdentityAwareProxyAdminServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<
              iap::
                  IdentityAwareProxyAdminServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<
            iap::
                IdentityAwareProxyAdminServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<iap_internal::IdentityAwareProxyAdminServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_IMPL_H
