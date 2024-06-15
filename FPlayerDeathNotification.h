#pragma once

#include "BaseDeclarations.h"
struct FPlayerDeathNotification
{
	char __padding[0x88L];
	FString& PlayerDeathStringEnemyField() { return *GetNativePointerField<FString*>(this, "FPlayerDeathNotification.PlayerDeathStringEnemy"); }
	FString& PlayerDeathStringAllyField() { return *GetNativePointerField<FString*>(this, "FPlayerDeathNotification.PlayerDeathStringAlly"); }
	FString& PlayerDeathStringYouField() { return *GetNativePointerField<FString*>(this, "FPlayerDeathNotification.PlayerDeathStringYou"); }
	FString& DeathReasonField() { return *GetNativePointerField<FString*>(this, "FPlayerDeathNotification.DeathReason"); }
	TArray<FString>& DeadPlayerNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FPlayerDeathNotification.DeadPlayerNames"); }
	bool& bIsTribeDeathField() { return *GetNativePointerField<bool*>(this, "FPlayerDeathNotification.bIsTribeDeath"); }
	FString& DeathTribeNameField() { return *GetNativePointerField<FString*>(this, "FPlayerDeathNotification.DeathTribeName"); }
	int& TargetingTeamField() { return *GetNativePointerField<int*>(this, "FPlayerDeathNotification.TargetingTeam"); }
	__int64& LinkedPlayerIDField() { return *GetNativePointerField<__int64*>(this, "FPlayerDeathNotification.LinkedPlayerID"); }
	TArray<FPrimalPlayerCharacterConfigStructReplicated>& PlayersDataField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStructReplicated>*>(this, "FPlayerDeathNotification.PlayersData"); }

	// Functions

	FPlayerDeathNotification * operator=(const FPlayerDeathNotification * __that) { return NativeCall<FPlayerDeathNotification *, const FPlayerDeathNotification *>(this, "FPlayerDeathNotification.operator=", __that); }
};

