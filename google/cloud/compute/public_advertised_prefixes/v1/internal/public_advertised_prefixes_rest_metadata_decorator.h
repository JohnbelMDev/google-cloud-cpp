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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_INTERNAL_PUBLIC_ADVERTISED_PREFIXES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_INTERNAL_PUBLIC_ADVERTISED_PREFIXES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicAdvertisedPrefixesRestMetadata
    : public PublicAdvertisedPrefixesRestStub {
 public:
  ~PublicAdvertisedPrefixesRestMetadata() override = default;
  explicit PublicAdvertisedPrefixesRestMetadata(
      std::shared_ptr<PublicAdvertisedPrefixesRestStub> child);

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeletePublicAdvertisedPrefixes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  GetPublicAdvertisedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          GetPublicAdvertisedPrefixesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertPublicAdvertisedPrefixes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefixList>
  ListPublicAdvertisedPrefixes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          ListPublicAdvertisedPrefixesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchPublicAdvertisedPrefixes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<PublicAdvertisedPrefixesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_INTERNAL_PUBLIC_ADVERTISED_PREFIXES_REST_METADATA_DECORATOR_H
