// The 'features' section in 'target.json' is now used to create the device's hardware preprocessor switches.
// Check the 'features' section of the target description in 'targets.json' for more details.
/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_DEVICE_H
#define MBED_DEVICE_H

#define DEVICE_ID_LENGTH       24

/* CMSIS defines this, we use it as linker symbol, undefined it and let a linker symbol
 to be as vector table */
#undef __VECTOR_TABLE

// Set to 1 by MIMXRT pullups/pulldowns on CRS_DV and RXD0
#define BOARD_ENET_PHY_ADDR 1

#include "mimxrt_memory_info.h"

#include "objects.h"

#endif
