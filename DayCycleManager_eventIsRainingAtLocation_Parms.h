#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventIsRainingAtLocation_Parms
{
	char __padding[0x10L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "DayCycleManager_eventIsRainingAtLocation_Parms.Location"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "DayCycleManager_eventIsRainingAtLocation_Parms.ReturnValue"); }
};

