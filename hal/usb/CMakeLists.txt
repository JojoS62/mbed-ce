# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-core-flags
    INTERFACE
        include
        include/usb
)

target_sources(mbed-core-sources
    INTERFACE
        source/mbed_usb_phy.cpp
)
