#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventOnThrottledServerTick_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "MissionType_eventOnThrottledServerTick_Parms.DeltaTime"); }
};

