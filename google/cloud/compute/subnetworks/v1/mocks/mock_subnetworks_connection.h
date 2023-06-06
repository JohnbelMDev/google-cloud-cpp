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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_MOCKS_MOCK_SUBNETWORKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_MOCKS_MOCK_SUBNETWORKS_CONNECTION_H

#include "google/cloud/compute/subnetworks/v1/subnetworks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_subnetworks_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SubnetworksConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SubnetworksClient`. To do so,
 * construct an object of type `SubnetworksClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockSubnetworksConnection
    : public compute_subnetworks_v1::SubnetworksConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>,
      AggregatedListSubnetworks,
      (google::cloud::cpp::compute::subnetworks::v1::
           AggregatedListSubnetworksRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSubnetworks,
              (google::cloud::cpp::compute::subnetworks::v1::
                   DeleteSubnetworksRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              ExpandIpCidrRange,
              (google::cloud::cpp::compute::subnetworks::v1::
                   ExpandIpCidrRangeRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Subnetwork>,
              GetSubnetworks,
              (google::cloud::cpp::compute::subnetworks::v1::
                   GetSubnetworksRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSubnetworks,
              (google::cloud::cpp::compute::subnetworks::v1::
                   InsertSubnetworksRequest const& request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::Subnetwork>, ListSubnetworks,
      (google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>,
      ListUsable,
      (google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchSubnetworks,
              (google::cloud::cpp::compute::subnetworks::v1::
                   PatchSubnetworksRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetPrivateIpGoogleAccess,
              (google::cloud::cpp::compute::subnetworks::v1::
                   SetPrivateIpGoogleAccessRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::subnetworks::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_MOCKS_MOCK_SUBNETWORKS_CONNECTION_H
