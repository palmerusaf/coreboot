ramstage-$(CONFIG_SOC_INTEL_COMMON_BLOCK_ACPI) += acpi.c
ramstage-$(CONFIG_SOC_INTEL_COMMON_BLOCK_ACPI_GPIO) += gpio.c
ramstage-$(CONFIG_SOC_INTEL_COMMON_BLOCK_ACPI_LPIT) += lpit.c
ramstage-$(CONFIG_ACPI_BERT) += acpi_bert.c
ramstage-$(CONFIG_SOC_INTEL_COMMON_ACPI_WAKE_SOURCE) += acpi_wake_source.c
ramstage-$(CONFIG_SOC_INTEL_COMMON_BLOCK_ACPI_PEP) += pep.c
ramstage-$(CONFIG_SOC_INTEL_COMMON_BLOCK_SGX_ENABLE) += sgx.c
ramstage-$(CONFIG_SOC_INTEL_COMMON_BLOCK_ACPI_CPU_HYBRID) += cpu_hybrid.c
