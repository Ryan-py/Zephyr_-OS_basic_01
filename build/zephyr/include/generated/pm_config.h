/* File generated by /home/ryantech/ncs/v2.4.1/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM_TFM_OFFSET 0x0
#define PM_TFM_ADDRESS 0x0
#define PM_TFM_END_ADDRESS 0x10000
#define PM_TFM_SIZE 0x10000
#define PM_TFM_NAME tfm
#define PM_TFM_ID 0
#define PM_tfm_ID PM_TFM_ID
#define PM_tfm_IS_ENABLED 1
#define PM_0_LABEL TFM
#define PM_TFM_DEV flash_controller
#define PM_TFM_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_TFM_SECURE_OFFSET 0x0
#define PM_TFM_SECURE_ADDRESS 0x0
#define PM_TFM_SECURE_END_ADDRESS 0x10000
#define PM_TFM_SECURE_SIZE 0x10000
#define PM_TFM_SECURE_NAME tfm_secure
#define PM_TFM_SECURE_ID 1
#define PM_tfm_secure_ID PM_TFM_SECURE_ID
#define PM_tfm_secure_IS_ENABLED 1
#define PM_1_LABEL TFM_SECURE
#define PM_TFM_SECURE_DEV flash_controller
#define PM_TFM_SECURE_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_APP_OFFSET 0x10000
#define PM_APP_ADDRESS 0x10000
#define PM_APP_END_ADDRESS 0x100000
#define PM_APP_SIZE 0xf0000
#define PM_APP_NAME app
#define PM_APP_ID 2
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_2_LABEL APP
#define PM_APP_DEV flash_controller
#define PM_APP_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_TFM_NONSECURE_OFFSET 0x10000
#define PM_TFM_NONSECURE_ADDRESS 0x10000
#define PM_TFM_NONSECURE_END_ADDRESS 0x100000
#define PM_TFM_NONSECURE_SIZE 0xf0000
#define PM_TFM_NONSECURE_NAME tfm_nonsecure
#define PM_TFM_NONSECURE_ID 3
#define PM_tfm_nonsecure_ID PM_TFM_NONSECURE_ID
#define PM_tfm_nonsecure_IS_ENABLED 1
#define PM_3_LABEL TFM_NONSECURE
#define PM_TFM_NONSECURE_DEV flash_controller
#define PM_TFM_NONSECURE_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_OTP_OFFSET 0x0
#define PM_OTP_ADDRESS 0xff8108
#define PM_OTP_END_ADDRESS 0xff83fc
#define PM_OTP_SIZE 0x2f4
#define PM_OTP_NAME otp
#define PM_SRAM_SECURE_OFFSET 0x0
#define PM_SRAM_SECURE_ADDRESS 0x20000000
#define PM_SRAM_SECURE_END_ADDRESS 0x20008000
#define PM_SRAM_SECURE_SIZE 0x8000
#define PM_SRAM_SECURE_NAME sram_secure
#define PM_TFM_SRAM_OFFSET 0x0
#define PM_TFM_SRAM_ADDRESS 0x20000000
#define PM_TFM_SRAM_END_ADDRESS 0x20008000
#define PM_TFM_SRAM_SIZE 0x8000
#define PM_TFM_SRAM_NAME tfm_sram
#define PM_NRF_MODEM_LIB_CTRL_OFFSET 0x8000
#define PM_NRF_MODEM_LIB_CTRL_ADDRESS 0x20008000
#define PM_NRF_MODEM_LIB_CTRL_END_ADDRESS 0x200084e8
#define PM_NRF_MODEM_LIB_CTRL_SIZE 0x4e8
#define PM_NRF_MODEM_LIB_CTRL_NAME nrf_modem_lib_ctrl
#define PM_NRF_MODEM_LIB_SRAM_OFFSET 0x8000
#define PM_NRF_MODEM_LIB_SRAM_ADDRESS 0x20008000
#define PM_NRF_MODEM_LIB_SRAM_END_ADDRESS 0x2000c568
#define PM_NRF_MODEM_LIB_SRAM_SIZE 0x4568
#define PM_NRF_MODEM_LIB_SRAM_NAME nrf_modem_lib_sram
#define PM_SRAM_NONSECURE_OFFSET 0x8000
#define PM_SRAM_NONSECURE_ADDRESS 0x20008000
#define PM_SRAM_NONSECURE_END_ADDRESS 0x20040000
#define PM_SRAM_NONSECURE_SIZE 0x38000
#define PM_SRAM_NONSECURE_NAME sram_nonsecure
#define PM_NRF_MODEM_LIB_TX_OFFSET 0x84e8
#define PM_NRF_MODEM_LIB_TX_ADDRESS 0x200084e8
#define PM_NRF_MODEM_LIB_TX_END_ADDRESS 0x2000a568
#define PM_NRF_MODEM_LIB_TX_SIZE 0x2080
#define PM_NRF_MODEM_LIB_TX_NAME nrf_modem_lib_tx
#define PM_NRF_MODEM_LIB_RX_OFFSET 0xa568
#define PM_NRF_MODEM_LIB_RX_ADDRESS 0x2000a568
#define PM_NRF_MODEM_LIB_RX_END_ADDRESS 0x2000c568
#define PM_NRF_MODEM_LIB_RX_SIZE 0x2000
#define PM_NRF_MODEM_LIB_RX_NAME nrf_modem_lib_rx
#define PM_SRAM_PRIMARY_OFFSET 0xc568
#define PM_SRAM_PRIMARY_ADDRESS 0x2000c568
#define PM_SRAM_PRIMARY_END_ADDRESS 0x20040000
#define PM_SRAM_PRIMARY_SIZE 0x33a98
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 4
#define PM_ALL_BY_SIZE "otp nrf_modem_lib_ctrl nrf_modem_lib_rx nrf_modem_lib_tx nrf_modem_lib_sram tfm_sram sram_secure tfm tfm_secure sram_primary sram_nonsecure app tfm_nonsecure"
#define PM_ADDRESS 0x10000
#define PM_SIZE 0xf0000
#define PM_SRAM_ADDRESS 0x2000c568
#define PM_SRAM_SIZE 0x33a98
#endif /* PM_CONFIG_H__ */