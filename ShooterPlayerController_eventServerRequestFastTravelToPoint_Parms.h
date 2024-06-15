#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestFastTravelToPoint_Parms
{
	char __padding[0x8L];
	int& fromSpawnPointIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestFastTravelToPoint_Parms.fromSpawnPointID"); }
	int& spawnPointIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestFastTravelToPoint_Parms.spawnPointID"); }
};

