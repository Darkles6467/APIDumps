#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSpectateToPlayerByID_Parms
{
	char __padding[0x8L];
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventServerSpectateToPlayerByID_Parms.PlayerID"); }
};

