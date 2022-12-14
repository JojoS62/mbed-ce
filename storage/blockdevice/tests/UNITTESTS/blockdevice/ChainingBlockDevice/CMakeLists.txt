# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

include(GoogleTest)

set(TEST_NAME chaining-blockdevice-unittest)

add_executable(${TEST_NAME})

target_sources(${TEST_NAME}
    PRIVATE
        ${mbed-os_SOURCE_DIR}/storage/blockdevice/source/ChainingBlockDevice.cpp
        test_ChainingBlockDevice.cpp
)

target_link_libraries(${TEST_NAME}
    PRIVATE
        mbed-headers-blockdevice
        mbed-headers-platform
        mbed-stubs-headers
        mbed-stubs-platform
        mbed-stubs-blockdevice
        gmock_main
)

gtest_discover_tests(${TEST_NAME} PROPERTIES LABELS "storage")
