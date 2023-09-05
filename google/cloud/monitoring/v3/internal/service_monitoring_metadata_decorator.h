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
// source: google/monitoring/v3/service_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_SERVICE_MONITORING_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_SERVICE_MONITORING_METADATA_DECORATOR_H

#include "google/cloud/monitoring/v3/internal/service_monitoring_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceMonitoringServiceMetadata : public ServiceMonitoringServiceStub {
 public:
  ~ServiceMonitoringServiceMetadata() override = default;
  ServiceMonitoringServiceMetadata(
      std::shared_ptr<ServiceMonitoringServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  StatusOr<google::monitoring::v3::Service> CreateService(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateServiceRequest const& request) override;

  StatusOr<google::monitoring::v3::Service> GetService(
      grpc::ClientContext& context,
      google::monitoring::v3::GetServiceRequest const& request) override;

  StatusOr<google::monitoring::v3::ListServicesResponse> ListServices(
      grpc::ClientContext& context,
      google::monitoring::v3::ListServicesRequest const& request) override;

  StatusOr<google::monitoring::v3::Service> UpdateService(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateServiceRequest const& request) override;

  Status DeleteService(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteServiceRequest const& request) override;

  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  CreateServiceLevelObjective(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateServiceLevelObjectiveRequest const& request)
      override;

  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  GetServiceLevelObjective(
      grpc::ClientContext& context,
      google::monitoring::v3::GetServiceLevelObjectiveRequest const& request)
      override;

  StatusOr<google::monitoring::v3::ListServiceLevelObjectivesResponse>
  ListServiceLevelObjectives(
      grpc::ClientContext& context,
      google::monitoring::v3::ListServiceLevelObjectivesRequest const& request)
      override;

  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  UpdateServiceLevelObjective(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateServiceLevelObjectiveRequest const& request)
      override;

  Status DeleteServiceLevelObjective(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteServiceLevelObjectiveRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<ServiceMonitoringServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_SERVICE_MONITORING_METADATA_DECORATOR_H
