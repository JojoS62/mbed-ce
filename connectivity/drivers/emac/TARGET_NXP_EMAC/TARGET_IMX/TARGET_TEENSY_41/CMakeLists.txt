# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

target_sources(mbed-emac
    PRIVATE
	hardware_init.cpp
	fsl_phy_dp83825.c
)
