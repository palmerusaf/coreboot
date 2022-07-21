#include <boot/coreboot_tables.h>
#include <device/device.h>
#include <device/pci.h>
#include <fw_config.h>
#include <static.h>
#include "cpu/intel/model_206ax/chip.h"
#include "drivers/pc80/tpm/chip.h"
#include "drivers/ricoh/rce822/chip.h"
#include "ec/lenovo/h8/chip.h"
#include "ec/lenovo/pmh7/chip.h"
#include "northbridge/intel/sandybridge/chip.h"
#include "southbridge/intel/bd82x6x/chip.h"

#if !DEVTREE_EARLY
__attribute__((weak)) struct chip_operations mainboard_ops = {};
__attribute__((weak)) struct chip_operations cpu_intel_model_206ax_ops = {};
extern struct chip_operations drivers_i2c_at24rf08c_ops;
extern struct chip_operations drivers_pc80_tpm_ops;
extern struct chip_operations drivers_ricoh_rce822_ops;
extern struct chip_operations ec_lenovo_h8_ops;
extern struct chip_operations ec_lenovo_pmh7_ops;
extern struct chip_operations northbridge_intel_sandybridge_ops;
extern struct chip_operations southbridge_intel_bd82x6x_ops;
#endif

#define STORAGE static __unused DEVTREE_CONST


/* pass 0 */
STORAGE struct bus dev_root_links[];
STORAGE struct device _dev_0;
STORAGE struct bus _dev_0_links[];
STORAGE struct device _dev_1;
STORAGE struct bus _dev_1_links[];
STORAGE struct device _dev_2;
STORAGE struct device _dev_3;
STORAGE struct device _dev_4;
STORAGE struct device _dev_5;
STORAGE struct device _dev_6;
STORAGE struct device _dev_7;
STORAGE struct device _dev_8;
STORAGE struct device _dev_9;
STORAGE struct device _dev_10;
STORAGE struct device _dev_11;
STORAGE struct device _dev_12;
STORAGE struct device _dev_13;
STORAGE struct device _dev_14;
STORAGE struct device _dev_15;
STORAGE struct bus _dev_15_links[];
STORAGE struct device _dev_16;
STORAGE struct device _dev_17;
STORAGE struct device _dev_18;
STORAGE struct device _dev_19;
STORAGE struct device _dev_20;
STORAGE struct device _dev_21;
STORAGE struct device _dev_22;
STORAGE struct device _dev_23;
STORAGE struct device _dev_24;
STORAGE struct device _dev_25;
STORAGE struct bus _dev_25_links[];
STORAGE struct device _dev_26;
STORAGE struct device _dev_27;
STORAGE struct bus _dev_27_links[];
STORAGE struct device _dev_28;
STORAGE struct device _dev_29;
STORAGE struct device _dev_30;
STORAGE struct device _dev_31;
STORAGE struct device _dev_32;
STORAGE struct device _dev_33;
STORAGE struct resource _dev_33_res[];
STORAGE struct device _dev_34;
STORAGE struct device _dev_35;
STORAGE struct device _dev_36;
STORAGE struct device _dev_37;
STORAGE struct device _dev_38;
STORAGE struct device _dev_39;
STORAGE struct device _dev_40;
STORAGE struct device _dev_41;
DEVTREE_CONST struct device * DEVTREE_CONST last_dev = &_dev_41;

/* chip configs */
STORAGE struct cpu_intel_model_206ax_config cpu_intel_model_206ax_info_1 = {
	.acpi_c1 = 1,
	.acpi_c2 = 3,
	.acpi_c3 = 5,
};

STORAGE struct drivers_pc80_tpm_config drivers_pc80_tpm_info_1 = {};

STORAGE struct drivers_ricoh_rce822_config drivers_ricoh_rce822_info_1 = {
	.disable_mask = 0x87,
	.sdwppol = 1,
};

STORAGE struct ec_lenovo_h8_config ec_lenovo_h8_info_1 = {
	.beepmask0 = 0x00,
	.beepmask1 = 0x86,
	.config0 = 0xa6,
	.config1 = 0x09,
	.config2 = 0xa0,
	.config3 = 0xe0,
	.event2_enable = 0xff,
	.event3_enable = 0xff,
	.event4_enable = 0xd0,
	.event5_enable = 0xfc,
	.event6_enable = 0x00,
	.event7_enable = 0x01,
	.event8_enable = 0x7b,
	.event9_enable = 0xff,
	.eventa_enable = 0x01,
	.eventb_enable = 0x00,
	.eventc_enable = 0xff,
	.eventd_enable = 0xff,
	.evente_enable = 0x0d,
	.has_bdc_detection = 0,
	.has_keyboard_backlight = 1,
	.has_power_management_beeps = 0,
	.has_wwan_detection = 1,
	.wwan_gpio_lvl = 0,
	.wwan_gpio_num = 70,
};

