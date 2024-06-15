#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerDownloadTransferredPlayer_Parms
{
	char __padding[0x8L];
	int& spawnPointIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerDownloadTransferredPlayer_Parms.spawnPointID"); }
	int& spawnPointRegionIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerDownloadTransferredPlayer_Parms.spawnPointRegionIndex"); }
};

