#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerReleaseGrapHookCable_Parms
{
	char __padding[0x1L];
	bool& bReleasingField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerReleaseGrapHookCable_Parms.bReleasing"); }
};

