#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventNotifyPlayerJoinedTribe_Parms
{
	char __padding[0x20L];
	FString& ThePlayerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyPlayerJoinedTribe_Parms.ThePlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyPlayerJoinedTribe_Parms.TribeName"); }

	// Functions

};

