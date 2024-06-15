#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventGetDeepWaterStartZ_Parms
{
	char __padding[0x10L];
	FVector& AtLocationField() { return *GetNativePointerField<FVector*>(this, "DayCycleManager_eventGetDeepWaterStartZ_Parms.AtLocation"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventGetDeepWaterStartZ_Parms.ReturnValue"); }
};

