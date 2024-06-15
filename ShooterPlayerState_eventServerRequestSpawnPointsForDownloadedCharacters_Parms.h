#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestSpawnPointsForDownloadedCharacters_Parms
{
	char __padding[0x10L];
	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerState_eventServerRequestSpawnPointsForDownloadedCharacters_Parms.PlayerDataID"); }
	int& IgnoreBedIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestSpawnPointsForDownloadedCharacters_Parms.IgnoreBedID"); }
};

