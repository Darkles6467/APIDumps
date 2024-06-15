#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventOnThrottledTick_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "MissionType_eventOnThrottledTick_Parms.DeltaTime"); }
};

