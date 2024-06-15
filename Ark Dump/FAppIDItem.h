#pragma once

#include "BaseDeclarations.h"
struct FAppIDItem
{
	char __padding[0x60L];
	FString& AchievementIDField() { return *GetNativePointerField<FString*>(this, "FAppIDItem.AchievementID"); }
	TArray<FString>& AchievementIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAppIDItem.AchievementIDs"); }
	FName& GiveItemIfEmoteNameUnlockedField() { return *GetNativePointerField<FName*>(this, "FAppIDItem.GiveItemIfEmoteNameUnlocked"); }
	int& AppIDField() { return *GetNativePointerField<int*>(this, "FAppIDItem.AppID"); }
	int& PlayerBadgeGroupField() { return *GetNativePointerField<int*>(this, "FAppIDItem.PlayerBadgeGroup"); }
	bool& bForceNewDefaultCosmeticField() { return *GetNativePointerField<bool*>(this, "FAppIDItem.bForceNewDefaultCosmetic"); }
	TArray<FString>& PlayerIDStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAppIDItem.PlayerIDStrings"); }

	// Functions

	FAppIDItem * operator=(const FAppIDItem * __that) { return NativeCall<FAppIDItem *, const FAppIDItem *>(this, "FAppIDItem.operator=", __that); }
};

