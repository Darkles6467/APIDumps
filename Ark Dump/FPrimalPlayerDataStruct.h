#pragma once

#include "BaseDeclarations.h"
struct FPrimalPlayerDataStruct
{
	char __padding[0x448L];
	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FPrimalPlayerDataStruct.PlayerDataID"); }
	FString& SavedNetworkAddressField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.SavedNetworkAddress"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerDataStruct.PlayerName"); }
	unsigned int& LocalPlayerIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPrimalPlayerDataStruct.LocalPlayerIndex"); }
	FPrimalPlayerCharacterConfigStruct& MyPlayerCharacterConfigField() { return *GetNativePointerField<FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerDataStruct.MyPlayerCharacterConfig"); }
	int& LastPinCodeUsedField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.LastPinCodeUsed"); }
	FPrimalPersistentCharacterStatsStruct& MyPersistentCharacterStatsField() { return *GetNativePointerField<FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPlayerDataStruct.MyPersistentCharacterStats"); }
	int& NumPersonalDinosField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.NumPersonalDinos"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.TribeID"); }
	TArray<int>& AppIDSetField() { return *GetNativePointerField<TArray<int>*>(this, "FPrimalPlayerDataStruct.AppIDSet"); }
	int& PlayerDataVersionField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.PlayerDataVersion"); }
	long double& NextAllowedRespawnTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.NextAllowedRespawnTime"); }
	long double& LastTimeDiedToEnemyTeamField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastTimeDiedToEnemyTeam"); }
	long double& LoginTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LoginTime"); }
	long double& LastLoginTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalPlayerDataStruct.LastLoginTime"); }
	float& AllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.AllowedRespawnInterval"); }
	float& NumOfDeathsField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.NumOfDeaths"); }
	int& SpawnDayNumberField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerDataStruct.SpawnDayNumber"); }
	float& SpawnDayTimeField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerDataStruct.SpawnDayTime"); }
	TArray<FLatestMissionScore>& LatestMissionScoresField() { return *GetNativePointerField<TArray<FLatestMissionScore>*>(this, "FPrimalPlayerDataStruct.LatestMissionScores"); }

	// Functions

	FPrimalPlayerDataStruct * operator=(const FPrimalPlayerDataStruct * __that) { return NativeCall<FPrimalPlayerDataStruct *, const FPrimalPlayerDataStruct *>(this, "FPrimalPlayerDataStruct.operator=", __that); }
};

