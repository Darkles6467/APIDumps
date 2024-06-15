#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventBPAdjustTemperature_Parms
{
	char __padding[0x30L];
	float& TemperatureInField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventBPAdjustTemperature_Parms.TemperatureIn"); }
	ABiomeZoneVolume * biomeZoneVolumeField() { return GetNativePointerField<ABiomeZoneVolume *>(this, "DayCycleManager_eventBPAdjustTemperature_Parms.biomeZoneVolume"); }
	FVector& AtLocationField() { return *GetNativePointerField<FVector*>(this, "DayCycleManager_eventBPAdjustTemperature_Parms.AtLocation"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventBPAdjustTemperature_Parms.ReturnValue"); }

	// Functions

};

