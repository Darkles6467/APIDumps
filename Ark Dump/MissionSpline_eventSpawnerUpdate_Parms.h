#pragma once

#include "BaseDeclarations.h"
struct MissionSpline_eventSpawnerUpdate_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "MissionSpline_eventSpawnerUpdate_Parms.DeltaTime"); }
};

