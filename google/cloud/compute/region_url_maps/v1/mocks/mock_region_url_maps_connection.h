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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_MOCKS_MOCK_REGION_URL_MAPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_MOCKS_MOCK_REGION_URL_MAPS_CONNECTION_H

#include "google/cloud/compute/region_url_maps/v1/region_url_maps_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionUrlMapsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionUrlMapsClient`. To do so,
 * construct an object of type `RegionUrlMapsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockRegionUrlMapsConnection
    : public compute_region_url_maps_v1::RegionUrlMapsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteRegionUrlMaps,
              (google::cloud::cpp::compute::region_url_maps::v1::
                   DeleteRegionUrlMapsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::UrlMap>,
              GetRegionUrlMaps,
              (google::cloud::cpp::compute::region_url_maps::v1::
                   GetRegionUrlMapsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertRegionUrlMaps,
              (google::cloud::cpp::compute::region_url_maps::v1::
                   InsertRegionUrlMapsRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::UrlMap>,
              ListRegionUrlMaps,
              (google::cloud::cpp::compute::region_url_maps::v1::
                   ListRegionUrlMapsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchRegionUrlMaps,
              (google::cloud::cpp::compute::region_url_maps::v1::
                   PatchRegionUrlMapsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateRegionUrlMaps,
              (google::cloud::cpp::compute::region_url_maps::v1::
                   UpdateRegionUrlMapsRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>,
      Validate,
      (google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_URL_MAPS_V1_MOCKS_MOCK_REGION_URL_MAPS_CONNECTION_H
