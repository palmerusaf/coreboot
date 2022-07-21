pragma Warnings (Off);
pragma Ada_95;
pragma Source_File_Name (ramstage_adamain, Spec_File_Name => "b__ramstage.ads");
pragma Source_File_Name (ramstage_adamain, Body_File_Name => "b__ramstage.adb");
pragma Suppress (Overflow_Check);

package body ramstage_adamain is

   E092 : Short_Integer; pragma Import (Ada, E092, "hw__debug_sink_E");
   E083 : Short_Integer; pragma Import (Ada, E083, "hw__port_io_E");
   E086 : Short_Integer; pragma Import (Ada, E086, "hw__time_E");
   E099 : Short_Integer; pragma Import (Ada, E099, "hw__time__timer_E");
   E089 : Short_Integer; pragma Import (Ada, E089, "hw__debug_E");
   E004 : Short_Integer; pragma Import (Ada, E004, "hw__gfx__dp_aux_ch_E");
   E007 : Short_Integer; pragma Import (Ada, E007, "hw__gfx__dp_dual_mode_E");
   E009 : Short_Integer; pragma Import (Ada, E009, "hw__gfx__dp_info_E");
   E011 : Short_Integer; pragma Import (Ada, E011, "hw__gfx__dp_training_E");
   E013 : Short_Integer; pragma Import (Ada, E013, "hw__gfx__edid_E");
   E074 : Short_Integer; pragma Import (Ada, E074, "hw__mmio_range_E");
   E015 : Short_Integer; pragma Import (Ada, E015, "hw__gfx__framebuffer_filler_E");
   E078 : Short_Integer; pragma Import (Ada, E078, "hw__mmio_regs_E");
   E080 : Short_Integer; pragma Import (Ada, E080, "hw__pci__mmconf_E");
   E076 : Short_Integer; pragma Import (Ada, E076, "hw__pci__dev_E");
   E052 : Short_Integer; pragma Import (Ada, E052, "hw__gfx__gma_E");
   E002 : Short_Integer; pragma Import (Ada, E002, "hw__gfx__gma__config_E");
   E017 : Short_Integer; pragma Import (Ada, E017, "hw__gfx__gma__config_helpers_E");
   E019 : Short_Integer; pragma Import (Ada, E019, "hw__gfx__gma__connector_info_E");
   E060 : Short_Integer; pragma Import (Ada, E060, "hw__gfx__gma__connectors_E");
   E056 : Short_Integer; pragma Import (Ada, E056, "hw__gfx__gma__connectors__edp_E");
   E025 : Short_Integer; pragma Import (Ada, E025, "hw__gfx__gma__dp_aux_request_E");
   E058 : Short_Integer; pragma Import (Ada, E058, "hw__gfx__gma__connectors__fdi_E");
   E062 : Short_Integer; pragma Import (Ada, E062, "hw__gfx__gma__pch__dp_E");
   E035 : Short_Integer; pragma Import (Ada, E035, "hw__gfx__gma__pch__fdi_E");
   E064 : Short_Integer; pragma Import (Ada, E064, "hw__gfx__gma__pch__hdmi_E");
   E066 : Short_Integer; pragma Import (Ada, E066, "hw__gfx__gma__pch__lvds_E");
   E037 : Short_Integer; pragma Import (Ada, E037, "hw__gfx__gma__pch__sideband_E");
   E039 : Short_Integer; pragma Import (Ada, E039, "hw__gfx__gma__pch__transcoder_E");
   E041 : Short_Integer; pragma Import (Ada, E041, "hw__gfx__gma__pch__vga_E");
   E068 : Short_Integer; pragma Import (Ada, E068, "hw__gfx__gma__plls_E");
   E070 : Short_Integer; pragma Import (Ada, E070, "hw__gfx__gma__port_detect_E");
   E072 : Short_Integer; pragma Import (Ada, E072, "hw__gfx__gma__power_and_clocks_E");
   E048 : Short_Integer; pragma Import (Ada, E048, "hw__gfx__gma__registers_E");
   E033 : Short_Integer; pragma Import (Ada, E033, "hw__gfx__gma__panel_E");
   E044 : Short_Integer; pragma Import (Ada, E044, "hw__gfx__gma__pcode_E");
   E046 : Short_Integer; pragma Import (Ada, E046, "hw__gfx__gma__pipe_setup_E");
   E050 : Short_Integer; pragma Import (Ada, E050, "hw__gfx__gma__transcoder_E");
   E031 : Short_Integer; pragma Import (Ada, E031, "hw__gfx__gma__i2c_E");
   E021 : Short_Integer; pragma Import (Ada, E021, "hw__gfx__gma__display_probing_E");
   E094 : Short_Integer; pragma Import (Ada, E094, "gma_E");
   E096 : Short_Integer; pragma Import (Ada, E096, "gma__gfx_init_E");


   procedure ramstage_adainit is
   begin
      null;

      E092 := E092 + 1;
      E083 := E083 + 1;
      E099 := E099 + 1;
      E086 := E086 + 1;
      E089 := E089 + 1;
      E004 := E004 + 1;
      E007 := E007 + 1;
      E009 := E009 + 1;
      E011 := E011 + 1;
      E013 := E013 + 1;
      E074 := E074 + 1;
      E015 := E015 + 1;
      E078 := E078 + 1;
      E080 := E080 + 1;
      E076 := E076 + 1;
      E002 := E002 + 1;
      E048 := E048 + 1;
      E017 := E017 + 1;
      E056 := E056 + 1;
      E058 := E058 + 1;
      E025 := E025 + 1;
      E033 := E033 + 1;
      E019 := E019 + 1;
      E060 := E060 + 1;
      E062 := E062 + 1;
      E035 := E035 + 1;
      E064 := E064 + 1;
      E066 := E066 + 1;
      E037 := E037 + 1;
      E039 := E039 + 1;
      E041 := E041 + 1;
      E044 := E044 + 1;
      if E052 = 0 then
         HW.GFX.GMA'ELAB_BODY;
      end if;
      E052 := E052 + 1;
      E068 := E068 + 1;
      E070 := E070 + 1;
      E072 := E072 + 1;
      if E050 = 0 then
         HW.GFX.GMA.TRANSCODER'ELAB_SPEC;
      end if;
      E050 := E050 + 1;
      E046 := E046 + 1;
      E031 := E031 + 1;
      E021 := E021 + 1;
      E094 := E094 + 1;
      E096 := E096 + 1;
   end ramstage_adainit;

