# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-802.15.4-rf
    PUBLIC
        .
)

target_sources(mbed-802.15.4-rf
    PRIVATE
        NanostackRfPhyEfr32.cpp
)
