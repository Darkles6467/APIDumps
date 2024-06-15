#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyRemotePlayerDeath_Parms
{
	char __padding[0x20L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientNotifyRemotePlayerDeath_Parms.PlayerName"); }
	FString& AttackerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientNotifyRemotePlayerDeath_Parms.AttackerName"); }

	// Functions

};

