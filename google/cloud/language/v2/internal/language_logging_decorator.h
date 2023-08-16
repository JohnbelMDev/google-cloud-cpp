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
// source: google/cloud/language/v2/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V2_INTERNAL_LANGUAGE_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V2_INTERNAL_LANGUAGE_LOGGING_DECORATOR_H

#include "google/cloud/language/v2/internal/language_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace language_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LanguageServiceLogging : public LanguageServiceStub {
 public:
  ~LanguageServiceLogging() override = default;
  LanguageServiceLogging(std::shared_ptr<LanguageServiceStub> child,
                         TracingOptions tracing_options,
                         std::set<std::string> const& components);

  StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
  AnalyzeSentiment(grpc::ClientContext& context,
                   google::cloud::language::v2::AnalyzeSentimentRequest const&
                       request) override;

  StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
  AnalyzeEntities(grpc::ClientContext& context,
                  google::cloud::language::v2::AnalyzeEntitiesRequest const&
                      request) override;

  StatusOr<google::cloud::language::v2::ClassifyTextResponse> ClassifyText(
      grpc::ClientContext& context,
      google::cloud::language::v2::ClassifyTextRequest const& request) override;

  StatusOr<google::cloud::language::v2::ModerateTextResponse> ModerateText(
      grpc::ClientContext& context,
      google::cloud::language::v2::ModerateTextRequest const& request) override;

  StatusOr<google::cloud::language::v2::AnnotateTextResponse> AnnotateText(
      grpc::ClientContext& context,
      google::cloud::language::v2::AnnotateTextRequest const& request) override;

 private:
  std::shared_ptr<LanguageServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // LanguageServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V2_INTERNAL_LANGUAGE_LOGGING_DECORATOR_H
