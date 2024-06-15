#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestMySpawnPoints_Parms
{
	char __padding[0x10L];
	int& IgnoreBedIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestMySpawnPoints_Parms.IgnoreBedID"); }
};

