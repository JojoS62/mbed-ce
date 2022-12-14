# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

include(GoogleTest)

set(TEST_NAME netsocket-cellular-nonip-socket-unittest)

add_executable(${TEST_NAME})

target_compile_definitions(${TEST_NAME}
    PRIVATE
        MBED_CONF_CELLULAR_PRESENT=1
        DEVICE_SERIAL=1
        DEVICE_INTERRUPTIN=1
        MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE=115200
        MBED_CONF_CELLULAR_AT_HANDLER_BUFFER_SIZE=32
)

target_sources(${TEST_NAME}
    PRIVATE
        ../../../source/CellularNonIPSocket.cpp
        test_CellularNonIPSocket.cpp
)

target_include_directories(${TEST_NAME}
	PRIVATE
		../../../include
)

target_link_libraries(${TEST_NAME}
    PRIVATE
        mbed-headers-events
        mbed-headers-drivers
        mbed-headers-rtos
        mbed-headers-netsocket
        mbed-headers-cellular
        mbed-stubs
        mbed-stubs-cellular
        mbed-stubs-netsocket
        mbed-stubs-headers
        gmock_main
)

gtest_discover_tests(${TEST_NAME} PROPERTIES LABELS "netsocket")
