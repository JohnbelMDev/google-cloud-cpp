// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ABSL_STR_CAT_QUIET_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ABSL_STR_CAT_QUIET_H

/**
 * @file refactor the code to disable the warnings generated by
 *   "absl/strings/str_cat.h", include said header and re-enable the warnings.
 *
 * @see https://github.com/googleapis/google-cloud-cpp/issues/4501 for details
 *   as to why this is needed.
 */

// TODO(#4501) - this file can be removed if #include <absl/...> works
#include "google/cloud/internal/diagnostics_push.inc"
#if _MSC_VER
#pragma warning(disable : 4244)
#endif  // _MSC_VER
#include "absl/strings/str_cat.h"
// TODO(#4501) - end
#include "google/cloud/internal/diagnostics_pop.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_ABSL_STR_CAT_QUIET_H
