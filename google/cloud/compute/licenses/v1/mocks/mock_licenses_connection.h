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
// source: google/cloud/compute/licenses/v1/licenses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_MOCKS_MOCK_LICENSES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_MOCKS_MOCK_LICENSES_CONNECTION_H

#include "google/cloud/compute/licenses/v1/licenses_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_licenses_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `LicensesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `LicensesClient`. To do so,
 * construct an object of type `LicensesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockLicensesConnection : public compute_licenses_v1::LicensesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      DeleteLicenses,
      (google::cloud::cpp::compute::licenses::v1::DeleteLicensesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::License>, GetLicenses,
      (google::cloud::cpp::compute::licenses::v1::GetLicensesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      InsertLicenses,
      (google::cloud::cpp::compute::licenses::v1::InsertLicensesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::License>, ListLicenses,
      (google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::licenses::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_MOCKS_MOCK_LICENSES_CONNECTION_H
