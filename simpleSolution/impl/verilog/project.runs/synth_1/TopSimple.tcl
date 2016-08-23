# 
# Synthesis run script generated by Vivado
# 

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z020clg484-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/simpleSolution/impl/verilog/project.cache/wt [current_project]
set_property parent.project_path C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/simpleSolution/impl/verilog/project.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property vhdl_version vhdl_2k [current_fileset]
read_verilog -library xil_defaultlib {
  C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/simpleSolution/impl/verilog/TopSimple_AXILiteS_s_axi.v
  C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/simpleSolution/impl/verilog/TopSimple.v
}
read_xdc C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/simpleSolution/impl/verilog/TopSimple.xdc
set_property used_in_implementation false [get_files C:/Users/engrm_000/OneDrive/vivado_HLS/complexAdder/simpleSolution/impl/verilog/TopSimple.xdc]

synth_design -top TopSimple -part xc7z020clg484-1 -no_iobuf -mode out_of_context
write_checkpoint -noxdef TopSimple.dcp
catch { report_utilization -file TopSimple_utilization_synth.rpt -pb TopSimple_utilization_synth.pb }
