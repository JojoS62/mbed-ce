# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-lorawan
    PUBLIC
        .
        ./registers
)

target_sources(mbed-lorawan
    PRIVATE
        SX1272_LoRaRadio.cpp
)
