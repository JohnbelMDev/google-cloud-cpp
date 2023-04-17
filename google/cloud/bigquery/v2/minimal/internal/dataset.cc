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

#include "google/cloud/bigquery/v2/minimal/internal/dataset.h"
#include "google/cloud/internal/format_time_point.h"

namespace google {
namespace cloud {
namespace bigquery_v2_minimal_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageBillingModel StorageBillingModel::UnSpecified() {
  StorageBillingModel model;
  model.value = "STORAGE_BILLING_MODEL_UNSPECIFIED";
  return model;
}

StorageBillingModel StorageBillingModel::Logical() {
  StorageBillingModel model;
  model.value = "LOGICAL";
  return model;
}

StorageBillingModel StorageBillingModel::Physical() {
  StorageBillingModel model;
  model.value = "PHYSICAL";
  return model;
}

TargetType TargetType::UnSpecified() {
  TargetType type;
  type.value = "TARGET_TYPE_UNSPECIFIED";
  return type;
}

TargetType TargetType::Views() {
  TargetType type;
  type.value = "VIEWS";
  return type;
}

TargetType TargetType::Routines() {
  TargetType type;
  type.value = "ROUTINES";
  return type;
}

TableFieldSchemaRoundingMode TableFieldSchemaRoundingMode::UnSpecified() {
  TableFieldSchemaRoundingMode mode;
  mode.value = "ROUNDING_MODE_UNSPECIFIED";
  return mode;
}

TableFieldSchemaRoundingMode
TableFieldSchemaRoundingMode::RoundHalfAwayFromZero() {
  TableFieldSchemaRoundingMode mode;
  mode.value = "ROUND_HALF_AWAY_FROM_ZERO";
  return mode;
}

TableFieldSchemaRoundingMode TableFieldSchemaRoundingMode::RoundHalfEven() {
  TableFieldSchemaRoundingMode mode;
  mode.value = "ROUND_HALF_EVEN";
  return mode;
}

void to_json(nlohmann::json& j, Dataset const& d) {
  j = nlohmann::json{
      {"kind", d.kind},
      {"etag", d.etag},
      {"id", d.id},
      {"self_link", d.self_link},
      {"friendly_name", d.friendly_name},
      {"description", d.description},
      {"type", d.type},
      {"location", d.location},
      {"default_collation", d.default_collation},
      {"published", d.published},
      {"is_case_insensitive", d.is_case_insensitive},
      {"default_table_expiration",
       std::chrono::duration_cast<std::chrono::milliseconds>(
           d.default_table_expiration)
           .count()},
      {"default_partition_expiration",
       std::chrono::duration_cast<std::chrono::milliseconds>(
           d.default_partition_expiration)
           .count()},
      {"creation_time", std::chrono::duration_cast<std::chrono::milliseconds>(
                            d.creation_time.time_since_epoch())
                            .count()},
      {"last_modified_time",
       std::chrono::duration_cast<std::chrono::milliseconds>(
           d.last_modified_time.time_since_epoch())
           .count()},
      {"max_time_travel",
       std::chrono::duration_cast<std::chrono::hours>(d.max_time_travel)
           .count()},
      {"labels", d.labels},
      {"access", d.access},
      {"tags", d.tags},
      {"dataset_reference", d.dataset_reference},

      {"linked_dataset_source", d.linked_dataset_source},
      {"external_dataset_reference", d.external_dataset_reference},
      {"default_rounding_mode", d.default_rounding_mode},
      {"storage_billing_model", d.storage_billing_model}};
}

void from_json(nlohmann::json const& j, Dataset& d) {
  if (j.contains("kind")) j.at("kind").get_to(d.kind);
  if (j.contains("etag")) j.at("etag").get_to(d.etag);
  if (j.contains("id")) j.at("id").get_to(d.id);
  if (j.contains("self_link")) j.at("self_link").get_to(d.self_link);
  if (j.contains("friendly_name"))
    j.at("friendly_name").get_to(d.friendly_name);
  if (j.contains("description")) j.at("description").get_to(d.description);
  if (j.contains("type")) j.at("type").get_to(d.type);
  if (j.contains("location")) j.at("location").get_to(d.location);
  if (j.contains("default_collation"))
    j.at("default_collation").get_to(d.default_collation);
  if (j.contains("published")) j.at("published").get_to(d.published);
  if (j.contains("is_case_insensitive"))
    j.at("is_case_insensitive").get_to(d.is_case_insensitive);
  if (j.contains("default_table_expiration")) {
    std::int64_t millis;
    j.at("default_table_expiration").get_to(millis);
    d.default_table_expiration = std::chrono::milliseconds(millis);
  }
  if (j.contains("default_partition_expiration")) {
    std::int64_t millis;
    j.at("default_partition_expiration").get_to(millis);
    d.default_partition_expiration = std::chrono::milliseconds(millis);
  }
  if (j.contains("creation_time")) {
    std::int64_t millis;
    j.at("creation_time").get_to(millis);
    d.creation_time = std::chrono::time_point<std::chrono::system_clock>(
        std::chrono::milliseconds(millis));
  }
  if (j.contains("last_modified_time")) {
    std::int64_t millis;
    j.at("last_modified_time").get_to(millis);
    d.last_modified_time = std::chrono::time_point<std::chrono::system_clock>(
        std::chrono::milliseconds(millis));
  }
  if (j.contains("max_time_travel")) {
    std::int64_t hours;
    j.at("max_time_travel").get_to(hours);
    d.max_time_travel = std::chrono::hours(hours);
  }
  if (j.contains("labels")) j.at("labels").get_to(d.labels);
  if (j.contains("access")) j.at("access").get_to(d.access);
  if (j.contains("tags")) j.at("tags").get_to(d.tags);
  if (j.contains("dataset_reference"))
    j.at("dataset_reference").get_to(d.dataset_reference);
  if (j.contains("linked_dataset_source"))
    j.at("linked_dataset_source").get_to(d.linked_dataset_source);
  if (j.contains("external_dataset_reference"))
    j.at("external_dataset_reference").get_to(d.external_dataset_reference);
  if (j.contains("default_rounding_mode"))
    j.at("default_rounding_mode").get_to(d.default_rounding_mode);
  if (j.contains("storage_billing_model"))
    j.at("storage_billing_model").get_to(d.storage_billing_model);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_v2_minimal_internal
}  // namespace cloud
}  // namespace google
