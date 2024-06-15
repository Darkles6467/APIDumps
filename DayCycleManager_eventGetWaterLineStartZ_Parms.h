#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventGetWaterLineStartZ_Parms
{
	char __padding[0x10L];
	FVector& AtLocationField() { return *GetNativePointerField<FVector*>(this, "DayCycleManager_eventGetWaterLineStartZ_Parms.AtLocation"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventGetWaterLineStartZ_Parms.ReturnValue"); }
};

