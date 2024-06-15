#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestDownloadPlayerCharacter_Parms
{
	char __padding[0x128L];
	FArkTributePlayerData& DownloadedCharacterField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "ShooterPlayerController_eventServerRequestDownloadPlayerCharacter_Parms.DownloadedCharacter"); }
	int& spawnPointIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestDownloadPlayerCharacter_Parms.spawnPointID"); }
	int& spawnRegionIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestDownloadPlayerCharacter_Parms.spawnRegionIndex"); }
};

