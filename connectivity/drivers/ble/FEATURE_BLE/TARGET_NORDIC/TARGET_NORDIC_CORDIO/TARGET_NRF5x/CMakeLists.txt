# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_include_directories(mbed-ble-cordio
    PUBLIC
        .
        ./stack/include
)

target_sources(mbed-ble-cordio
    PRIVATE
        NRFCordioHCIDriver.cpp
        NRFCordioHCITransportDriver.cpp

        stack/sources/pal_bb.c
        stack/sources/pal_bb_ble.c
        stack/sources/pal_bb_ble_rf.c
        stack/sources/pal_cfg.c
        stack/sources/pal_crypto.c
        stack/sources/pal_timer.c
)

target_link_libraries(mbed-ble-cordio
    PUBLIC
        mbed-ble-cordio_ll
        mbed-mbedtls
)