STORAGE struct ec_lenovo_pmh7_config ec_lenovo_pmh7_info_1 = {
	.backlight_enable = 0x01,
	.dock_event_enable = 0x01,
};

STORAGE struct northbridge_intel_sandybridge_config northbridge_intel_sandybridge_info_1 = {
	.gfx = GMA_STATIC_DISPLAYS(1),
	.gpu_cpu_backlight = 0x1155,
	.gpu_dp_d_hotplug = 0x06,
	.gpu_panel_port_select = PANEL_PORT_LVDS,
	.gpu_panel_power_backlight_off_delay = 2100,
	.gpu_panel_power_backlight_on_delay = 2100,
	.gpu_panel_power_cycle_delay = 6,
	.gpu_panel_power_down_delay = 100,
	.gpu_panel_power_up_delay = 100,
	.gpu_pch_backlight = 0x11551155,
};

STORAGE struct southbridge_intel_bd82x6x_config southbridge_intel_bd82x6x_info_1 = {
	.alt_gp_smi_en = 0x0000,
	.docking_supported = 1,
	.gen1_dec = 0x7c1601,
	.gen2_dec = 0x0c15e1,
	.gen4_dec = 0x0c06a1,
	.gpi13_routing = 2,
	.gpi1_routing = 2,
	.pcie_hotplug_map = { 0, 0, 1, 0, 0, 0, 0, 0 },
	.pcie_port_coalesce = 1,
	.sata_interface_speed_support = 0x3,
	.sata_port_map = 0x7,
	.spi_lvscc = 0x2005,
	.spi_uvscc = 0x2005,
	.superspeed_capable_ports = 0x7,
	.xhci_overcurrent_mapping = 0x4000201,
	.xhci_switchable_ports = 0x7,
};


/* pass 1 */
DEVTREE_CONST struct device dev_root = {
#if !DEVTREE_EARLY
	.ops = &default_dev_ops_root,
#endif
	.bus = &dev_root_links[0],
	.path = { .type = DEVICE_PATH_ROOT },
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = &dev_root_links[0],
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &mainboard_ops,
	.name = mainboard_name,
#endif
	.next=&_dev_0,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct bus dev_root_links[] = {
		[0] = {
			.link_num = 0,
			.dev = &dev_root,
			.children = &_dev_0,
			.next = NULL,
		},
	};
STORAGE struct device _dev_0 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &dev_root_links[0],
	.path = {.type=DEVICE_PATH_CPU_CLUSTER,{.cpu_cluster={ .cluster = 0x0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = &_dev_0_links[0],
	.sibling = &_dev_1,
#if !DEVTREE_EARLY
	.chip_ops = &northbridge_intel_sandybridge_ops,
#endif
	.chip_info = &northbridge_intel_sandybridge_info_1,
	.next=&_dev_1,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct bus _dev_0_links[] = {
		[0] = {
			.link_num = 0,
			.dev = &_dev_0,
			.children = &_dev_2,
			.next = NULL,
		},
	};
STORAGE struct device _dev_1 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &dev_root_links[0],
	.path = {.type=DEVICE_PATH_DOMAIN,{.domain={ .domain = 0x0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = &_dev_1_links[0],
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &northbridge_intel_sandybridge_ops,
#endif
	.chip_info = &northbridge_intel_sandybridge_info_1,
	.next=&_dev_2,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct bus _dev_1_links[] = {
		[0] = {
			.link_num = 0,
			.dev = &_dev_1,
			.children = &_dev_4,
			.next = NULL,
		},
	};
STORAGE struct device _dev_2 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_0_links[0],
	.path = {.type=DEVICE_PATH_APIC,{.apic={ .apic_id = 0x0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_3,
#if !DEVTREE_EARLY
	.chip_ops = &cpu_intel_model_206ax_ops,
#endif
	.chip_info = &cpu_intel_model_206ax_info_1,
	.next=&_dev_3,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_3 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_0_links[0],
	.path = {.type=DEVICE_PATH_APIC,{.apic={ .apic_id = 0xacac }}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &cpu_intel_model_206ax_ops,
#endif
	.chip_info = &cpu_intel_model_206ax_info_1,
	.next=&_dev_4,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_4 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x0,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_5,
#if !DEVTREE_EARLY
	.chip_ops = &northbridge_intel_sandybridge_ops,
#endif
	.chip_info = &northbridge_intel_sandybridge_info_1,
	.next=&_dev_5,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_5 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1,0)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_6,
#if !DEVTREE_EARLY
	.chip_ops = &northbridge_intel_sandybridge_ops,
#endif
	.chip_info = &northbridge_intel_sandybridge_info_1,
	.next=&_dev_6,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_6 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x2,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_7,
#if !DEVTREE_EARLY
	.chip_ops = &northbridge_intel_sandybridge_ops,
#endif
	.chip_info = &northbridge_intel_sandybridge_info_1,
	.next=&_dev_7,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_7 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x14,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_8,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_8,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_8 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x16,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_9,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_9,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_9 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x16,1)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_10,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_10,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_10 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x16,2)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_11,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_11,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_11 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x16,3)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_12,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_12,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_12 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x19,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.subsystem_vendor = 0x17aa,
	.subsystem_device = 0x21f3,
	.link_list = NULL,
	.sibling = &_dev_13,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_13,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_13 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1a,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_14,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_14,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_14 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1b,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_15,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_15,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_15 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = &_dev_15_links[0],
	.sibling = &_dev_16,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_16,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct bus _dev_15_links[] = {
		[0] = {
			.link_num = 0,
			.dev = &_dev_15,
			.children = &_dev_30,
			.next = NULL,
		},
	};
STORAGE struct device _dev_16 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,1)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_17,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_17,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_17 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,2)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_18,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_18,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
	.smbios_slot_type = 7,
	.smbios_slot_data_width = 8,
	.smbios_slot_designation = "ExpressCard Slot",
	.smbios_slot_length = 3,
#endif
#endif
};
STORAGE struct device _dev_18 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,3)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_19,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_19,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_19 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,4)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_20,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_20,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_20 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,5)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_21,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_21,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_21 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,6)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_22,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_22,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_22 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1c,7)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_23,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_23,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_23 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1d,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_24,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_24,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_24 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1e,0)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_25,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_25,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_25 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1f,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = &_dev_25_links[0],
	.sibling = &_dev_26,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_26,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct bus _dev_25_links[] = {
		[0] = {
			.link_num = 0,
			.dev = &_dev_25,
			.children = &_dev_31,
			.next = NULL,
		},
	};
