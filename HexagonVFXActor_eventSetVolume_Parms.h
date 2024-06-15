#pragma once

#include "BaseDeclarations.h"
struct HexagonVFXActor_eventSetVolume_Parms
{
	char __padding[0x4L];
	float& NewVolumeField() { return *GetNativePointerField<float*>(this, "HexagonVFXActor_eventSetVolume_Parms.NewVolume"); }
};

