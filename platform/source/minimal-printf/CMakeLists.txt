# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-core-flags
    INTERFACE
        .
)

target_sources(mbed-core-sources
    INTERFACE
        mbed_printf_armlink_overrides.c
        mbed_printf_implementation.c
        mbed_printf_wrapper.c
)
