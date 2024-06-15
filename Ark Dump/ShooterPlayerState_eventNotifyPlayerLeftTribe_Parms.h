#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventNotifyPlayerLeftTribe_Parms
{
	char __padding[0x20L];
	FString& ThePlayerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyPlayerLeftTribe_Parms.ThePlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyPlayerLeftTribe_Parms.TribeName"); }

	// Functions

};