STORAGE struct device _dev_26 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1f,2)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_27,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_27,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_27 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1f,3)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = &_dev_27_links[0],
	.sibling = &_dev_28,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_28,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct bus _dev_27_links[] = {
		[0] = {
			.link_num = 0,
			.dev = &_dev_27,
			.children = &_dev_34,
			.next = NULL,
		},
	};
STORAGE struct device _dev_28 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1f,5)}}},
	.enabled = 0,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_29,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_29,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_29 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_1_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x1f,6)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &southbridge_intel_bd82x6x_ops,
#endif
	.chip_info = &southbridge_intel_bd82x6x_info_1,
	.next=&_dev_30,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_30 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_15_links[0],
	.path = {.type=DEVICE_PATH_PCI,{.pci={ .devfn = PCI_DEVFN(0x0,0)}}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_ricoh_rce822_ops,
#endif
	.chip_info = &drivers_ricoh_rce822_info_1,
	.next=&_dev_31,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_31 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_25_links[0],
	.path = {.type=DEVICE_PATH_PNP,{.pnp={ .port = 0xff, .device = 0x1 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_32,
#if !DEVTREE_EARLY
	.chip_ops = &ec_lenovo_pmh7_ops,
#endif
	.chip_info = &ec_lenovo_pmh7_info_1,
	.next=&_dev_32,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_32 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_25_links[0],
	.path = {.type=DEVICE_PATH_PNP,{.pnp={ .port = 0xc31, .device = 0x0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_33,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_pc80_tpm_ops,
#endif
	.chip_info = &drivers_pc80_tpm_info_1,
	.next=&_dev_33,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_33 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_25_links[0],
	.path = {.type=DEVICE_PATH_PNP,{.pnp={ .port = 0xff, .device = 0x2 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.resource_list = &_dev_33_res[0],
	.link_list = NULL,
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &ec_lenovo_h8_ops,
#endif
	.chip_info = &ec_lenovo_h8_info_1,
	.next=&_dev_34,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct resource _dev_33_res[] = {
		{ .flags=IORESOURCE_FIXED | IORESOURCE_ASSIGNED | IORESOURCE_IO, .index=0x60, .base=0x62,.next=&_dev_33_res[1]},
		{ .flags=IORESOURCE_FIXED | IORESOURCE_ASSIGNED | IORESOURCE_IO, .index=0x62, .base=0x66,.next=&_dev_33_res[2]},
		{ .flags=IORESOURCE_FIXED | IORESOURCE_ASSIGNED | IORESOURCE_IO, .index=0x64, .base=0x1600,.next=&_dev_33_res[3]},
		{ .flags=IORESOURCE_FIXED | IORESOURCE_ASSIGNED | IORESOURCE_IO, .index=0x66, .base=0x1604,.next=NULL },
	 };
STORAGE struct device _dev_34 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x54, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_35,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_35,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_35 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x55, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_36,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_36,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_36 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x56, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_37,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_37,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_37 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x57, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_38,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_38,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_38 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x5c, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_39,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_39,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_39 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x5d, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_40,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_40,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_40 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x5e, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = &_dev_41,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
	.next=&_dev_41,
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
STORAGE struct device _dev_41 = {
#if !DEVTREE_EARLY
	.ops = NULL,
#endif
	.bus = &_dev_27_links[0],
	.path = {.type=DEVICE_PATH_I2C,{.i2c={ .device = 0x5f, .mode_10bit = 0 }}},
	.enabled = 1,
	.hidden = 0,
	.mandatory = 0,
	.on_mainboard = 1,
	.link_list = NULL,
	.sibling = NULL,
#if !DEVTREE_EARLY
	.chip_ops = &drivers_i2c_at24rf08c_ops,
#endif
#if !DEVTREE_EARLY
#if CONFIG(GENERATE_SMBIOS_TABLES)
#endif
#endif
};
DEVTREE_CONST struct device *const __pci_0_00_0 = &_dev_4;
DEVTREE_CONST void *const __pci_0_00_0_config = &northbridge_intel_sandybridge_info_1;
DEVTREE_CONST struct device *const __pci_0_01_0 = &_dev_5;
DEVTREE_CONST void *const __pci_0_01_0_config = &northbridge_intel_sandybridge_info_1;
DEVTREE_CONST struct device *const __pci_0_02_0 = &_dev_6;
DEVTREE_CONST void *const __pci_0_02_0_config = &northbridge_intel_sandybridge_info_1;
DEVTREE_CONST struct device *const __pci_0_14_0 = &_dev_7;
DEVTREE_CONST void *const __pci_0_14_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_16_0 = &_dev_8;
DEVTREE_CONST void *const __pci_0_16_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_16_1 = &_dev_9;
DEVTREE_CONST void *const __pci_0_16_1_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_16_2 = &_dev_10;
DEVTREE_CONST void *const __pci_0_16_2_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_16_3 = &_dev_11;
DEVTREE_CONST void *const __pci_0_16_3_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_19_0 = &_dev_12;
DEVTREE_CONST void *const __pci_0_19_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1a_0 = &_dev_13;
DEVTREE_CONST void *const __pci_0_1a_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1b_0 = &_dev_14;
DEVTREE_CONST void *const __pci_0_1b_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_0 = &_dev_15;
DEVTREE_CONST void *const __pci_0_1c_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_1 = &_dev_16;
DEVTREE_CONST void *const __pci_0_1c_1_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_2 = &_dev_17;
DEVTREE_CONST void *const __pci_0_1c_2_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_3 = &_dev_18;
DEVTREE_CONST void *const __pci_0_1c_3_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_4 = &_dev_19;
DEVTREE_CONST void *const __pci_0_1c_4_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_5 = &_dev_20;
DEVTREE_CONST void *const __pci_0_1c_5_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_6 = &_dev_21;
DEVTREE_CONST void *const __pci_0_1c_6_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1c_7 = &_dev_22;
DEVTREE_CONST void *const __pci_0_1c_7_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1d_0 = &_dev_23;
DEVTREE_CONST void *const __pci_0_1d_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1e_0 = &_dev_24;
DEVTREE_CONST void *const __pci_0_1e_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1f_0 = &_dev_25;
DEVTREE_CONST void *const __pci_0_1f_0_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1f_2 = &_dev_26;
DEVTREE_CONST void *const __pci_0_1f_2_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1f_3 = &_dev_27;
DEVTREE_CONST void *const __pci_0_1f_3_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1f_5 = &_dev_28;
DEVTREE_CONST void *const __pci_0_1f_5_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pci_0_1f_6 = &_dev_29;
DEVTREE_CONST void *const __pci_0_1f_6_config = &southbridge_intel_bd82x6x_info_1;
DEVTREE_CONST struct device *const __pnp_00ff_01 = &_dev_31;
DEVTREE_CONST struct device *const __pnp_0c31_00 = &_dev_32;
DEVTREE_CONST struct device *const __pnp_00ff_02 = &_dev_33;
