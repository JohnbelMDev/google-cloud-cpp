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
// source: google/logging/v2/logging_metrics.proto

#include "google/cloud/logging/v2/internal/metrics_service_v2_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/logging/v2/logging_metrics.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricsServiceV2Metadata::MetricsServiceV2Metadata(
    std::shared_ptr<MetricsServiceV2Stub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::logging::v2::ListLogMetricsResponse>
MetricsServiceV2Metadata::ListLogMetrics(
    grpc::ClientContext& context,
    google::logging::v2::ListLogMetricsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListLogMetrics(context, request);
}

StatusOr<google::logging::v2::LogMetric> MetricsServiceV2Metadata::GetLogMetric(
    grpc::ClientContext& context,
    google::logging::v2::GetLogMetricRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("metric_name=", internal::UrlEncode(request.metric_name())));
  return child_->GetLogMetric(context, request);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2Metadata::CreateLogMetric(
    grpc::ClientContext& context,
    google::logging::v2::CreateLogMetricRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateLogMetric(context, request);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2Metadata::UpdateLogMetric(
    grpc::ClientContext& context,
    google::logging::v2::UpdateLogMetricRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("metric_name=", internal::UrlEncode(request.metric_name())));
  return child_->UpdateLogMetric(context, request);
}

Status MetricsServiceV2Metadata::DeleteLogMetric(
    grpc::ClientContext& context,
    google::logging::v2::DeleteLogMetricRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("metric_name=", internal::UrlEncode(request.metric_name())));
  return child_->DeleteLogMetric(context, request);
}

void MetricsServiceV2Metadata::SetMetadata(grpc::ClientContext& context,
                                           std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void MetricsServiceV2Metadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
