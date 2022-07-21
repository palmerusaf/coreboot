pragma Warnings (Off);
pragma Ada_95;
pragma Restrictions (No_Exception_Handlers);
with System;
package ramstage_adamain is

   procedure ramstage_adainit;
   pragma Export (C, ramstage_adainit, "ramstage_adainit");
   pragma Linker_Constructor (ramstage_adainit);

   type Version_32 is mod 2 ** 32;
   u00001 : constant Version_32 := 16#5a84eed7#;
   pragma Export (C, u00001, "hw__gfx__gma__configB");
   u00002 : constant Version_32 := 16#42f1fadf#;
   pragma Export (C, u00002, "hw__gfx__gma__configS");
   u00003 : constant Version_32 := 16#41ab3edb#;
   pragma Export (C, u00003, "hw__gfx__dp_aux_chB");
   u00004 : constant Version_32 := 16#55dabd2c#;
   pragma Export (C, u00004, "hw__gfx__dp_aux_chS");
   u00005 : constant Version_32 := 16#e2948386#;
   pragma Export (C, u00005, "hw__gfx__dp_defsS");
   u00006 : constant Version_32 := 16#743b7ed2#;
   pragma Export (C, u00006, "hw__gfx__dp_dual_modeB");
   u00007 : constant Version_32 := 16#e8e7bbc5#;
   pragma Export (C, u00007, "hw__gfx__dp_dual_modeS");
   u00008 : constant Version_32 := 16#a7984cb7#;
   pragma Export (C, u00008, "hw__gfx__dp_infoB");
   u00009 : constant Version_32 := 16#c43e61f3#;
   pragma Export (C, u00009, "hw__gfx__dp_infoS");
   u00010 : constant Version_32 := 16#85aed5af#;
   pragma Export (C, u00010, "hw__gfx__dp_trainingB");
   u00011 : constant Version_32 := 16#04b8a02d#;
   pragma Export (C, u00011, "hw__gfx__dp_trainingS");
   u00012 : constant Version_32 := 16#cd05dfd3#;
   pragma Export (C, u00012, "hw__gfx__edidB");
   u00013 : constant Version_32 := 16#4bdfd417#;
   pragma Export (C, u00013, "hw__gfx__edidS");
   u00014 : constant Version_32 := 16#e8d38bf2#;
   pragma Export (C, u00014, "hw__gfx__framebuffer_fillerB");
   u00015 : constant Version_32 := 16#cc363673#;
   pragma Export (C, u00015, "hw__gfx__framebuffer_fillerS");
   u00016 : constant Version_32 := 16#62ada891#;
   pragma Export (C, u00016, "hw__gfx__gma__config_helpersB");
   u00017 : constant Version_32 := 16#ac5b119b#;
   pragma Export (C, u00017, "hw__gfx__gma__config_helpersS");
   u00018 : constant Version_32 := 16#7707aa0f#;
   pragma Export (C, u00018, "hw__gfx__gma__connector_infoB");
   u00019 : constant Version_32 := 16#0c4e0f94#;
   pragma Export (C, u00019, "hw__gfx__gma__connector_infoS");
   u00020 : constant Version_32 := 16#98a4f8bd#;
   pragma Export (C, u00020, "hw__gfx__gma__display_probingB");
   u00021 : constant Version_32 := 16#29f308f2#;
   pragma Export (C, u00021, "hw__gfx__gma__display_probingS");
   u00022 : constant Version_32 := 16#53944791#;
   pragma Export (C, u00022, "hw__gfx__gma__dp_aux_chB");
   u00023 : constant Version_32 := 16#f7c06fc7#;
   pragma Export (C, u00023, "hw__gfx__gma__dp_aux_chS");
   u00024 : constant Version_32 := 16#02bdb23c#;
   pragma Export (C, u00024, "hw__gfx__gma__dp_aux_requestB");
   u00025 : constant Version_32 := 16#c6a79bd6#;
   pragma Export (C, u00025, "hw__gfx__gma__dp_aux_requestS");
   u00026 : constant Version_32 := 16#8fb53536#;
   pragma Export (C, u00026, "hw__gfx__gma__dp_dual_modeB");
   u00027 : constant Version_32 := 16#9482b171#;
   pragma Export (C, u00027, "hw__gfx__gma__dp_dual_modeS");
   u00028 : constant Version_32 := 16#38def494#;
   pragma Export (C, u00028, "hw__gfx__gma__dp_infoB");
   u00029 : constant Version_32 := 16#0f30aae5#;
   pragma Export (C, u00029, "hw__gfx__gma__dp_infoS");
   u00030 : constant Version_32 := 16#8e0b2a2e#;
   pragma Export (C, u00030, "hw__gfx__gma__i2cB");
   u00031 : constant Version_32 := 16#19545f9a#;
   pragma Export (C, u00031, "hw__gfx__gma__i2cS");
   u00032 : constant Version_32 := 16#e90c48e5#;
   pragma Export (C, u00032, "hw__gfx__gma__panelB");
   u00033 : constant Version_32 := 16#a9bc22a2#;
   pragma Export (C, u00033, "hw__gfx__gma__panelS");
   u00034 : constant Version_32 := 16#e4d5063b#;
   pragma Export (C, u00034, "hw__gfx__gma__pch__fdiB");
   u00035 : constant Version_32 := 16#9accaa52#;
   pragma Export (C, u00035, "hw__gfx__gma__pch__fdiS");
   u00036 : constant Version_32 := 16#e9a2fd02#;
   pragma Export (C, u00036, "hw__gfx__gma__pch__sidebandB");
   u00037 : constant Version_32 := 16#d9724cc9#;
   pragma Export (C, u00037, "hw__gfx__gma__pch__sidebandS");
   u00038 : constant Version_32 := 16#608f532f#;
   pragma Export (C, u00038, "hw__gfx__gma__pch__transcoderB");
   u00039 : constant Version_32 := 16#c8134541#;
   pragma Export (C, u00039, "hw__gfx__gma__pch__transcoderS");
   u00040 : constant Version_32 := 16#fac87257#;
   pragma Export (C, u00040, "hw__gfx__gma__pch__vgaB");
   u00041 : constant Version_32 := 16#65e1fddd#;
   pragma Export (C, u00041, "hw__gfx__gma__pch__vgaS");
   u00042 : constant Version_32 := 16#a42de5d0#;
   pragma Export (C, u00042, "hw__gfx__gma__pchS");
   u00043 : constant Version_32 := 16#7bbd4bba#;
   pragma Export (C, u00043, "hw__gfx__gma__pcodeB");
   u00044 : constant Version_32 := 16#cbf2e1ff#;
   pragma Export (C, u00044, "hw__gfx__gma__pcodeS");
   u00045 : constant Version_32 := 16#1edcbab0#;
   pragma Export (C, u00045, "hw__gfx__gma__pipe_setupB");
   u00046 : constant Version_32 := 16#20c3a602#;
   pragma Export (C, u00046, "hw__gfx__gma__pipe_setupS");
   u00047 : constant Version_32 := 16#5941de6f#;
   pragma Export (C, u00047, "hw__gfx__gma__registersB");
   u00048 : constant Version_32 := 16#ac5b0f3b#;
   pragma Export (C, u00048, "hw__gfx__gma__registersS");
   u00049 : constant Version_32 := 16#e653d8a2#;
   pragma Export (C, u00049, "hw__gfx__gma__transcoderB");
   u00050 : constant Version_32 := 16#4da477f3#;
   pragma Export (C, u00050, "hw__gfx__gma__transcoderS");
   u00051 : constant Version_32 := 16#1ba7acba#;
   pragma Export (C, u00051, "hw__gfx__gmaB");
   u00052 : constant Version_32 := 16#ccaf5330#;
   pragma Export (C, u00052, "hw__gfx__gmaS");
   u00053 : constant Version_32 := 16#37290eac#;
   pragma Export (C, u00053, "hw__gfx__i2cS");
   u00054 : constant Version_32 := 16#d263ba5b#;
   pragma Export (C, u00054, "hw__gfxS");
   u00055 : constant Version_32 := 16#2d942291#;
   pragma Export (C, u00055, "hw__gfx__gma__connectors__edpB");
   u00056 : constant Version_32 := 16#b70e0f24#;
   pragma Export (C, u00056, "hw__gfx__gma__connectors__edpS");
   u00057 : constant Version_32 := 16#63d8ecdf#;
   pragma Export (C, u00057, "hw__gfx__gma__connectors__fdiB");
   u00058 : constant Version_32 := 16#23b8d145#;
   pragma Export (C, u00058, "hw__gfx__gma__connectors__fdiS");
   u00059 : constant Version_32 := 16#80dc8ce4#;
   pragma Export (C, u00059, "hw__gfx__gma__connectorsB");
   u00060 : constant Version_32 := 16#ec83b2a0#;
   pragma Export (C, u00060, "hw__gfx__gma__connectorsS");
   u00061 : constant Version_32 := 16#0eb4a555#;
   pragma Export (C, u00061, "hw__gfx__gma__pch__dpB");
   u00062 : constant Version_32 := 16#54b4bee7#;
   pragma Export (C, u00062, "hw__gfx__gma__pch__dpS");
   u00063 : constant Version_32 := 16#2c9d0f61#;
   pragma Export (C, u00063, "hw__gfx__gma__pch__hdmiB");
   u00064 : constant Version_32 := 16#51ede2f1#;
   pragma Export (C, u00064, "hw__gfx__gma__pch__hdmiS");
   u00065 : constant Version_32 := 16#49e4aa9b#;
   pragma Export (C, u00065, "hw__gfx__gma__pch__lvdsB");
   u00066 : constant Version_32 := 16#038cf85f#;
   pragma Export (C, u00066, "hw__gfx__gma__pch__lvdsS");
   u00067 : constant Version_32 := 16#f6109c41#;
   pragma Export (C, u00067, "hw__gfx__gma__pllsB");
   u00068 : constant Version_32 := 16#07c6a0b0#;
   pragma Export (C, u00068, "hw__gfx__gma__pllsS");
   u00069 : constant Version_32 := 16#73787501#;
   pragma Export (C, u00069, "hw__gfx__gma__port_detectB");
   u00070 : constant Version_32 := 16#41c04848#;
   pragma Export (C, u00070, "hw__gfx__gma__port_detectS");
   u00071 : constant Version_32 := 16#393f00e3#;
   pragma Export (C, u00071, "hw__gfx__gma__power_and_clocksB");
   u00072 : constant Version_32 := 16#e1f8fbf5#;
   pragma Export (C, u00072, "hw__gfx__gma__power_and_clocksS");
   u00073 : constant Version_32 := 16#94b5b62b#;
   pragma Export (C, u00073, "hw__mmio_rangeB");
   u00074 : constant Version_32 := 16#ce9421df#;
   pragma Export (C, u00074, "hw__mmio_rangeS");
   u00075 : constant Version_32 := 16#ce716a67#;
   pragma Export (C, u00075, "hw__pci__devB");
   u00076 : constant Version_32 := 16#19713f06#;
   pragma Export (C, u00076, "hw__pci__devS");
   u00077 : constant Version_32 := 16#ff7aacc6#;
   pragma Export (C, u00077, "hw__mmio_regsB");
   u00078 : constant Version_32 := 16#f8568111#;
   pragma Export (C, u00078, "hw__mmio_regsS");
   u00079 : constant Version_32 := 16#d9a1d01d#;
   pragma Export (C, u00079, "hw__pci__mmconfB");
   u00080 : constant Version_32 := 16#1638822d#;
   pragma Export (C, u00080, "hw__pci__mmconfS");
   u00081 : constant Version_32 := 16#e63e29d4#;
   pragma Export (C, u00081, "hw__pciS");
   u00082 : constant Version_32 := 16#edda6f07#;
   pragma Export (C, u00082, "hw__port_ioB");
   u00083 : constant Version_32 := 16#7678d008#;
   pragma Export (C, u00083, "hw__port_ioS");
   u00084 : constant Version_32 := 16#ab5919c7#;
   pragma Export (C, u00084, "hw__sub_regsS");
   u00085 : constant Version_32 := 16#2ce84eaa#;
   pragma Export (C, u00085, "hw__timeB");
   u00086 : constant Version_32 := 16#ac96429c#;
   pragma Export (C, u00086, "hw__timeS");
   u00087 : constant Version_32 := 16#bd96d023#;
   pragma Export (C, u00087, "hwS");
   u00088 : constant Version_32 := 16#ef0875fc#;
   pragma Export (C, u00088, "hw__debugB");
   u00089 : constant Version_32 := 16#27b64be9#;
   pragma Export (C, u00089, "hw__debugS");
   u00090 : constant Version_32 := 16#09662dc7#;
   pragma Export (C, u00090, "hw__configS");
   u00091 : constant Version_32 := 16#5ebdb3aa#;
   pragma Export (C, u00091, "hw__debug_sinkB");
   u00092 : constant Version_32 := 16#1b7207ae#;
   pragma Export (C, u00092, "hw__debug_sinkS");
   u00093 : constant Version_32 := 16#bc33d79b#;
   pragma Export (C, u00093, "gmaB");
   u00094 : constant Version_32 := 16#f765cb3d#;
   pragma Export (C, u00094, "gmaS");
   u00095 : constant Version_32 := 16#eb4412d6#;
   pragma Export (C, u00095, "gma__gfx_initB");
   u00096 : constant Version_32 := 16#cd05678f#;
   pragma Export (C, u00096, "gma__gfx_initS");
   u00097 : constant Version_32 := 16#e6df39c3#;
   pragma Export (C, u00097, "cbS");
   u00098 : constant Version_32 := 16#6fbaf8d3#;
   pragma Export (C, u00098, "hw__time__timerB");
   u00099 : constant Version_32 := 16#3e460172#;
   pragma Export (C, u00099, "hw__time__timerS");
   u00100 : constant Version_32 := 16#1bc9461c#;
   pragma Export (C, u00100, "gma__mainboardS");
   u00101 : constant Version_32 := 16#64a0cfff#;
   pragma Export (C, u00101, "cb__configS");

   --  BEGIN ELABORATION ORDER
   --  ada%s
   --  gnat%s
   --  gnat.source_info%s
   --  interfaces%s
   --  system%s
   --  system.machine_code%s
   --  system.parameters%s
   --  interfaces.c%s
   --  interfaces.c%b
   --  system.storage_elements%s
   --  system.storage_elements%b
   --  system.unsigned_types%s
   --  cb%s
   --  cb.config%s
   --  hw%s
   --  hw.config%s
   --  hw.debug_sink%s
   --  hw.debug_sink%b
   --  hw.gfx%s
   --  hw.gfx.dp_defs%s
   --  hw.gfx.i2c%s
   --  hw.pci%s
   --  hw.port_io%s
   --  hw.port_io%b
   --  hw.sub_regs%s
   --  hw.time%s
   --  hw.time.timer%s
   --  hw.time.timer%b
   --  hw.time%b
   --  hw.debug%s
   --  hw.debug%b
   --  hw.gfx.dp_aux_ch%s
   --  hw.gfx.dp_aux_ch%b
   --  hw.gfx.dp_dual_mode%s
   --  hw.gfx.dp_dual_mode%b
   --  hw.gfx.dp_info%s
   --  hw.gfx.dp_info%b
   --  hw.gfx.dp_training%s
   --  hw.gfx.dp_training%b
   --  hw.gfx.edid%s
   --  hw.gfx.edid%b
   --  hw.mmio_range%s
   --  hw.mmio_range%b
   --  hw.gfx.framebuffer_filler%s
   --  hw.gfx.framebuffer_filler%b
   --  hw.mmio_regs%s
   --  hw.mmio_regs%b
   --  hw.pci.mmconf%s
   --  hw.pci.mmconf%b
   --  hw.pci.dev%s
   --  hw.pci.dev%b
   --  hw.gfx.gma%s
   --  hw.gfx.gma.config%s
   --  hw.gfx.gma.config%b
   --  hw.gfx.gma.config_helpers%s
   --  hw.gfx.gma.connector_info%s
   --  hw.gfx.gma.connectors%s
   --  hw.gfx.gma.connectors.edp%s
   --  hw.gfx.gma.dp_aux_request%s
   --  hw.gfx.gma.dp_aux_ch%s
   --  hw.gfx.gma.dp_aux_ch%b
   --  hw.gfx.gma.dp_dual_mode%s
   --  hw.gfx.gma.dp_dual_mode%b
   --  hw.gfx.gma.dp_info%s
   --  hw.gfx.gma.dp_info%b
   --  hw.gfx.gma.pch%s
   --  hw.gfx.gma.connectors.fdi%s
   --  hw.gfx.gma.pch.dp%s
   --  hw.gfx.gma.pch.fdi%s
   --  hw.gfx.gma.pch.hdmi%s
   --  hw.gfx.gma.pch.lvds%s
   --  hw.gfx.gma.pch.sideband%s
   --  hw.gfx.gma.pch.transcoder%s
   --  hw.gfx.gma.pch.vga%s
   --  hw.gfx.gma.plls%s
   --  hw.gfx.gma.port_detect%s
   --  hw.gfx.gma.power_and_clocks%s
   --  hw.gfx.gma.registers%s
   --  hw.gfx.gma.registers%b
   --  hw.gfx.gma.config_helpers%b
   --  hw.gfx.gma.connectors.edp%b
   --  hw.gfx.gma.connectors.fdi%b
   --  hw.gfx.gma.dp_aux_request%b
   --  hw.gfx.gma.panel%s
   --  hw.gfx.gma.panel%b
   --  hw.gfx.gma.connector_info%b
   --  hw.gfx.gma.connectors%b
   --  hw.gfx.gma.pch.dp%b
   --  hw.gfx.gma.pch.fdi%b
   --  hw.gfx.gma.pch.hdmi%b
   --  hw.gfx.gma.pch.lvds%b
   --  hw.gfx.gma.pch.sideband%b
   --  hw.gfx.gma.pch.transcoder%b
   --  hw.gfx.gma.pch.vga%b
   --  hw.gfx.gma.pcode%s
   --  hw.gfx.gma.pcode%b
   --  hw.gfx.gma.pipe_setup%s
   --  hw.gfx.gma%b
   --  hw.gfx.gma.plls%b
   --  hw.gfx.gma.port_detect%b
   --  hw.gfx.gma.power_and_clocks%b
   --  hw.gfx.gma.transcoder%s
   --  hw.gfx.gma.transcoder%b
   --  hw.gfx.gma.pipe_setup%b
   --  hw.gfx.gma.i2c%s
   --  hw.gfx.gma.i2c%b
   --  hw.gfx.gma.display_probing%s
   --  hw.gfx.gma.display_probing%b
   --  gma%s
   --  gma%b
   --  gma.mainboard%s
   --  gma.gfx_init%s
   --  gma.gfx_init%b
   --  END ELABORATION ORDER

end ramstage_adamain;
