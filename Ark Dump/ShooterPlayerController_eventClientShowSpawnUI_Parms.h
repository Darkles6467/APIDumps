#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientShowSpawnUI_Parms
{
	char __padding[0x4L];
	float& DelayField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientShowSpawnUI_Parms.Delay"); }
};

