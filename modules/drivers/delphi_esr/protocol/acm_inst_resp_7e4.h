/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_DRIVERS_DELPHI_ESR_PROTOCOL_ACM_INST_RESP_7E4_H_
#define MODULES_DRIVERS_DELPHI_ESR_PROTOCOL_ACM_INST_RESP_7E4_H_

#include "modules/drivers/proto/delphi_esr.pb.h"
#include "modules/drivers/canbus/can_comm/protocol_data.h"

namespace apollo {
namespace drivers {
namespace delphi_esr {

using apollo::drivers::DelphiESR;

class Acminstresp7e4 : public apollo::drivers::canbus::ProtocolData<DelphiESR> {
 public:
  static const int32_t ID;
  Acminstresp7e4();
  void Parse(const std::uint8_t* bytes, int32_t length,
             DelphiESR* delphi_esr) const override;

 private:
  // config detail: {'name': 'Data_7', 'offset': 0.0, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 63, 'type':
  // 'int', 'order': 'motorola', 'physical_unit': ''}
  int data_7(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'Data_6', 'offset': 0.0, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 55, 'type':
  // 'int', 'order': 'motorola', 'physical_unit': ''}
  int data_6(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'Data_5', 'offset': 0.0, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 47, 'type':
  // 'int', 'order': 'motorola', 'physical_unit': ''}
  int data_5(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'Data_4', 'offset': 0.0, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 39, 'type':
  // 'int', 'order': 'motorola', 'physical_unit': ''}
  int data_4(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'Data_3', 'offset': 0.0, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 31, 'type':
  // 'int', 'order': 'motorola', 'physical_unit': ''}
  int data_3(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'rtn_cmd_counter', 'offset': 0.0, 'precision': 1.0,
  // 'len': 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 23,
  // 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
  int rtn_cmd_counter(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'command_return_code', 'offset': 0.0, 'precision':
  // 1.0, 'len': 8, 'is_signed_var': False, 'physical_range': '[0|0]', 'bit':
  // 15, 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
  int command_return_code(const std::uint8_t* bytes,
                          const int32_t length) const;

  // config detail: {'name': 'PID', 'offset': 0.0, 'precision': 1.0, 'len': 8,
  // 'is_signed_var': False, 'physical_range': '[0|0]', 'bit': 7, 'type': 'int',
  // 'order': 'motorola', 'physical_unit': ''}
  int pid(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace delphi_esr
}  // namespace drivers
}  // namespace apollo

#endif  // MODULES_CANBUS_VEHICL_ESR_PROTOCOL_ACM_INST_RESP_7E4_H_
