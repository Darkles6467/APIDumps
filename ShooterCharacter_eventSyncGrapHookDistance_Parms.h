#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventSyncGrapHookDistance_Parms
{
	char __padding[0x4L];
	float& DistanceField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventSyncGrapHookDistance_Parms.Distance"); }
};

