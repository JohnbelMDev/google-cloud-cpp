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
// source: google/cloud/compute/url_maps/v1/url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_URL_MAPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_URL_MAPS_CONNECTION_H

#include "google/cloud/compute/url_maps/v1/internal/url_maps_retry_traits.h"
#include "google/cloud/compute/url_maps/v1/url_maps_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/url_maps/v1/url_maps.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_url_maps_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using UrlMapsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_url_maps_v1_internal::UrlMapsRetryTraits>;

using UrlMapsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_url_maps_v1_internal::UrlMapsRetryTraits>;

using UrlMapsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_url_maps_v1_internal::UrlMapsRetryTraits>;

/**
 * The `UrlMapsConnection` object for `UrlMapsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `UrlMapsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `UrlMapsClient`.
 *
 * To create a concrete instance, see `MakeUrlMapsConnection()`.
 *
 * For mocking, see `compute_url_maps_v1_mocks::MockUrlMapsConnection`.
 */
class UrlMapsConnection {
 public:
  virtual ~UrlMapsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMapsAggregatedList>
  AggregatedListUrlMaps(google::cloud::cpp::compute::url_maps::v1::
                            AggregatedListUrlMapsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapsRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::GetUrlMapsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::InsertUrlMapsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InvalidateCache(
      google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest const&
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::UrlMap> ListUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::ListUrlMapsRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::PatchUrlMapsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateUrlMaps(
      google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapsRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
  Validate(google::cloud::cpp::compute::url_maps::v1::ValidateRequest const&
               request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_url_maps_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_URL_MAPS_CONNECTION_H
