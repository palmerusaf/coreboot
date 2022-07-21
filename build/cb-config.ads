package CB.Config is

   --
   -- Automatically generated file; DO NOT EDIT.
   -- coreboot configuration
   --
   --
   -- General setup
   --
   COREBOOT_BUILD                                 : constant boolean := true;
   LOCALVERSION                                   : constant string  := "";
   CBFS_PREFIX                                    : constant string  := "fallback";
   COMPILER_GCC                                   : constant boolean := true;
   COMPILER_LLVM_CLANG                            : constant boolean := false;
   ANY_TOOLCHAIN                                  : constant boolean := false;
   CCACHE                                         : constant boolean := false;
   FMD_GENPARSER                                  : constant boolean := false;
   UTIL_GENPARSER                                 : constant boolean := false;
   OPTION_BACKEND_NONE                            : constant boolean := true;
   USE_OPTION_TABLE                               : constant boolean := false;
   COMPRESS_RAMSTAGE                              : constant boolean := true;
   INCLUDE_CONFIG_FILE                            : constant boolean := true;
   COLLECT_TIMESTAMPS                             : constant boolean := true;
   TIMESTAMPS_ON_CONSOLE                          : constant boolean := false;
   USE_BLOBS                                      : constant boolean := true;
   USE_AMD_BLOBS                                  : constant boolean := false;
   USE_QC_BLOBS                                   : constant boolean := false;
   COVERAGE                                       : constant boolean := false;
   UBSAN                                          : constant boolean := false;
   HAVE_ASAN_IN_RAMSTAGE                          : constant boolean := true;
   ASAN                                           : constant boolean := false;
   NO_STAGE_CACHE                                 : constant boolean := false;
   TSEG_STAGE_CACHE                               : constant boolean := true;
   UPDATE_IMAGE                                   : constant boolean := false;
   BOOTSPLASH_IMAGE                               : constant boolean := false;
   FW_CONFIG                                      : constant boolean := false;
   -- end of General setup
   --
   -- Mainboard
   --
   --
   -- Important: Run 'make distclean' before switching boards
   --
   VENDOR_51NB                                    : constant boolean := false;
   VENDOR_ACER                                    : constant boolean := false;
   VENDOR_ADLINK                                  : constant boolean := false;
   VENDOR_AMD                                     : constant boolean := false;
   VENDOR_AOPEN                                   : constant boolean := false;
   VENDOR_APPLE                                   : constant boolean := false;
   VENDOR_ASROCK                                  : constant boolean := false;
   VENDOR_ASUS                                    : constant boolean := false;
   VENDOR_BAP                                     : constant boolean := false;
   VENDOR_BIOSTAR                                 : constant boolean := false;
   VENDOR_BOSTENTECH                              : constant boolean := false;
   VENDOR_CAVIUM                                  : constant boolean := false;
   VENDOR_CLEVO                                   : constant boolean := false;
   VENDOR_COMPULAB                                : constant boolean := false;
   VENDOR_DELL                                    : constant boolean := false;
   VENDOR_ELMEX                                   : constant boolean := false;
   VENDOR_EMULATION                               : constant boolean := false;
   VENDOR_EXAMPLE                                 : constant boolean := false;
   VENDOR_FACEBOOK                                : constant boolean := false;
   VENDOR_FOXCONN                                 : constant boolean := false;
   VENDOR_GETAC                                   : constant boolean := false;
   VENDOR_GIGABYTE                                : constant boolean := false;
   VENDOR_GIZMOSPHERE                             : constant boolean := false;
   VENDOR_GOOGLE                                  : constant boolean := false;
   VENDOR_HP                                      : constant boolean := false;
   VENDOR_IBASE                                   : constant boolean := false;
   VENDOR_INTEL                                   : constant boolean := false;
   VENDOR_JETWAY                                  : constant boolean := false;
   VENDOR_KONTRON                                 : constant boolean := false;
   VENDOR_LENOVO                                  : constant boolean := true;
   VENDOR_LIBRETREND                              : constant boolean := false;
   VENDOR_LIPPERT                                 : constant boolean := false;
   VENDOR_MSI                                     : constant boolean := false;
   VENDOR_OCP                                     : constant boolean := false;
   VENDOR_OPENCELLULAR                            : constant boolean := false;
   VENDOR_PACKARDBELL                             : constant boolean := false;
   VENDOR_PCENGINES                               : constant boolean := false;
   VENDOR_PINE64                                  : constant boolean := false;
   VENDOR_PORTWELL                                : constant boolean := false;
   VENDOR_PRODRIVE                                : constant boolean := false;
   VENDOR_PROTECTLI                               : constant boolean := false;
   VENDOR_PURISM                                  : constant boolean := false;
   VENDOR_RAZER                                   : constant boolean := false;
   VENDOR_RODA                                    : constant boolean := false;
   VENDOR_SAMSUNG                                 : constant boolean := false;
   VENDOR_SAPPHIRE                                : constant boolean := false;
   VENDOR_SCALEWAY                                : constant boolean := false;
   VENDOR_SIEMENS                                 : constant boolean := false;
   VENDOR_SIFIVE                                  : constant boolean := false;
   VENDOR_STARLABS                                : constant boolean := false;
   VENDOR_SUPERMICRO                              : constant boolean := false;
   VENDOR_SYSTEM76                                : constant boolean := false;
   VENDOR_TI                                      : constant boolean := false;
   VENDOR_UP                                      : constant boolean := false;
   BOARD_SPECIFIC_OPTIONS                         : constant boolean := true;
   MAINBOARD_FAMILY                               : constant string  := "ThinkPad X230";
   MAINBOARD_PART_NUMBER                          : constant string  := "ThinkPad X230";
   MAINBOARD_VERSION                              : constant string  := "1.0";
   MAINBOARD_DIR                                  : constant string  := "lenovo/x230";
   VGA_BIOS_ID                                    : constant string  := "8086,0166";
   DIMM_MAX                                       : constant         := 4;
   DIMM_SPD_SIZE                                  : constant         := 256;
   FMDFILE                                        : constant string  := "";
   NO_POST                                        : constant boolean := false;
   MAINBOARD_VENDOR                               : constant string  := "LENOVO";
   CBFS_SIZE                                      : constant         := 16#0010_0000#;
   ONBOARD_VGA_IS_PRIMARY                         : constant boolean := false;
   MAX_CPUS                                       : constant         := 8;
   VBOOT                                          : constant boolean := false;
   VBOOT_VBNV_OFFSET                              : constant         := 16#002a#;
   VARIANT_DIR                                    : constant string  := "x230";
   DEVICETREE                                     : constant string  := "devicetree.cb";
   VGA_BIOS                                       : constant boolean := false;
   MAINBOARD_SMBIOS_MANUFACTURER                  : constant string  := "LENOVO";
   DRAM_RESET_GATE_GPIO                           : constant         := 10;
   INTEL_GMA_VBT_FILE                             : constant string  := "src/mainboard/$(MAINBOARDDIR)/variants/$(VARIANT_DIR)/data.vbt";
   PRERAM_CBMEM_CONSOLE_SIZE                      : constant         := 16#0c00#;
   POST_IO                                        : constant boolean := true;
   OVERRIDE_DEVICETREE                            : constant string  := "variants/$(CONFIG_VARIANT_DIR)/overridetree.cb";
   CMOS_DEFAULT_FILE                              : constant string  := "src/mainboard/$(MAINBOARDDIR)/cmos.default";
   CMOS_LAYOUT_FILE                               : constant string  := "src/mainboard/$(MAINBOARDDIR)/cmos.layout";
   USBDEBUG_HCD_INDEX                             : constant         := 2;
   BOOT_DEVICE_SPI_FLASH_BUS                      : constant         := 0;
   CONSOLE_POST                                   : constant boolean := false;
   TPM_PIRQ                                       : constant         := 16#0000#;
   POST_DEVICE                                    : constant boolean := true;
   MEMLAYOUT_LD_FILE                              : constant string  := "src/arch/x86/memlayout.ld";
   DCACHE_RAM_BASE                                : constant         := 16#fefe_0000#;
   DCACHE_RAM_SIZE                                : constant         := 16#0002_0000#;
   C_ENV_BOOTBLOCK_SIZE                           : constant         := 16#0004_0000#;
   DCACHE_BSP_STACK_SIZE                          : constant         := 16#0001_0000#;
   ECAM_MMCONF_BASE_ADDRESS                       : constant         := 16#f000_0000#;
   ECAM_MMCONF_BUS_NUMBER                         : constant         := 64;
   MAX_ACPI_TABLE_SIZE_KB                         : constant         := 144;
   HAVE_INTEL_FIRMWARE                            : constant boolean := true;
   MRC_SETTINGS_CACHE_SIZE                        : constant         := 16#0001_0000#;
   SPI_FLASH_INCLUDE_ALL_DRIVERS                  : constant boolean := true;
   SPI_FLASH_WINBOND                              : constant boolean := true;
   DRIVERS_INTEL_WIFI                             : constant boolean := true;
   CONSOLE_CBMEM_BUFFER_SIZE                      : constant         := 16#0002_0000#;
   MAINBOARD_SMBIOS_PRODUCT_NAME                  : constant string  := "ThinkPad X230";
   HAVE_IFD_BIN                                   : constant boolean := false;
   PCIEXP_HOTPLUG_BUSES                           : constant         := 8;
   PCIEXP_HOTPLUG_MEM                             : constant         := 16#0080_0000#;
   PCIEXP_HOTPLUG_PREFETCH_MEM                    : constant         := 16#1000_0000#;
   BOARD_LENOVO_G505S                             : constant boolean := false;
   BOARD_LENOVO_L520                              : constant boolean := false;
   BOARD_LENOVO_S230U                             : constant boolean := false;
   BOARD_LENOVO_T400                              : constant boolean := false;
   BOARD_LENOVO_T500                              : constant boolean := false;
   BOARD_LENOVO_R400                              : constant boolean := false;
   BOARD_LENOVO_R500                              : constant boolean := false;
   BOARD_LENOVO_W500                              : constant boolean := false;
   BOARD_LENOVO_T410                              : constant boolean := false;
   BOARD_LENOVO_T420                              : constant boolean := false;
   BOARD_LENOVO_T420S                             : constant boolean := false;
   BOARD_LENOVO_THINKPAD_T430                     : constant boolean := false;
   BOARD_LENOVO_T430S                             : constant boolean := false;
   BOARD_LENOVO_T431S                             : constant boolean := false;
   BOARD_LENOVO_THINKPAD_T440P                    : constant boolean := false;
   BOARD_LENOVO_T520                              : constant boolean := false;
   BOARD_LENOVO_W520                              : constant boolean := false;
   BOARD_LENOVO_T530                              : constant boolean := false;
   BOARD_LENOVO_W530                              : constant boolean := false;
   BOARD_LENOVO_T60                               : constant boolean := false;
   BOARD_LENOVO_Z61T                              : constant boolean := false;
   BOARD_LENOVO_R60                               : constant boolean := false;
   BOARD_LENOVO_THINKCENTRE_A58                   : constant boolean := false;
   BOARD_LENOVO_THINKPAD_W541                     : constant boolean := false;
   BOARD_LENOVO_X131E                             : constant boolean := false;
   BOARD_LENOVO_X1_CARBON_GEN1                    : constant boolean := false;
   BOARD_LENOVO_X200                              : constant boolean := false;
   BOARD_LENOVO_X301                              : constant boolean := false;
   BOARD_LENOVO_X201                              : constant boolean := false;
   BOARD_LENOVO_X220                              : constant boolean := false;
   BOARD_LENOVO_X220I                             : constant boolean := false;
   BOARD_LENOVO_X1                                : constant boolean := false;
   BOARD_LENOVO_X230                              : constant boolean := true;
   BOARD_LENOVO_X230T                             : constant boolean := false;
   BOARD_LENOVO_X230S                             : constant boolean := false;
   BOARD_LENOVO_X60                               : constant boolean := false;
   PS2K_EISAID                                    : constant string  := "PNP0303";
   PS2M_EISAID                                    : constant string  := "LEN0020";
   THINKPADEC_HKEY_EISAID                         : constant string  := "LEN0068";
   VBOOT_SLOTS_RW_AB                              : constant boolean := true;
   DRIVER_LENOVO_SERIALS                          : constant boolean := true;
   GFX_GMA_PANEL_1_PORT                           : constant string  := "LVDS";
   PCIEXP_L1_SUB_STATE                            : constant boolean := false;
   PCIEXP_CLK_PM                                  : constant boolean := false;
   DRIVERS_UART_8250IO                            : constant boolean := false;
   HEAP_SIZE                                      : constant         := 16#4000#;
   BOARD_ROMSIZE_KB_12288                         : constant boolean := true;
   COREBOOT_ROMSIZE_KB_256                        : constant boolean := false;
   COREBOOT_ROMSIZE_KB_512                        : constant boolean := false;
   COREBOOT_ROMSIZE_KB_1024                       : constant boolean := false;
   COREBOOT_ROMSIZE_KB_2048                       : constant boolean := false;
   COREBOOT_ROMSIZE_KB_4096                       : constant boolean := true;
   COREBOOT_ROMSIZE_KB_5120                       : constant boolean := false;
   COREBOOT_ROMSIZE_KB_6144                       : constant boolean := false;
   COREBOOT_ROMSIZE_KB_8192                       : constant boolean := false;
   COREBOOT_ROMSIZE_KB_10240                      : constant boolean := false;
   COREBOOT_ROMSIZE_KB_12288                      : constant boolean := false;
   COREBOOT_ROMSIZE_KB_16384                      : constant boolean := false;
   COREBOOT_ROMSIZE_KB_32768                      : constant boolean := false;
   COREBOOT_ROMSIZE_KB_65536                      : constant boolean := false;
   COREBOOT_ROMSIZE_KB                            : constant         := 4096;
   ROM_SIZE                                       : constant         := 16#0040_0000#;
   HAVE_POWER_STATE_AFTER_FAILURE                 : constant boolean := true;
   HAVE_POWER_STATE_PREVIOUS_AFTER_FAILURE        : constant boolean := true;
   POWER_STATE_OFF_AFTER_FAILURE                  : constant boolean := true;
   POWER_STATE_ON_AFTER_FAILURE                   : constant boolean := false;
   POWER_STATE_PREVIOUS_AFTER_FAILURE             : constant boolean := false;
   MAINBOARD_POWER_FAILURE_STATE                  : constant         := 0;
   -- end of Mainboard
   SYSTEM_TYPE_LAPTOP                             : constant boolean := true;
   --
   -- Chipset
   --
   --
   -- SoC
   --
   ARCH_ALL_STAGES_X86                            : constant boolean := true;
   CHIPSET_DEVICETREE                             : constant string  := "";
   CBFS_MCACHE_SIZE                               : constant         := 16#4000#;
   ROMSTAGE_ADDR                                  : constant         := 16#0200_0000#;
   VERSTAGE_ADDR                                  : constant         := 16#0200_0000#;
   RAMBASE                                        : constant         := 16#00e0_0000#;
   SMM_TSEG_SIZE                                  : constant         := 16#0080_0000#;
   SMM_RESERVED_SIZE                              : constant         := 16#0010_0000#;
   SMM_MODULE_STACK_SIZE                          : constant         := 16#0400#;
   CPU_SPECIFIC_OPTIONS                           : constant boolean := true;
   SERIRQ_CONTINUOUS_MODE                         : constant boolean := true;
   ACPI_CPU_STRING                                : constant string  := "\\_SB.CP%02d";
   EHCI_BAR                                       : constant         := 16#fef0_0000#;
   CBFS_CACHE_ALIGN                               : constant         := 8;
   STACK_SIZE                                     : constant         := 16#1000#;
   IED_REGION_SIZE                                : constant         := 16#0040_0000#;
   VBT_DATA_SIZE_KB                               : constant         := 8;
   INTEL_GMA_BCLV_OFFSET                          : constant         := 16#0004_8254#;
   INTEL_GMA_BCLV_WIDTH                           : constant         := 16;
   INTEL_GMA_BCLM_OFFSET                          : constant         := 16#000c_8256#;
   INTEL_GMA_BCLM_WIDTH                           : constant         := 16;
   DCACHE_RAM_MRC_VAR_SIZE                        : constant         := 16#0000#;
   FIXED_MCHBAR_MMIO_BASE                         : constant         := 16#fed1_0000#;
   FIXED_DMIBAR_MMIO_BASE                         : constant         := 16#fed1_8000#;
   FIXED_EPBAR_MMIO_BASE                          : constant         := 16#fed1_9000#;
   AZALIA_MAX_CODECS                              : constant         := 4;
   PCIEXP_ASPM                                    : constant boolean := true;
   PCIEXP_COMMON_CLOCK                            : constant boolean := true;
   UART_PCI_ADDR                                  : constant         := 16#0000#;
   --
   -- CPU
   --
   CPU_INTEL_MODEL_206AX                          : constant boolean := true;
   SSE2                                           : constant boolean := true;
   CPU_INTEL_COMMON                               : constant boolean := true;
   ENABLE_VMX                                     : constant boolean := true;
   SET_IA32_FC_LOCK_BIT                           : constant boolean := true;
   SET_MSR_AESNI_LOCK_BIT                         : constant boolean := true;
   CPU_INTEL_COMMON_TIMEBASE                      : constant boolean := true;
   CPU_INTEL_COMMON_SMM                           : constant boolean := true;
   MICROCODE_UPDATE_PRE_RAM                       : constant boolean := true;
   PARALLEL_MP                                    : constant boolean := true;
   XAPIC_ONLY                                     : constant boolean := true;
   X2APIC_ONLY                                    : constant boolean := false;
   X2APIC_RUNTIME                                 : constant boolean := false;
   UDELAY_TSC                                     : constant boolean := true;
   TSC_MONOTONIC_TIMER                            : constant boolean := true;
   TSC_SYNC_MFENCE                                : constant boolean := true;
   LOGICAL_CPUS                                   : constant boolean := true;
   HAVE_SMI_HANDLER                               : constant boolean := true;
   SMM_TSEG                                       : constant boolean := true;
   SMM_MODULE_HEAP_SIZE                           : constant         := 16#4000#;
   SMM_STUB_STACK_SIZE                            : constant         := 16#0400#;
   CPU_INFO_V2                                    : constant boolean := true;
   SMP                                            : constant boolean := true;
   MMX                                            : constant boolean := true;
   SSE                                            : constant boolean := true;
   SUPPORT_CPU_UCODE_IN_CBFS                      : constant boolean := true;
   USE_CPU_MICROCODE_CBFS_BINS                    : constant boolean := true;
   CPU_MICROCODE_CBFS_DEFAULT_BINS                : constant boolean := true;
   CPU_MICROCODE_CBFS_EXTERNAL_BINS               : constant boolean := false;
   CPU_MICROCODE_CBFS_EXTERNAL_HEADER             : constant boolean := false;
   CPU_MICROCODE_CBFS_NONE                        : constant boolean := false;
   --
   -- Northbridge
   --
   NORTHBRIDGE_INTEL_SANDYBRIDGE                  : constant boolean := true;
   USE_NATIVE_RAMINIT                             : constant boolean := true;
   NATIVE_RAMINIT_IGNORE_MAX_MEM_FUSES            : constant boolean := false;
   NATIVE_RAMINIT_IGNORE_XMP_MAX_DIMMS            : constant boolean := false;
   NATIVE_RAMINIT_IGNORE_XMP_REQUESTED_VOLTAGE    : constant boolean := false;
   RAMINIT_ALWAYS_ALLOW_DLL_OFF                   : constant boolean := false;
   RAMINIT_ENABLE_ECC                             : constant boolean := true;
   --
   -- Southbridge
   --
   SOUTHBRIDGE_INTEL_C216                         : constant boolean := true;
   SOUTH_BRIDGE_OPTIONS                           : constant boolean := true;
   HPET_MIN_TICKS                                 : constant         := 16#0080#;
   HIDE_MEI_ON_ERROR                              : constant boolean := false;
   PCIEXP_HOTPLUG                                 : constant boolean := true;
   INTEL_DESCRIPTOR_MODE_REQUIRED                 : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_RESET                 : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_RTC                   : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_PMCLIB                : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_PMBASE                : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_GPIO                  : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_ME                    : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_EARLY_SMBUS           : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_SMBUS                 : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_SPI                   : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_SPI_ICH9              : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_PIRQ_ACPI_GEN         : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_RCBA_PIRQ             : constant boolean := true;
   HAVE_INTEL_CHIPSET_LOCKDOWN                    : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_SMM                   : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_ACPI_MADT             : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_FINALIZE              : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_USB_DEBUG             : constant boolean := true;
   INTEL_DESCRIPTOR_MODE_CAPABLE                  : constant boolean := true;
   VALIDATE_INTEL_DESCRIPTOR                      : constant boolean := false;
   INTEL_CHIPSET_LOCKDOWN                         : constant boolean := true;
   SOUTHBRIDGE_INTEL_COMMON_WATCHDOG              : constant boolean := true;
   FIXED_RCBA_MMIO_BASE                           : constant         := 16#fed1_c000#;
   RCBA_LENGTH                                    : constant         := 16#4000#;
   FIXED_SMBUS_IO_BASE                            : constant         := 16#0400#;
   --
   -- Super I/O
   --
   --
   -- Embedded Controllers
   --
   EC_ACPI                                        : constant boolean := true;
   EC_LENOVO_H8                                   : constant boolean := true;
   H8_BEEP_ON_DEATH                               : constant boolean := true;
   H8_FLASH_LEDS_ON_DEATH                         : constant boolean := true;
   H8_SUPPORT_BT_ON_WIFI                          : constant boolean := false;
   H8_HAS_BAT_TRESHOLDS_IMPL                      : constant boolean := true;
   EC_LENOVO_PMH7                                 : constant boolean := true;
   --
   -- Intel Firmware
   --
   MAINBOARD_USES_IFD_GBE_REGION                  : constant boolean := true;
   ARCH_X86                                       : constant boolean := true;
   ARCH_BOOTBLOCK_X86_32                          : constant boolean := true;
   ARCH_VERSTAGE_X86_32                           : constant boolean := true;
   ARCH_ROMSTAGE_X86_32                           : constant boolean := true;
   ARCH_POSTCAR_X86_32                            : constant boolean := true;
   ARCH_RAMSTAGE_X86_32                           : constant boolean := true;
   ARCH_ALL_STAGES_X86_32                         : constant boolean := true;
   HAVE_EXP_X86_64_SUPPORT                        : constant boolean := true;
   USE_EXP_X86_64_SUPPORT                         : constant boolean := false;
   RAMTOP                                         : constant         := 16#0100_0000#;
   X86_TOP4G_BOOTMEDIA_MAP                        : constant boolean := true;
   NUM_IPI_STARTS                                 : constant         := 2;
   PC80_SYSTEM                                    : constant boolean := true;
   HAVE_CMOS_DEFAULT                              : constant boolean := true;
   HPET_ADDRESS                                   : constant         := 16#fed0_0000#;
   POSTCAR_STAGE                                  : constant boolean := true;
   BOOTBLOCK_SIMPLE                               : constant boolean := true;
   BOOTBLOCK_NORMAL                               : constant boolean := false;
   COLLECT_TIMESTAMPS_TSC                         : constant boolean := true;
   HAVE_CF9_RESET                                 : constant boolean := true;
   -- end of Chipset
   --
   -- Devices
   --
   HAVE_VGA_TEXT_FRAMEBUFFER                      : constant boolean := true;
   HAVE_LINEAR_FRAMEBUFFER                        : constant boolean := true;
   MAINBOARD_HAS_LIBGFXINIT                       : constant boolean := true;
   MAINBOARD_USE_LIBGFXINIT                       : constant boolean := true;
   VGA_ROM_RUN                                    : constant boolean := false;
   NO_GFX_INIT                                    : constant boolean := false;
   --
   -- Display
   --
   VGA_TEXT_FRAMEBUFFER                           : constant boolean := true;
   GENERIC_LINEAR_FRAMEBUFFER                     : constant boolean := false;
   -- end of Display
   PCI                                            : constant boolean := true;
   ECAM_MMCONF_SUPPORT                            : constant boolean := true;
   PCIX_PLUGIN_SUPPORT                            : constant boolean := true;
   CARDBUS_PLUGIN_SUPPORT                         : constant boolean := true;
   AZALIA_PLUGIN_SUPPORT                          : constant boolean := true;
   PCIEXP_PLUGIN_SUPPORT                          : constant boolean := true;
   ECAM_MMCONF_LENGTH                             : constant         := 16#0400_0000#;
   PCI_ALLOW_BUS_MASTER                           : constant boolean := true;
   PCI_SET_BUS_MASTER_PCI_BRIDGES                 : constant boolean := true;
   PCI_ALLOW_BUS_MASTER_ANY_DEVICE                : constant boolean := true;
   PCIEXP_HOTPLUG_PREFETCH_MEM_ABOVE_4G           : constant boolean := true;
   PCIEXP_HOTPLUG_PREFETCH_MEM_BELOW_4G           : constant boolean := false;
   PCIEXP_HOTPLUG_IO                              : constant         := 16#2000#;
   EARLY_PCI_BRIDGE                               : constant boolean := false;
   SUBSYSTEM_VENDOR_ID                            : constant         := 16#0000#;
   SUBSYSTEM_DEVICE_ID                            : constant         := 16#0000#;
   INTEL_GMA_HAVE_VBT                             : constant boolean := true;
   INTEL_GMA_ADD_VBT                              : constant boolean := true;
   SOFTWARE_I2C                                   : constant boolean := false;
   RESOURCE_ALLOCATOR_V4                          : constant boolean := true;
   -- end of Devices
   --
   -- Generic Drivers
   --
   CRB_TPM_BASE_ADDRESS                           : constant         := 16#fed4_0000#;
   ELOG                                           : constant boolean := false;
   CACHE_MRC_SETTINGS                             : constant boolean := true;
   MRC_SETTINGS_PROTECT                           : constant boolean := false;
   MRC_STASH_TO_CBMEM                             : constant boolean := true;
   SMMSTORE                                       : constant boolean := false;
   SPI_FLASH                                      : constant boolean := true;
   BOOT_DEVICE_SPI_FLASH_RW_NOMMAP                : constant boolean := true;
   BOOT_DEVICE_SPI_FLASH_NO_EARLY_WRITES          : constant boolean := true;
   SPI_FLASH_NO_FAST_READ                         : constant boolean := false;
   SPI_FLASH_ADESTO                               : constant boolean := true;
   SPI_FLASH_AMIC                                 : constant boolean := true;
   SPI_FLASH_ATMEL                                : constant boolean := true;
   SPI_FLASH_EON                                  : constant boolean := true;
   SPI_FLASH_GIGADEVICE                           : constant boolean := true;
   SPI_FLASH_MACRONIX                             : constant boolean := true;
   SPI_FLASH_SPANSION                             : constant boolean := true;
   SPI_FLASH_SST                                  : constant boolean := true;
   SPI_FLASH_STMICRO                              : constant boolean := true;
   TPM_INIT_RAMSTAGE                              : constant boolean := true;
   TPM_PPI                                        : constant boolean := false;
   NO_UART_ON_SUPERIO                             : constant boolean := true;
   DRIVERS_UART_OXPCIE                            : constant boolean := false;
   HAVE_USBDEBUG                                  : constant boolean := true;
   HAVE_USBDEBUG_OPTIONS                          : constant boolean := true;
   USBDEBUG                                       : constant boolean := true;
   USBDEBUG_IN_PRE_RAM                            : constant boolean := true;
   USBDEBUG_DEFAULT_PORT                          : constant         := 0;
   USBDEBUG_DONGLE_STD                            : constant boolean := true;
   USBDEBUG_DONGLE_BEAGLEBONE                     : constant boolean := false;
   USBDEBUG_DONGLE_FTDI_FT232H                    : constant boolean := false;
   USBDEBUG_OPTIONAL_HUB_PORT                     : constant         := 0;
   VPD                                            : constant boolean := false;
   DRIVERS_GENERIC_CBFS_SERIAL                    : constant boolean := false;
   DRIVERS_GENESYSLOGIC_GL9750                    : constant boolean := false;
   DRIVERS_GENESYSLOGIC_GL9755                    : constant boolean := false;
   INTEL_INT15                                    : constant boolean := true;
   INTEL_GMA_ACPI                                 : constant boolean := true;
   GFX_GMA                                        : constant boolean := true;
   GFX_GMA_PANEL_1_ON_LVDS                        : constant boolean := true;
   INTEL_GMA_OPREGION_2_0                         : constant boolean := true;
   GFX_GMA_DYN_CPU                                : constant boolean := true;
   GFX_GMA_GENERATION                             : constant string  := "Ironlake";
   GFX_GMA_PCH                                    : constant string  := "Cougar_Point";
   GFX_GMA_PANEL_2_PORT                           : constant string  := "Disabled";
   GFX_GMA_ANALOG_I2C_PORT                        : constant string  := "PCH_DAC";
   DRIVERS_PS2_KEYBOARD                           : constant boolean := false;
   DRIVERS_MC146818                               : constant boolean := true;
   USE_PC_CMOS_ALTCENTURY                         : constant boolean := true;
   MAINBOARD_HAS_LPC_TPM                          : constant boolean := true;
   TPM_TIS_BASE_ADDRESS                           : constant         := 16#fed4_0000#;
   VGA                                            : constant boolean := true;
   DRIVERS_RICOH_RCE822                           : constant boolean := true;
   DRIVERS_SIL_3114                               : constant boolean := false;
   DRIVERS_WIFI_GENERIC                           : constant boolean := true;
   -- end of Generic Drivers
   --
   -- Security
   --
   --
   -- CBFS verification
   --
   CBFS_VERIFICATION                              : constant boolean := false;
   -- end of CBFS verification
   --
   -- Verified Boot (vboot)
   --
   -- end of Verified Boot (vboot)
   --
   -- Trusted Platform Module
   --
   NO_TPM                                         : constant boolean := false;
   TPM1                                           : constant boolean := true;
   TPM                                            : constant boolean := true;
   MAINBOARD_HAS_TPM1                             : constant boolean := true;
   TPM_DEACTIVATE                                 : constant boolean := false;
   DEBUG_TPM                                      : constant boolean := false;
   TPM_RDRESP_NEED_DELAY                          : constant boolean := false;
   TPM_MEASURED_BOOT                              : constant boolean := false;
   -- end of Trusted Platform Module
   --
   -- Memory initialization
   --
   PLATFORM_HAS_DRAM_CLEAR                        : constant boolean := true;
   SECURITY_CLEAR_DRAM_ON_REGULAR_BOOT            : constant boolean := false;
   -- end of Memory initialization
   INTEL_TXT                                      : constant boolean := false;
   STM                                            : constant boolean := false;
   BOOTMEDIA_LOCK_NONE                            : constant boolean := true;
   BOOTMEDIA_LOCK_CONTROLLER                      : constant boolean := false;
   BOOTMEDIA_LOCK_CHIP                            : constant boolean := false;
   BOOTMEDIA_SMM_BWP                              : constant boolean := false;
   -- end of Security
   ACPI_HAVE_PCAT_8259                            : constant boolean := true;
   ACPI_INTEL_HARDWARE_SLEEP_VALUES               : constant boolean := true;
   ACPI_SOC_NVS                                   : constant boolean := true;
   HAVE_ACPI_TABLES                               : constant boolean := true;
   BOOT_DEVICE_SPI_FLASH                          : constant boolean := true;
   BOOT_DEVICE_MEMORY_MAPPED                      : constant boolean := true;
   BOOT_DEVICE_SUPPORTS_WRITES                    : constant boolean := true;
   RTC                                            : constant boolean := true;
   --
   -- Console
   --
   BOOTBLOCK_CONSOLE                              : constant boolean := true;
   POSTCAR_CONSOLE                                : constant boolean := true;
   SQUELCH_EARLY_SMP                              : constant boolean := true;
   SPKMODEM                                       : constant boolean := false;
   CONSOLE_USB                                    : constant boolean := true;
   CONSOLE_NE2K                                   : constant boolean := false;
   CONSOLE_CBMEM                                  : constant boolean := true;
   CONSOLE_CBMEM_DUMP_TO_UART                     : constant boolean := false;
   CONSOLE_SPI_FLASH                              : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_8                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_7                     : constant boolean := true;
   DEFAULT_CONSOLE_LOGLEVEL_6                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_5                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_4                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_3                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_2                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_1                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL_0                     : constant boolean := false;
   DEFAULT_CONSOLE_LOGLEVEL                       : constant         := 7;
   CMOS_POST                                      : constant boolean := false;
   POST_DEVICE_NONE                               : constant boolean := true;
   POST_DEVICE_LPC                                : constant boolean := false;
   POST_DEVICE_PCI_PCIE                           : constant boolean := false;
   POST_IO_PORT                                   : constant         := 16#0080#;
   HWBASE_DEBUG_CB                                : constant boolean := true;
   -- end of Console
   HAVE_ACPI_RESUME                               : constant boolean := true;
   RESUME_PATH_SAME_AS_BOOT                       : constant boolean := true;
   HAVE_MONOTONIC_TIMER                           : constant boolean := true;
   HAVE_OPTION_TABLE                              : constant boolean := true;
   IOAPIC                                         : constant boolean := true;
   USE_WATCHDOG_ON_BOOT                           : constant boolean := true;
   --
   -- System tables
   --
   GENERATE_SMBIOS_TABLES                         : constant boolean := true;
   SMBIOS_PROVIDED_BY_MOBO                        : constant boolean := true;
   MAINBOARD_SERIAL_NUMBER                        : constant string  := "123456789";
   -- end of System tables
   --
   -- Payload
   --
   PAYLOAD_NONE                                   : constant boolean := false;
   PAYLOAD_ELF                                    : constant boolean := false;
   PAYLOAD_BOOTBOOT                               : constant boolean := false;
   PAYLOAD_FILO                                   : constant boolean := false;
   PAYLOAD_GRUB2                                  : constant boolean := false;
   PAYLOAD_LINUXBOOT                              : constant boolean := false;
   PAYLOAD_SEABIOS                                : constant boolean := false;
   PAYLOAD_UBOOT                                  : constant boolean := false;
   PAYLOAD_YABITS                                 : constant boolean := true;
   PAYLOAD_LINUX                                  : constant boolean := false;
   PAYLOAD_TIANOCORE                              : constant boolean := false;
   PAYLOAD_FILE                                   : constant string  := "payloads/external/Yabits/uefi/build/uefi.elf";
   PAYLOAD_OPTIONS                                : constant string  := "";
   YABITS_STABLE                                  : constant boolean := true;
   YABITS_MASTER                                  : constant boolean := false;
   YABITS_REVISION                                : constant boolean := false;
   PXE                                            : constant boolean := false;
   COMPRESSED_PAYLOAD_NONE                        : constant boolean := false;
   COMPRESSED_PAYLOAD_LZMA                        : constant boolean := true;
   COMPRESSED_PAYLOAD_LZ4                         : constant boolean := false;
   COMPRESS_SECONDARY_PAYLOAD                     : constant boolean := true;
   --
   -- Secondary Payloads
   --
   COREINFO_SECONDARY_PAYLOAD                     : constant boolean := false;
   MEMTEST_SECONDARY_PAYLOAD                      : constant boolean := false;
   NVRAMCUI_SECONDARY_PAYLOAD                     : constant boolean := false;
   TINT_SECONDARY_PAYLOAD                         : constant boolean := false;
   -- end of Secondary Payloads
   -- end of Payload
   --
   -- Debugging
   --
   --
   -- CPU Debug Settings
   --
   DISPLAY_MTRRS                                  : constant boolean := false;
   --
   -- BLOB Debug Settings
   --
   --
   -- General Debug Settings
   --
   FATAL_ASSERTS                                  : constant boolean := false;
   DEBUG_CBFS                                     : constant boolean := false;
   HAVE_DEBUG_RAM_SETUP                           : constant boolean := true;
   DEBUG_RAM_SETUP                                : constant boolean := false;
   HAVE_DEBUG_SMBUS                               : constant boolean := true;
   DEBUG_SMBUS                                    : constant boolean := false;
   DEBUG_SMI                                      : constant boolean := false;
   DEBUG_MALLOC                                   : constant boolean := false;
   DEBUG_CONSOLE_INIT                             : constant boolean := false;
   DEBUG_SPI_FLASH                                : constant boolean := false;
   DEBUG_BOOT_STATE                               : constant boolean := false;
   DEBUG_ADA_CODE                                 : constant boolean := false;
   HAVE_EM100_SUPPORT                             : constant boolean := false;
   -- end of Debugging
   RAMSTAGE_ADA                                   : constant boolean := true;
   RAMSTAGE_LIBHWBASE                             : constant boolean := true;
   HWBASE_DYNAMIC_MMIO                            : constant boolean := true;
   HWBASE_DEFAULT_MMCONF                          : constant         := 16#f000_0000#;
   HWBASE_DIRECT_PCIDEV                           : constant boolean := true;
   WARNINGS_ARE_ERRORS                            : constant boolean := true;
   MAX_REBOOT_CNT                                 : constant         := 3;
   RELOCATABLE_MODULES                            : constant boolean := true;
   HAVE_BOOTBLOCK                                 : constant boolean := true;
   HAVE_ROMSTAGE                                  : constant boolean := true;
   HAVE_RAMSTAGE                                  : constant boolean := true;

end CB.Config;
