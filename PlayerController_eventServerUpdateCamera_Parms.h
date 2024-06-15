#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerUpdateCamera_Parms
{
	char __padding[0x10L];
	FVector_NetQuantize& CamLocField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "PlayerController_eventServerUpdateCamera_Parms.CamLoc"); }
	int& CamPitchAndYawField() { return *GetNativePointerField<int*>(this, "PlayerController_eventServerUpdateCamera_Parms.CamPitchAndYaw"); }
};

