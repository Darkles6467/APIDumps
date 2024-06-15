#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSendDirectMessage_Parms
{
	char __padding[0x20L];
	FString& PlayerSteamIDField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSendDirectMessage_Parms.PlayerSteamID"); }
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSendDirectMessage_Parms.Message"); }

	// Functions

};

