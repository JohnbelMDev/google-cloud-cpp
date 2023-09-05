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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/baremetalsolution/v2/baremetalsolution.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BareMetalSolutionMetadata::BareMetalSolutionMetadata(
    std::shared_ptr<BareMetalSolutionStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
BareMetalSolutionMetadata::ListInstances(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListInstancesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInstances(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionMetadata::GetInstance(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("instance.name=",
                           internal::UrlEncode(request.instance().name())));
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionMetadata::RenameInstance(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RenameInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncResetInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStopInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncEnableInteractiveSerialConsole(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::
        EnableInteractiveSerialConsoleRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEnableInteractiveSerialConsole(cq, std::move(context),
                                                     request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncDisableInteractiveSerialConsole(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::
        DisableInteractiveSerialConsoleRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDisableInteractiveSerialConsole(cq, std::move(context),
                                                      request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncDetachLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  SetMetadata(*context, absl::StrCat("instance=",
                                     internal::UrlEncode(request.instance())));
  return child_->AsyncDetachLun(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListSSHKeysResponse>
BareMetalSolutionMetadata::ListSSHKeys(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListSSHKeysRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSSHKeys(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionMetadata::CreateSSHKey(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSSHKey(context, request);
}

Status BareMetalSolutionMetadata::DeleteSSHKey(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSSHKey(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
BareMetalSolutionMetadata::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListVolumesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListVolumes(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionMetadata::GetVolume(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetVolume(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("volume.name=",
                           internal::UrlEncode(request.volume().name())));
  return child_->AsyncUpdateVolume(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionMetadata::RenameVolume(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RenameVolume(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncEvictVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEvictVolume(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncResizeVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("volume=", internal::UrlEncode(request.volume())));
  return child_->AsyncResizeVolume(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
BareMetalSolutionMetadata::ListNetworks(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworksRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNetworks(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionMetadata::ListNetworkUsage(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request) {
  SetMetadata(context, absl::StrCat("location=",
                                    internal::UrlEncode(request.location())));
  return child_->ListNetworkUsage(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionMetadata::GetNetwork(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNetwork(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("network.name=",
                           internal::UrlEncode(request.network().name())));
  return child_->AsyncUpdateNetwork(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionMetadata::CreateVolumeSnapshot(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateVolumeSnapshot(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncRestoreVolumeSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("volume_snapshot=",
                           internal::UrlEncode(request.volume_snapshot())));
  return child_->AsyncRestoreVolumeSnapshot(cq, std::move(context), request);
}

Status BareMetalSolutionMetadata::DeleteVolumeSnapshot(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteVolumeSnapshot(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionMetadata::GetVolumeSnapshot(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetVolumeSnapshot(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumeSnapshotsResponse>
BareMetalSolutionMetadata::ListVolumeSnapshots(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListVolumeSnapshots(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionMetadata::GetLun(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLun(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse>
BareMetalSolutionMetadata::ListLuns(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListLunsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListLuns(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncEvictLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::EvictLunRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEvictLun(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionMetadata::GetNfsShare(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNfsShare(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
BareMetalSolutionMetadata::ListNfsShares(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNfsShares(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("nfs_share.name=",
                           internal::UrlEncode(request.nfs_share().name())));
  return child_->AsyncUpdateNfsShare(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncCreateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateNfsShare(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionMetadata::RenameNfsShare(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RenameNfsShare(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncDeleteNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteNfsShare(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListProvisioningQuotasResponse>
BareMetalSolutionMetadata::ListProvisioningQuotas(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProvisioningQuotas(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
BareMetalSolutionMetadata::SubmitProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::SubmitProvisioningConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SubmitProvisioningConfig(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionMetadata::GetProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProvisioningConfig(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionMetadata::CreateProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::CreateProvisioningConfigRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateProvisioningConfig(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionMetadata::UpdateProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::UpdateProvisioningConfigRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("provisioning_config.name=",
                   internal::UrlEncode(request.provisioning_config().name())));
  return child_->UpdateProvisioningConfig(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionMetadata::RenameNetwork(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameNetworkRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RenameNetwork(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListOSImagesResponse>
BareMetalSolutionMetadata::ListOSImages(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListOSImagesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOSImages(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> BareMetalSolutionMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void BareMetalSolutionMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BareMetalSolutionMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace baremetalsolution_v2_internal
}  // namespace cloud
}  // namespace google
