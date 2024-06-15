#pragma once

#include "BaseDeclarations.h"
struct FAlivePlayerDataInfo
{
	char __padding[0x40L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.PlayerName"); }
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.PlayerSteamName"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAlivePlayerDataInfo.PlayerID"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FAlivePlayerDataInfo.TribeName"); }
	unsigned __int64& TargetingTeamIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAlivePlayerDataInfo.TargetingTeamID"); }

	// Functions

	FAlivePlayerDataInfo * operator=(const FAlivePlayerDataInfo * __that) { return NativeCall<FAlivePlayerDataInfo *, const FAlivePlayerDataInfo *>(this, "FAlivePlayerDataInfo.operator=", __that); }
};

