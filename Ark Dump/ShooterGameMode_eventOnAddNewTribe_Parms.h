#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventOnAddNewTribe_Parms
{
	char __padding[0x30L];
	AShooterPlayerState * PlayerOwnerField() { return GetNativePointerField<AShooterPlayerState *>(this, "ShooterGameMode_eventOnAddNewTribe_Parms.PlayerOwner"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "ShooterGameMode_eventOnAddNewTribe_Parms.TribeName"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "ShooterGameMode_eventOnAddNewTribe_Parms.TribeGovernment"); }
};

