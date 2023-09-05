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
// source: google/cloud/pubsublite/v1/cursor.proto

#include "google/cloud/pubsublite/internal/cursor_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/cursor.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CursorServiceMetadata::CursorServiceMetadata(
    std::shared_ptr<CursorServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::StreamingCommitCursorRequest,
    google::cloud::pubsublite::v1::StreamingCommitCursorResponse>>
CursorServiceMetadata::AsyncStreamingCommitCursor(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->AsyncStreamingCommitCursor(cq, std::move(context));
}

StatusOr<google::cloud::pubsublite::v1::CommitCursorResponse>
CursorServiceMetadata::CommitCursor(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CommitCursorRequest const& request) {
  SetMetadata(context,
              absl::StrCat("subscription=",
                           internal::UrlEncode(request.subscription())));
  return child_->CommitCursor(context, request);
}

StatusOr<google::cloud::pubsublite::v1::ListPartitionCursorsResponse>
CursorServiceMetadata::ListPartitionCursors(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListPartitionCursorsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPartitionCursors(context, request);
}

void CursorServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CursorServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
