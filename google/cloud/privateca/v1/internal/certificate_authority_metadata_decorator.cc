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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/v1/internal/certificate_authority_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/security/privateca/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace privateca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateAuthorityServiceMetadata::CertificateAuthorityServiceMetadata(
    std::shared_ptr<CertificateAuthorityServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceMetadata::CreateCertificate(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::CreateCertificateRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCertificate(context, request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceMetadata::GetCertificate(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::GetCertificateRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCertificate(context, request);
}

StatusOr<google::cloud::security::privateca::v1::ListCertificatesResponse>
CertificateAuthorityServiceMetadata::ListCertificates(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::ListCertificatesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCertificates(context, request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceMetadata::RevokeCertificate(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RevokeCertificate(context, request);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceMetadata::UpdateCertificate(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("certificate.name=",
                           internal::UrlEncode(request.certificate().name())));
  return child_->UpdateCertificate(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncActivateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncActivateCertificateAuthority(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncCreateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCertificateAuthority(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncDisableCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDisableCertificateAuthority(cq, std::move(context),
                                                  request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncEnableCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEnableCertificateAuthority(cq, std::move(context),
                                                 request);
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceMetadata::FetchCertificateAuthorityCsr(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->FetchCertificateAuthorityCsr(context, request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceMetadata::GetCertificateAuthority(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCertificateAuthority(context, request);
}

StatusOr<
    google::cloud::security::privateca::v1::ListCertificateAuthoritiesResponse>
CertificateAuthorityServiceMetadata::ListCertificateAuthorities(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::
        ListCertificateAuthoritiesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCertificateAuthorities(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncUndeleteCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeleteCertificateAuthority(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncDeleteCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCertificateAuthority(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncUpdateCertificateAuthority(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request) {
  SetMetadata(*context,
              absl::StrCat(
                  "certificate_authority.name=",
                  internal::UrlEncode(request.certificate_authority().name())));
  return child_->AsyncUpdateCertificateAuthority(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncCreateCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCaPool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncUpdateCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("ca_pool.name=",
                           internal::UrlEncode(request.ca_pool().name())));
  return child_->AsyncUpdateCaPool(cq, std::move(context), request);
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceMetadata::GetCaPool(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::GetCaPoolRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCaPool(context, request);
}

StatusOr<google::cloud::security::privateca::v1::ListCaPoolsResponse>
CertificateAuthorityServiceMetadata::ListCaPools(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::ListCaPoolsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCaPools(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncDeleteCaPool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCaPool(cq, std::move(context), request);
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceMetadata::FetchCaCerts(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::FetchCaCertsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("ca_pool=", internal::UrlEncode(request.ca_pool())));
  return child_->FetchCaCerts(context, request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceMetadata::GetCertificateRevocationList(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCertificateRevocationList(context, request);
}

StatusOr<google::cloud::security::privateca::v1::
             ListCertificateRevocationListsResponse>
CertificateAuthorityServiceMetadata::ListCertificateRevocationLists(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCertificateRevocationLists(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncUpdateCertificateRevocationList(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("certificate_revocation_list.name=",
                           internal::UrlEncode(
                               request.certificate_revocation_list().name())));
  return child_->AsyncUpdateCertificateRevocationList(cq, std::move(context),
                                                      request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncCreateCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCertificateTemplate(cq, std::move(context),
                                                request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncDeleteCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCertificateTemplate(cq, std::move(context),
                                                request);
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceMetadata::GetCertificateTemplate(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::GetCertificateTemplateRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCertificateTemplate(context, request);
}

StatusOr<
    google::cloud::security::privateca::v1::ListCertificateTemplatesResponse>
CertificateAuthorityServiceMetadata::ListCertificateTemplates(
    grpc::ClientContext& context,
    google::cloud::security::privateca::v1::
        ListCertificateTemplatesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCertificateTemplates(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncUpdateCertificateTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("certificate_template.name=",
                   internal::UrlEncode(request.certificate_template().name())));
  return child_->AsyncUpdateCertificateTemplate(cq, std::move(context),
                                                request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateAuthorityServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CertificateAuthorityServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CertificateAuthorityServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CertificateAuthorityServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_v1_internal
}  // namespace cloud
}  // namespace google