--  BEGIN Object file/option list
   --   lib/cb.o
   --   ./cb-config.o
   --   libhwbase/common/hw.o
   --   libhwbase/common/hw-config.o
   --   console/hw-debug_sink.o
   --   libgfxinit/common/hw-gfx.o
   --   libgfxinit/common/hw-gfx-dp_defs.o
   --   libgfxinit/common/hw-gfx-i2c.o
   --   libhwbase/common/hw-pci.o
   --   libhwbase/common/hw-port_io.o
   --   libhwbase/common/hw-sub_regs.o
   --   lib/hw-time-timer.o
   --   libhwbase/common/hw-time.o
   --   libhwbase/debug/hw-debug.o
   --   libgfxinit/common/hw-gfx-dp_aux_ch.o
   --   libgfxinit/common/hw-gfx-dp_dual_mode.o
   --   libgfxinit/common/hw-gfx-dp_info.o
   --   libgfxinit/common/hw-gfx-dp_training.o
   --   libgfxinit/common/hw-gfx-edid.o
   --   libhwbase/ada/dynamic_mmio/hw-mmio_range.o
   --   libgfxinit/common/hw-gfx-framebuffer_filler.o
   --   libhwbase/common/hw-mmio_regs.o
   --   libhwbase/common/hw-pci-mmconf.o
   --   libhwbase/common/direct/hw-pci-dev.o
   --   libgfxinit/common/dyncpu/hw-gfx-gma-config.o
   --   libgfxinit/common/hw-gfx-gma-dp_aux_ch.o
   --   libgfxinit/common/hw-gfx-gma-dp_dual_mode.o
   --   libgfxinit/common/hw-gfx-gma-dp_info.o
   --   libgfxinit/common/hw-gfx-gma-pch.o
   --   libgfxinit/common/hw-gfx-gma-registers.o
   --   libgfxinit/common/hw-gfx-gma-config_helpers.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-connectors-edp.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-connectors-fdi.o
   --   libgfxinit/common/hw-gfx-gma-dp_aux_request.o
   --   libgfxinit/common/hw-gfx-gma-panel.o
   --   libgfxinit/common/hw-gfx-gma-connector_info.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-connectors.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-pch-dp.o
   --   libgfxinit/common/hw-gfx-gma-pch-fdi.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-pch-hdmi.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-pch-lvds.o
   --   libgfxinit/common/hw-gfx-gma-pch-sideband.o
   --   libgfxinit/common/hw-gfx-gma-pch-transcoder.o
   --   libgfxinit/common/hw-gfx-gma-pch-vga.o
   --   libgfxinit/common/hw-gfx-gma-pcode.o
   --   libgfxinit/common/hw-gfx-gma.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-plls.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-port_detect.o
   --   libgfxinit/common/ironlake/hw-gfx-gma-power_and_clocks.o
   --   libgfxinit/common/hw-gfx-gma-transcoder.o
   --   libgfxinit/common/hw-gfx-gma-pipe_setup.o
   --   libgfxinit/common/hw-gfx-gma-i2c.o
   --   libgfxinit/common/hw-gfx-gma-display_probing.o
   --   drivers/intel/gma/gma.o
   --   mainboard/lenovo/x230/variants/x230/gma-mainboard.o
   --   drivers/intel/gma/text_fb/gma-gfx_init.o
   --   -L./
   --   -L/home/brandenpalmer/coreboot/build/libgnat-x86_32/adalib/
   --   -static
   --   -lgnat
--  END Object file/option list   

end ramstage_adamain;
