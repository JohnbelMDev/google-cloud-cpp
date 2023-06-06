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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_INSTANCES_V1_TARGET_INSTANCES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_INSTANCES_V1_TARGET_INSTANCES_CLIENT_H

#include "google/cloud/compute/target_instances/v1/target_instances_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the targetInstances resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/targetInstances
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class TargetInstancesClient {
 public:
  explicit TargetInstancesClient(
      ExperimentalTag, std::shared_ptr<TargetInstancesConnection> connection,
      Options opts = {});
  ~TargetInstancesClient();

  ///@{
  /// @name Copy and move support
  TargetInstancesClient(TargetInstancesClient const&) = default;
  TargetInstancesClient& operator=(TargetInstancesClient const&) = default;
  TargetInstancesClient(TargetInstancesClient&&) = default;
  TargetInstancesClient& operator=(TargetInstancesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TargetInstancesClient const& a,
                         TargetInstancesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TargetInstancesClient const& a,
                         TargetInstancesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of target instances.
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetInstanceAggregatedList])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.AggregatedListTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L87}
  /// [google.cloud.cpp.compute.v1.TargetInstanceAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L27253}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
  AggregatedListTargetInstances(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of target instances.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_instances.v1.AggregatedListTargetInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetInstanceAggregatedList])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.AggregatedListTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L87}
  /// [google.cloud.cpp.compute.v1.TargetInstanceAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L27253}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
  AggregatedListTargetInstances(
      google::cloud::cpp::compute::target_instances::v1::
          AggregatedListTargetInstancesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetInstance resource.
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone scoping this request.
  /// @param target_instance  Name of the TargetInstance resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.DeleteTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L161}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetInstances(std::string const& project, std::string const& zone,
                        std::string const& target_instance, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetInstance resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_instances.v1.DeleteTargetInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.DeleteTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L161}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetInstances(google::cloud::cpp::compute::target_instances::v1::
                            DeleteTargetInstancesRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetInstance resource.
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone scoping this request.
  /// @param target_instance  Name of the TargetInstance resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetInstance])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.GetTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L191}
  /// [google.cloud.cpp.compute.v1.TargetInstance]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L27199}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetInstance> GetTargetInstances(
      std::string const& project, std::string const& zone,
      std::string const& target_instance, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetInstance resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_instances.v1.GetTargetInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetInstance])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.GetTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L191}
  /// [google.cloud.cpp.compute.v1.TargetInstance]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L27199}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetInstance> GetTargetInstances(
      google::cloud::cpp::compute::target_instances::v1::
          GetTargetInstancesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetInstance resource in the specified project and zone using
  /// the data included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone scoping this request.
  /// @param target_instance_resource  The TargetInstance for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.InsertTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L203}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetInstances(std::string const& project, std::string const& zone,
                        google::cloud::cpp::compute::v1::TargetInstance const&
                            target_instance_resource,
                        Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetInstance resource in the specified project and zone using
  /// the data included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_instances.v1.InsertTargetInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.InsertTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L203}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetInstances(google::cloud::cpp::compute::target_instances::v1::
                            InsertTargetInstancesRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of TargetInstance resources available to the specified
  /// project and zone.
  ///
  /// @param project  Project ID for this request.
  /// @param zone  Name of the zone scoping this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.TargetInstance], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.ListTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L234}
  /// [google.cloud.cpp.compute.v1.TargetInstance]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L27199}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
  ListTargetInstances(std::string const& project, std::string const& zone,
                      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of TargetInstance resources available to the specified
  /// project and zone.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_instances.v1.ListTargetInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.TargetInstance], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_instances.v1.ListTargetInstancesRequest]: @googleapis_reference_link{google/cloud/compute/target_instances/v1/target_instances.proto#L234}
  /// [google.cloud.cpp.compute.v1.TargetInstance]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L27199}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
  ListTargetInstances(google::cloud::cpp::compute::target_instances::v1::
                          ListTargetInstancesRequest request,
                      Options opts = {});

 private:
  std::shared_ptr<TargetInstancesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_INSTANCES_V1_TARGET_INSTANCES_CLIENT_H
