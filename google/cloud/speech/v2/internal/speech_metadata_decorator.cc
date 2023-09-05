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
// source: google/cloud/speech/v2/cloud_speech.proto

#include "google/cloud/speech/v2/internal/speech_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/speech/v2/cloud_speech.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechMetadata::SpeechMetadata(
    std::shared_ptr<SpeechStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncCreateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateRecognizer(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::ListRecognizersResponse>
SpeechMetadata::ListRecognizers(
    grpc::ClientContext& context,
    google::cloud::speech::v2::ListRecognizersRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRecognizers(context, request);
}

StatusOr<google::cloud::speech::v2::Recognizer> SpeechMetadata::GetRecognizer(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetRecognizerRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRecognizer(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncUpdateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("recognizer.name=",
                           internal::UrlEncode(request.recognizer().name())));
  return child_->AsyncUpdateRecognizer(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncDeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteRecognizer(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncUndeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeleteRecognizer(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::RecognizeResponse>
SpeechMetadata::Recognize(
    grpc::ClientContext& context,
    google::cloud::speech::v2::RecognizeRequest const& request) {
  SetMetadata(context, absl::StrCat("recognizer=",
                                    internal::UrlEncode(request.recognizer())));
  return child_->Recognize(context, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
SpeechMetadata::AsyncStreamingRecognize(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->AsyncStreamingRecognize(cq, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncBatchRecognize(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("recognizer=", internal::UrlEncode(request.recognizer())));
  return child_->AsyncBatchRecognize(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechMetadata::GetConfig(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConfig(context, request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechMetadata::UpdateConfig(
    grpc::ClientContext& context,
    google::cloud::speech::v2::UpdateConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("config.name=",
                           internal::UrlEncode(request.config().name())));
  return child_->UpdateConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncCreateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCustomClass(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
SpeechMetadata::ListCustomClasses(
    grpc::ClientContext& context,
    google::cloud::speech::v2::ListCustomClassesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomClasses(context, request);
}

StatusOr<google::cloud::speech::v2::CustomClass> SpeechMetadata::GetCustomClass(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetCustomClassRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomClass(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncUpdateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("custom_class.name=",
                           internal::UrlEncode(request.custom_class().name())));
  return child_->AsyncUpdateCustomClass(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncDeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCustomClass(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncUndeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeleteCustomClass(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncCreatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreatePhraseSet(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse>
SpeechMetadata::ListPhraseSets(
    grpc::ClientContext& context,
    google::cloud::speech::v2::ListPhraseSetsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPhraseSets(context, request);
}

StatusOr<google::cloud::speech::v2::PhraseSet> SpeechMetadata::GetPhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetPhraseSetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPhraseSet(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncUpdatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("phrase_set.name=",
                           internal::UrlEncode(request.phrase_set().name())));
  return child_->AsyncUpdatePhraseSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncDeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePhraseSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncUndeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeletePhraseSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> SpeechMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void SpeechMetadata::SetMetadata(grpc::ClientContext& context,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void SpeechMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google
