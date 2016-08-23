// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XTOPADDER_H
#define XTOPADDER_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xtopadder_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XTopadder_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XTopadder;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XTopadder_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XTopadder_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XTopadder_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XTopadder_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XTopadder_Initialize(XTopadder *InstancePtr, u16 DeviceId);
XTopadder_Config* XTopadder_LookupConfig(u16 DeviceId);
int XTopadder_CfgInitialize(XTopadder *InstancePtr, XTopadder_Config *ConfigPtr);
#else
int XTopadder_Initialize(XTopadder *InstancePtr, const char* InstanceName);
int XTopadder_Release(XTopadder *InstancePtr);
#endif

void XTopadder_Start(XTopadder *InstancePtr);
u32 XTopadder_IsDone(XTopadder *InstancePtr);
u32 XTopadder_IsIdle(XTopadder *InstancePtr);
u32 XTopadder_IsReady(XTopadder *InstancePtr);
void XTopadder_EnableAutoRestart(XTopadder *InstancePtr);
void XTopadder_DisableAutoRestart(XTopadder *InstancePtr);
u32 XTopadder_Get_return(XTopadder *InstancePtr);

u32 XTopadder_Get_output_M_real_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_real_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_real_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_real_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_real_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_output_M_real_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_output_M_real_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_output_M_real_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_output_M_real_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_output_M_imag_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_imag_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_imag_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_imag_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_output_M_imag_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_output_M_imag_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_output_M_imag_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_output_M_imag_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_output_M_imag_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input1_M_real_0_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_0_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_0_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_0_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_0_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input1_M_real_0_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input1_M_real_0_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input1_M_real_0_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input1_M_real_0_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input1_M_real_1_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_1_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_1_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_1_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_1_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input1_M_real_1_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input1_M_real_1_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input1_M_real_1_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input1_M_real_1_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input1_M_real_2_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_2_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_2_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_2_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_real_2_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input1_M_real_2_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input1_M_real_2_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input1_M_real_2_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input1_M_real_2_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input1_M_imag_0_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_0_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_0_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_0_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_0_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input1_M_imag_0_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input1_M_imag_0_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input1_M_imag_0_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input1_M_imag_0_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input1_M_imag_1_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_1_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_1_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_1_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_1_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input1_M_imag_1_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input1_M_imag_1_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input1_M_imag_1_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input1_M_imag_1_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input1_M_imag_2_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_2_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_2_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_2_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input1_M_imag_2_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input1_M_imag_2_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input1_M_imag_2_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input1_M_imag_2_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input1_M_imag_2_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input2_M_real_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_real_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_real_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_real_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_real_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input2_M_real_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input2_M_real_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input2_M_real_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input2_M_real_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Get_input2_M_imag_BaseAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_imag_HighAddress(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_imag_TotalBytes(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_imag_BitWidth(XTopadder *InstancePtr);
u32 XTopadder_Get_input2_M_imag_Depth(XTopadder *InstancePtr);
u32 XTopadder_Write_input2_M_imag_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Read_input2_M_imag_Words(XTopadder *InstancePtr, int offset, int *data, int length);
u32 XTopadder_Write_input2_M_imag_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);
u32 XTopadder_Read_input2_M_imag_Bytes(XTopadder *InstancePtr, int offset, char *data, int length);

void XTopadder_InterruptGlobalEnable(XTopadder *InstancePtr);
void XTopadder_InterruptGlobalDisable(XTopadder *InstancePtr);
void XTopadder_InterruptEnable(XTopadder *InstancePtr, u32 Mask);
void XTopadder_InterruptDisable(XTopadder *InstancePtr, u32 Mask);
void XTopadder_InterruptClear(XTopadder *InstancePtr, u32 Mask);
u32 XTopadder_InterruptGetEnabled(XTopadder *InstancePtr);
u32 XTopadder_InterruptGetStatus(XTopadder *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
