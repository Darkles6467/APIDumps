#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestRespawnAtPoint_Parms
{
	char __padding[0x8L];
	int& spawnPointIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestRespawnAtPoint_Parms.spawnPointID"); }
	int& spawnRegionIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestRespawnAtPoint_Parms.spawnRegionIndex"); }
};

