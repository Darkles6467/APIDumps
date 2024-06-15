#pragma once

#include "BaseDeclarations.h"
struct FAdminPlayerDataInfo
{
	char __padding[0x40L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.PlayerName"); }
	FString& PlayerSteamNameField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.PlayerSteamName"); }
	FString& SteamIDField() { return *GetNativePointerField<FString*>(this, "FAdminPlayerDataInfo.SteamID"); }
	__int64& LinkedPlayerIDField() { return *GetNativePointerField<__int64*>(this, "FAdminPlayerDataInfo.LinkedPlayerID"); }
	bool& IsHostField() { return *GetNativePointerField<bool*>(this, "FAdminPlayerDataInfo.IsHost"); }

	// Functions

	FAdminPlayerDataInfo * operator=(const FAdminPlayerDataInfo * __that) { return NativeCall<FAdminPlayerDataInfo *, const FAdminPlayerDataInfo *>(this, "FAdminPlayerDataInfo.operator=", __that); }
};

