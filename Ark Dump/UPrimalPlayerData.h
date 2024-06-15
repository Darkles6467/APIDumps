#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalPlayerData : UObject
{
	char __padding[0x4e0L];
	FPrimalPlayerDataStruct& MyDataField() { return *GetNativePointerField<FPrimalPlayerDataStruct*>(this, "UPrimalPlayerData.MyData"); }
	bool& bIsLocalPlayerField() { return *GetNativePointerField<bool*>(this, "UPrimalPlayerData.bIsLocalPlayer"); }
	float& LastXPWritePercentField() { return *GetNativePointerField<float*>(this, "UPrimalPlayerData.LastXPWritePercent"); }
	TArray<FBossEngramsSoftReferenceMapping>& BossEngramReferenceMapField() { return *GetNativePointerField<TArray<FBossEngramsSoftReferenceMapping>*>(this, "UPrimalPlayerData.BossEngramReferenceMap"); }
	TArray<FName>& RedeemedWorldItemSetsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalPlayerData.RedeemedWorldItemSets"); }
	TArray<FName>& RedeemedWorldEquipSetsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalPlayerData.RedeemedWorldEquipSets"); }

	// Functions

	void ApplyPersistentBuffs(AShooterCharacter * NewPawn, AShooterPlayerController * forPC) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *>(this, "UPrimalPlayerData.ApplyPersistentBuffs", NewPawn, forPC); }
	void ApplyToPlayerCharacter(AShooterPlayerState * ForPlayerState, AShooterCharacter * NewPawn) { NativeCall<void, AShooterPlayerState *, AShooterCharacter *>(this, "UPrimalPlayerData.ApplyToPlayerCharacter", ForPlayerState, NewPawn); }
	void ApplyToPlayerState(AShooterPlayerState * aPlayerState) { NativeCall<void, AShooterPlayerState *>(this, "UPrimalPlayerData.ApplyToPlayerState", aPlayerState); }
	void CreatedNewPlayerData() { NativeCall<void>(this, "UPrimalPlayerData.CreatedNewPlayerData"); }
	AShooterCharacter * FindCharacterForPlayer(UWorld * inWorld) { return NativeCall<AShooterCharacter *, UWorld *>(this, "UPrimalPlayerData.FindCharacterForPlayer", inWorld); }
	static UPrimalPlayerData * GetDataForID(unsigned __int64 PlayerDataID) { return NativeCall<UPrimalPlayerData *, unsigned __int64>(nullptr, "UPrimalPlayerData.GetDataForID", PlayerDataID); }
	FLatestMissionScore * GetOrCreateLatestMissionScore(FName MissionTag, bool bCreate) { return NativeCall<FLatestMissionScore *, FName, bool>(this, "UPrimalPlayerData.GetOrCreateLatestMissionScore", MissionTag, bCreate); }
	AShooterPlayerState * GetPlayerState(AShooterPlayerState * ignorePlayerState, bool bOnlyCheckExistingPlayers) { return NativeCall<AShooterPlayerState *, AShooterPlayerState *, bool>(this, "UPrimalPlayerData.GetPlayerState", ignorePlayerState, bOnlyCheckExistingPlayers); }
	int GetTribeTeamID() { return NativeCall<int>(this, "UPrimalPlayerData.GetTribeTeamID"); }
	FString * GetUniqueIdString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalPlayerData.GetUniqueIdString", result); }
	void GiveInitialItems(int AppID, AShooterPlayerController * ForPC) { NativeCall<void, int, AShooterPlayerController *>(this, "UPrimalPlayerData.GiveInitialItems", AppID, ForPC); }
	void GiveWorldItemSets(AShooterCharacter * NewPawn, int AppID) { NativeCall<void, AShooterCharacter *, int>(this, "UPrimalPlayerData.GiveWorldItemSets", NewPawn, AppID); }
	bool HasUnlockedAllExplorerNotes() { return NativeCall<bool>(this, "UPrimalPlayerData.HasUnlockedAllExplorerNotes"); }
	void InitForPlayer(AShooterPlayerState * aPlayerState, bool bDontSaveData) { NativeCall<void, AShooterPlayerState *, bool>(this, "UPrimalPlayerData.InitForPlayer", aPlayerState, bDontSaveData); }
	FString * LinkedPlayerIDString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalPlayerData.LinkedPlayerIDString", result); }
	bool LoadFromFile(FObjectReader * Reader) { return NativeCall<bool, FObjectReader *>(this, "UPrimalPlayerData.LoadFromFile", Reader); }
	bool MatchesPlayer(AShooterPlayerState * aPlayerState, bool bCheckForExistingPlayer) { return NativeCall<bool, AShooterPlayerState *, bool>(this, "UPrimalPlayerData.MatchesPlayer", aPlayerState, bCheckForExistingPlayer); }
	void RefreshPersistentBuffs(AShooterCharacter * theChar) { NativeCall<void, AShooterCharacter *>(this, "UPrimalPlayerData.RefreshPersistentBuffs", theChar); }
	void SavePlayerData(UWorld * ForWorld) { NativeCall<void, UWorld *>(this, "UPrimalPlayerData.SavePlayerData", ForWorld); }
	void SaveToFile(FObjectWriter * Writer) { NativeCall<void, FObjectWriter *>(this, "UPrimalPlayerData.SaveToFile", Writer); }
	void SetChibiLevels_Implementation(int newLevels, AShooterPlayerController * ForPC) { NativeCall<void, int, AShooterPlayerController *>(this, "UPrimalPlayerData.SetChibiLevels_Implementation", newLevels, ForPC); }
	void SetSubscribedApp(int AppID, AShooterPlayerController * ForPC) { NativeCall<void, int, AShooterPlayerController *>(this, "UPrimalPlayerData.SetSubscribedApp", AppID, ForPC); }
	void BPAppliedToPlayerState(AShooterPlayerState * ForPlayerState) { NativeCall<void, AShooterPlayerState *>(this, "UPrimalPlayerData.BPAppliedToPlayerState", ForPlayerState); }
	void BPApplyToPlayerCharacter(AShooterPlayerState * ForPlayerState, AShooterCharacter * NewPlayerCharacter) { NativeCall<void, AShooterPlayerState *, AShooterCharacter *>(this, "UPrimalPlayerData.BPApplyToPlayerCharacter", ForPlayerState, NewPlayerCharacter); }
	void BPCreatedNewPlayerData() { NativeCall<void>(this, "UPrimalPlayerData.BPCreatedNewPlayerData"); }
	void BPForceDefeatedBoss(int DifficultyIndex, FName BossName, AShooterPlayerController * PlayerController) { NativeCall<void, int, FName, AShooterPlayerController *>(this, "UPrimalPlayerData.BPForceDefeatedBoss", DifficultyIndex, BossName, PlayerController); }
	int GetPlayerHexagonCount() { return NativeCall<int>(this, "UPrimalPlayerData.GetPlayerHexagonCount"); }
	void GrantGeneralizedAchievementTag(FName ObtainedAchievementTag, AShooterPlayerController * ForPC) { NativeCall<void, FName, AShooterPlayerController *>(this, "UPrimalPlayerData.GrantGeneralizedAchievementTag", ObtainedAchievementTag, ForPC); }
	bool HasGeneralizedAchievementTag(FName Tag) { return NativeCall<bool, FName>(this, "UPrimalPlayerData.HasGeneralizedAchievementTag", Tag); }
	void SetChibiLevels(int newLevels, AShooterPlayerController * ForPC) { NativeCall<void, int, AShooterPlayerController *>(this, "UPrimalPlayerData.SetChibiLevels", newLevels, ForPC); }
	bool SetPlayerHexagonCount(int NewHexagonCount) { return NativeCall<bool, int>(this, "UPrimalPlayerData.SetPlayerHexagonCount", NewHexagonCount); }
};

