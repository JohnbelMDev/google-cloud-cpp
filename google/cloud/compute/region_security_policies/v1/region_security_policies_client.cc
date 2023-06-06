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
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionSecurityPoliciesClient::RegionSecurityPoliciesClient(
    ExperimentalTag,
    std::shared_ptr<RegionSecurityPoliciesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionSecurityPoliciesClient::~RegionSecurityPoliciesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesClient::DeleteRegionSecurityPolicies(
    std::string const& project, std::string const& region,
    std::string const& security_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_security_policies::v1::
      DeleteRegionSecurityPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_security_policy(security_policy);
  return connection_->DeleteRegionSecurityPolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesClient::DeleteRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        DeleteRegionSecurityPoliciesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionSecurityPolicies(request);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesClient::GetRegionSecurityPolicies(
    std::string const& project, std::string const& region,
    std::string const& security_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_security_policies::v1::
      GetRegionSecurityPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_security_policy(security_policy);
  return connection_->GetRegionSecurityPolicies(request);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesClient::GetRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        GetRegionSecurityPoliciesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionSecurityPolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesClient::InsertRegionSecurityPolicies(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::SecurityPolicy const&
        security_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_security_policies::v1::
      InsertRegionSecurityPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_security_policy_resource() = security_policy_resource;
  return connection_->InsertRegionSecurityPolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesClient::InsertRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        InsertRegionSecurityPoliciesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionSecurityPolicies(request);
}

StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesClient::ListRegionSecurityPolicies(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_security_policies::v1::
      ListRegionSecurityPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionSecurityPolicies(request);
}

StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesClient::ListRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        ListRegionSecurityPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionSecurityPolicies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesClient::PatchRegionSecurityPolicies(
    std::string const& project, std::string const& region,
    std::string const& security_policy,
    google::cloud::cpp::compute::v1::SecurityPolicy const&
        security_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_security_policies::v1::
      PatchRegionSecurityPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_security_policy(security_policy);
  *request.mutable_security_policy_resource() = security_policy_resource;
  return connection_->PatchRegionSecurityPolicies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesClient::PatchRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchRegionSecurityPoliciesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRegionSecurityPolicies(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1
}  // namespace cloud
}  // namespace google
