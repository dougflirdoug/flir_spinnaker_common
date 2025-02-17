// -*-c++-*--------------------------------------------------------------------
// Copyright 2020 Bernd Pfrommer <bernd.pfrommer@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FLIR_SPINNAKER_COMMON__PIXEL_FORMAT_H_
#define FLIR_SPINNAKER_COMMON__PIXEL_FORMAT_H_

#include <memory>
#include <string>

namespace flir_spinnaker_common
{
namespace pixel_format
{
enum PixelFormat { INVALID = 0, BayerRG8, RGB8, Mono8, RGB8Packed, BGR8 };
std::string to_string(PixelFormat f);
PixelFormat from_nodemap_string(const std::string pixFmt);
}  // namespace pixel_format
}  // namespace flir_spinnaker_common
#endif  // FLIR_SPINNAKER_COMMON__PIXEL_FORMAT_H_
