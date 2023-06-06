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
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#include "google/cloud/compute/target_https_proxies/v1/target_https_proxies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpsProxiesClient::TargetHttpsProxiesClient(
    ExperimentalTag, std::shared_ptr<TargetHttpsProxiesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TargetHttpsProxiesClient::~TargetHttpsProxiesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
TargetHttpsProxiesClient::AggregatedListTargetHttpsProxies(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      AggregatedListTargetHttpsProxiesRequest request;
  request.set_project(project);
  return connection_->AggregatedListTargetHttpsProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
TargetHttpsProxiesClient::AggregatedListTargetHttpsProxies(
    google::cloud::cpp::compute::target_https_proxies::v1::
        AggregatedListTargetHttpsProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListTargetHttpsProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::DeleteTargetHttpsProxies(
    std::string const& project, std::string const& target_https_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      DeleteTargetHttpsProxiesRequest request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  return connection_->DeleteTargetHttpsProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::DeleteTargetHttpsProxies(
    google::cloud::cpp::compute::target_https_proxies::v1::
        DeleteTargetHttpsProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetHttpsProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
TargetHttpsProxiesClient::GetTargetHttpsProxies(
    std::string const& project, std::string const& target_https_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      GetTargetHttpsProxiesRequest request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  return connection_->GetTargetHttpsProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
TargetHttpsProxiesClient::GetTargetHttpsProxies(
    google::cloud::cpp::compute::target_https_proxies::v1::
        GetTargetHttpsProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetHttpsProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::InsertTargetHttpsProxies(
    std::string const& project,
    google::cloud::cpp::compute::v1::TargetHttpsProxy const&
        target_https_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      InsertTargetHttpsProxiesRequest request;
  request.set_project(project);
  *request.mutable_target_https_proxy_resource() = target_https_proxy_resource;
  return connection_->InsertTargetHttpsProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::InsertTargetHttpsProxies(
    google::cloud::cpp::compute::target_https_proxies::v1::
        InsertTargetHttpsProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetHttpsProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
TargetHttpsProxiesClient::ListTargetHttpsProxies(std::string const& project,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      ListTargetHttpsProxiesRequest request;
  request.set_project(project);
  return connection_->ListTargetHttpsProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
TargetHttpsProxiesClient::ListTargetHttpsProxies(
    google::cloud::cpp::compute::target_https_proxies::v1::
        ListTargetHttpsProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTargetHttpsProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::PatchTargetHttpsProxies(
    std::string const& project, std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::TargetHttpsProxy const&
        target_https_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      PatchTargetHttpsProxiesRequest request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_target_https_proxy_resource() = target_https_proxy_resource;
  return connection_->PatchTargetHttpsProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::PatchTargetHttpsProxies(
    google::cloud::cpp::compute::target_https_proxies::v1::
        PatchTargetHttpsProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchTargetHttpsProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetCertificateMap(
    std::string const& project, std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::
        TargetHttpsProxiesSetCertificateMapRequest const&
            target_https_proxies_set_certificate_map_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      SetCertificateMapRequest request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_target_https_proxies_set_certificate_map_request_resource() =
      target_https_proxies_set_certificate_map_request_resource;
  return connection_->SetCertificateMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetCertificateMap(
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetCertificateMapRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetCertificateMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetQuicOverride(
    std::string const& project, std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::
        TargetHttpsProxiesSetQuicOverrideRequest const&
            target_https_proxies_set_quic_override_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::SetQuicOverrideRequest
      request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_target_https_proxies_set_quic_override_request_resource() =
      target_https_proxies_set_quic_override_request_resource;
  return connection_->SetQuicOverride(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetQuicOverride(
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetQuicOverrideRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetQuicOverride(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetSslCertificates(
    std::string const& project, std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::
        TargetHttpsProxiesSetSslCertificatesRequest const&
            target_https_proxies_set_ssl_certificates_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::
      SetSslCertificatesRequest request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  *request
       .mutable_target_https_proxies_set_ssl_certificates_request_resource() =
      target_https_proxies_set_ssl_certificates_request_resource;
  return connection_->SetSslCertificates(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetSslCertificates(
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetSslCertificatesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetSslCertificates(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetSslPolicy(
    std::string const& project, std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::SslPolicyReference const&
        ssl_policy_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::SetSslPolicyRequest
      request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_ssl_policy_reference_resource() =
      ssl_policy_reference_resource;
  return connection_->SetSslPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetSslPolicy(
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetSslPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetSslPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetUrlMap(
    std::string const& project, std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::UrlMapReference const&
        url_map_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_https_proxies::v1::SetUrlMapRequest
      request;
  request.set_project(project);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_url_map_reference_resource() = url_map_reference_resource;
  return connection_->SetUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesClient::SetUrlMap(
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetUrlMapRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetUrlMap(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1
}  // namespace cloud
}  // namespace google
