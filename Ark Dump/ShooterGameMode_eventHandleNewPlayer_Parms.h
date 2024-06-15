#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventHandleNewPlayer_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * NewPlayerField() { return GetNativePointerField<AShooterPlayerController *>(this, "ShooterGameMode_eventHandleNewPlayer_Parms.NewPlayer"); }
	UPrimalPlayerData * PlayerDataField() { return GetNativePointerField<UPrimalPlayerData *>(this, "ShooterGameMode_eventHandleNewPlayer_Parms.PlayerData"); }
	AShooterCharacter * PlayerCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "ShooterGameMode_eventHandleNewPlayer_Parms.PlayerCharacter"); }
	bool& bIsFromLoginField() { return *GetNativePointerField<bool*>(this, "ShooterGameMode_eventHandleNewPlayer_Parms.bIsFromLogin"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterGameMode_eventHandleNewPlayer_Parms.ReturnValue"); }
};

