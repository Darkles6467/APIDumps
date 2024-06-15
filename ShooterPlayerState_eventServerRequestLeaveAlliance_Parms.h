#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestLeaveAlliance_Parms
{
	char __padding[0x4L];
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerState_eventServerRequestLeaveAlliance_Parms.AllianceID"); }
};

