# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-cellular
    PUBLIC
        .
)

target_sources(mbed-cellular
    PRIVATE
        UBLOX_AT.cpp
        UBLOX_AT_CellularContext.cpp
        UBLOX_AT_CellularNetwork.cpp
        UBLOX_AT_CellularStack.cpp
)
