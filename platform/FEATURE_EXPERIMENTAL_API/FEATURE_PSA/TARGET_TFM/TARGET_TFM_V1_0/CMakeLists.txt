# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

if("TFM_DUALCPU" IN_LIST MBED_TARGET_LABELS)
    target_sources(mbed-psa
        PRIVATE
            TARGET_TFM_DUALCPU/src/platform_multicore.c
            TARGET_TFM_DUALCPU/src/platform_ns_mailbox.c
            TARGET_TFM_DUALCPU/src/tfm_mbed_boot.c
            TARGET_TFM_DUALCPU/src/tfm_multi_core_api.c
            TARGET_TFM_DUALCPU/src/tfm_multi_core_psa_ns_api.c
            TARGET_TFM_DUALCPU/src/tfm_ns_mailbox.c
    )
endif()

if("TFM_V8M" IN_LIST MBED_TARGET_LABELS)
    target_sources(mbed-psa
        PRIVATE
            TARGET_TFM_V8M/src/cmsis_nvic_virtual.c
            TARGET_TFM_V8M/src/tfm_mbed_boot.c
            TARGET_TFM_V8M/src/tfm_ns_interface.c
            TARGET_TFM_V8M/src/tfm_psa_ns_api.c
    )
endif()

target_include_directories(mbed-psa
    PUBLIC
        include
        include/psa
        include/psa_manifest
)

target_sources(mbed-psa
    PRIVATE
        src/tfm_crypto_ipc_api.c
        src/tfm_initial_attestation_ipc_api.c
        src/tfm_its_ipc_api.c
        src/tfm_platform_ipc_api.c
        src/tfm_sst_ipc_api.c
)
