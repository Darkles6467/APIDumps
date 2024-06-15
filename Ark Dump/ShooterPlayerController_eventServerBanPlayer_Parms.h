#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerBanPlayer_Parms
{
	char __padding[0x20L];
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerBanPlayer_Parms.PlayerSteamName"); }
	FString& PlayerSteamIDField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerBanPlayer_Parms.PlayerSteamID"); }

	// Functions

};

