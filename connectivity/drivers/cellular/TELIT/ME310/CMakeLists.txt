# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-cellular
    PUBLIC
        .
)

target_sources(mbed-cellular
    PRIVATE
        TELIT_ME310.cpp
        TELIT_ME310_CellularContext.cpp
        TELIT_ME310_CellularNetwork.cpp
        TELIT_ME310_CellularStack.cpp
)
