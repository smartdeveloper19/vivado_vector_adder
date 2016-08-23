# 
# Synthesis run script generated by Vivado
# 

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z020clg484-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/project.cache/wt [current_project]
set_property parent.project_path C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/project.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language VHDL [current_project]
set_property vhdl_version vhdl_2k [current_fileset]
read_ip c:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/project.srcs/sources_1/ip/complexDoubleAdder_ap_dadd_3_full_dsp_64/complexDoubleAdder_ap_dadd_3_full_dsp_64.xci
set_property is_locked true [get_files c:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/project.srcs/sources_1/ip/complexDoubleAdder_ap_dadd_3_full_dsp_64/complexDoubleAdder_ap_dadd_3_full_dsp_64.xci]

read_vhdl -library xil_defaultlib {
  C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/complexDoubleAdder_AXILiteS_s_axi.vhd
  C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/complexDoubleAdder_dadd_64ns_64ns_64_5_full_dsp.vhd
  C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/complexDoubleAdder.vhd
}
read_xdc C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/complexDoubleAdder.xdc
set_property used_in_implementation false [get_files C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/compleDoubleAdder/impl/vhdl/complexDoubleAdder.xdc]

read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
synth_design -top complexDoubleAdder -part xc7z020clg484-1 -no_iobuf -mode out_of_context
write_checkpoint -noxdef complexDoubleAdder.dcp
catch { report_utilization -file complexDoubleAdder_utilization_synth.rpt -pb complexDoubleAdder_utilization_synth.pb }
