#pragma once

#include "BaseDeclarations.h"
struct CM_Power_Data_s
{
	char __padding[0x38L];
	unsigned int& PD_SizeField() { return *GetNativePointerField<unsigned int*>(this, "CM_Power_Data_s.PD_Size"); }
	_DEVICE_POWER_STATE& PD_MostRecentPowerStateField() { return *GetNativePointerField<_DEVICE_POWER_STATE*>(this, "CM_Power_Data_s.PD_MostRecentPowerState"); }
	unsigned int& PD_CapabilitiesField() { return *GetNativePointerField<unsigned int*>(this, "CM_Power_Data_s.PD_Capabilities"); }
	unsigned int& PD_D1LatencyField() { return *GetNativePointerField<unsigned int*>(this, "CM_Power_Data_s.PD_D1Latency"); }
	unsigned int& PD_D2LatencyField() { return *GetNativePointerField<unsigned int*>(this, "CM_Power_Data_s.PD_D2Latency"); }
	unsigned int& PD_D3LatencyField() { return *GetNativePointerField<unsigned int*>(this, "CM_Power_Data_s.PD_D3Latency"); }
	FieldArray<_DEVICE_POWER_STATE, 7> PD_PowerStateMappingField() { return {this, "CM_Power_Data_s.PD_PowerStateMapping"}; }
	_SYSTEM_POWER_STATE& PD_DeepestSystemWakeField() { return *GetNativePointerField<_SYSTEM_POWER_STATE*>(this, "CM_Power_Data_s.PD_DeepestSystemWake"); }
};

