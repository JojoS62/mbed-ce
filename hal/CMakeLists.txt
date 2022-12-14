# Copyright (c) 2020-2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

if(MBED_ENABLE_OS_INTERNAL_TESTS)
    if(MBED_BUILD_GREENTEA_TESTS)
        add_subdirectory(tests/TESTS)
    else()
        add_subdirectory(tests/UNITTESTS)
    endif()
endif()

add_subdirectory(TARGET_FLASH_CMSIS_ALGO EXCLUDE_FROM_ALL)

add_subdirectory(usb)

target_include_directories(mbed-core-flags
    INTERFACE
        include
        include/hal
)

target_sources(mbed-core-sources
    INTERFACE
        source/LowPowerTickerWrapper.cpp
        source/mbed_compat.c
        source/mbed_critical_section_api.c
        source/mbed_flash_api.c
        source/mbed_gpio.c
        source/mbed_gpio_irq.c
        source/mbed_itm_api.c
        source/mbed_lp_ticker_api.c
        source/mbed_lp_ticker_wrapper.cpp
        source/mbed_pinmap_common.c
        source/mbed_pinmap_default.cpp
        source/mbed_ticker_api.c
        source/mbed_us_ticker_api.c
        source/static_pinmap.cpp

        source/mpu/mbed_mpu_v7m.c
        source/mpu/mbed_mpu_v8m.c
)
