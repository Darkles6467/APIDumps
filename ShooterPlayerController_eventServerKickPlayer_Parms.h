#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerKickPlayer_Parms
{
	char __padding[0x20L];
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerKickPlayer_Parms.PlayerSteamName"); }
	FString& PlayerSteamIDField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerKickPlayer_Parms.PlayerSteamID"); }

	// Functions

};

