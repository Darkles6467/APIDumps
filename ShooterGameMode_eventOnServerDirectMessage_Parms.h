#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventOnServerDirectMessage_Parms
{
	char __padding[0x38L];
	FString& PlayerSteamIDconstField() { return *GetNativePointerField<FString*>(this, "ShooterGameMode_eventOnServerDirectMessage_Parms.PlayerSteamIDconst"); }
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterGameMode_eventOnServerDirectMessage_Parms.MessageText"); }
	int& ReceiverTeamIdField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnServerDirectMessage_Parms.ReceiverTeamId"); }
	int& ReceiverPlayerIDField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnServerDirectMessage_Parms.ReceiverPlayerID"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "ShooterGameMode_eventOnServerDirectMessage_Parms.PlayerName"); }
};

