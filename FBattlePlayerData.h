#pragma once

#include "BaseDeclarations.h"
struct FBattlePlayerData
{
	char __padding[0x20L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FBattlePlayerData.PlayerName"); }
	bool& bConnectedField() { return *GetNativePointerField<bool*>(this, "FBattlePlayerData.bConnected"); }
	bool& bAliveField() { return *GetNativePointerField<bool*>(this, "FBattlePlayerData.bAlive"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FBattlePlayerData.TribeID"); }
	int& PlayerIDField() { return *GetNativePointerField<int*>(this, "FBattlePlayerData.PlayerID"); }

	// Functions

	FBattlePlayerData * operator=(const FBattlePlayerData * __that) { return NativeCall<FBattlePlayerData *, const FBattlePlayerData *>(this, "FBattlePlayerData.operator=", __that); }
};

