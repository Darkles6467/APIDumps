#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSetVRPlayer_Parms
{
	char __padding[0x1L];
	bool& bSetVRPlayerField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerSetVRPlayer_Parms.bSetVRPlayer"); }
};

