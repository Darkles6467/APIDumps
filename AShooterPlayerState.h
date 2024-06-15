#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UPrimalItem.h"
#include "FAlivePlayerDataInfo.h"
#include "FAliveNameAndLocation.h"
#include "FAdminPlayerDataInfo.h"
#include "FServerOptions.h"
#include "FDinoOrderGroup.h"
#include "FLifetimeProperty.h"
#include "FTribeData.h"
#include "FPrimalPlayerCharacterConfigStructReplicated.h"
#include "FTribeGovernment.h"
#include "APrimalStructure.h"
#include "FTribeRankGroup.h"
#include "FUniqueNetId.h"

struct APlayerState : AInfo
{
	char __padding[0x88L];
	float& ScoreField() { return *GetNativePointerField<float*>(this, "APlayerState.Score"); }
	char& PingField() { return *GetNativePointerField<char*>(this, "APlayerState.Ping"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "APlayerState.PlayerName"); }
	FString& OldNameField() { return *GetNativePointerField<FString*>(this, "APlayerState.OldName"); }
	int& PlayerIdField() { return *GetNativePointerField<int*>(this, "APlayerState.PlayerId"); }
	int& StartTimeField() { return *GetNativePointerField<int*>(this, "APlayerState.StartTime"); }
	float& ExactPingField() { return *GetNativePointerField<float*>(this, "APlayerState.ExactPing"); }
	FString& SavedNetworkAddressField() { return *GetNativePointerField<FString*>(this, "APlayerState.SavedNetworkAddress"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "APlayerState.SessionName"); }
	FieldArray<PingAvgData, 4> PingBucketField() { return {this, "APlayerState.PingBucket"}; }
	char& CurPingBucketField() { return *GetNativePointerField<char*>(this, "APlayerState.CurPingBucket"); }
	float& CurPingBucketTimestampField() { return *GetNativePointerField<float*>(this, "APlayerState.CurPingBucketTimestamp"); }

	// Functions

	void ClientInitialize(AController * C) { NativeCall<void, AController *>(this, "APlayerState.ClientInitialize", C); }
	void CopyProperties(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "APlayerState.CopyProperties", PlayerState); }
	void Destroyed() { NativeCall<void>(this, "APlayerState.Destroyed"); }
	float GetExactPing() { return NativeCall<float>(this, "APlayerState.GetExactPing"); }
	FString * GetHumanReadableName(FString * result) { return NativeCall<FString *, FString *>(this, "APlayerState.GetHumanReadableName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APlayerState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnRep_PlayerName() { NativeCall<void>(this, "APlayerState.OnRep_PlayerName"); }
	void OnRep_UniqueId() { NativeCall<void>(this, "APlayerState.OnRep_UniqueId"); }
	void OnRep_bIsInactive() { NativeCall<void>(this, "APlayerState.OnRep_bIsInactive"); }
	void OverrideWith(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "APlayerState.OverrideWith", PlayerState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerState.PostInitializeComponents"); }
	void RecalculateAvgPing() { NativeCall<void>(this, "APlayerState.RecalculateAvgPing"); }
	void RegisterPlayerWithSession(bool bWasFromInvite) { NativeCall<void, bool>(this, "APlayerState.RegisterPlayerWithSession", bWasFromInvite); }
	void Reset() { NativeCall<void>(this, "APlayerState.Reset"); }
	void SeamlessTravelTo(APlayerState * NewPlayerState) { NativeCall<void, APlayerState *>(this, "APlayerState.SeamlessTravelTo", NewPlayerState); }
	void SetPlayerName(const FString * S) { NativeCall<void, const FString *>(this, "APlayerState.SetPlayerName", S); }
	void SetUniqueId(const TSharedPtr<FUniqueNetId,0> * InUniqueId) { NativeCall<void, const TSharedPtr<FUniqueNetId,0> *>(this, "APlayerState.SetUniqueId", InUniqueId); }
	bool ShouldBroadCastWelcomeMessage(bool bExiting) { return NativeCall<bool, bool>(this, "APlayerState.ShouldBroadCastWelcomeMessage", bExiting); }
	void UnregisterPlayerWithSession() { NativeCall<void>(this, "APlayerState.UnregisterPlayerWithSession"); }
	void UpdatePing(float InPing) { NativeCall<void, float>(this, "APlayerState.UpdatePing", InPing); }
};

struct AShooterPlayerState : APlayerState
{
	char __padding[0xa28L];
	UPrimalPlayerData * MyPlayerDataField() { return GetNativePointerField<UPrimalPlayerData *>(this, "AShooterPlayerState.MyPlayerData"); }
	FPrimalPlayerDataStruct& MyPlayerDataStructField() { return *GetNativePointerField<FPrimalPlayerDataStruct*>(this, "AShooterPlayerState.MyPlayerDataStruct"); }
	FieldArray<char, 10> DefaultItemSlotEngramsField() { return {this, "AShooterPlayerState.DefaultItemSlotEngrams"}; }
	FTribeData& MyTribeDataField() { return *GetNativePointerField<FTribeData*>(this, "AShooterPlayerState.MyTribeData"); }
	FTribeData& LastTribeInviteDataField() { return *GetNativePointerField<FTribeData*>(this, "AShooterPlayerState.LastTribeInviteData"); }
	TArray<FSpawnPointInfo>& CachedSpawnPointInfosField() { return *GetNativePointerField<TArray<FSpawnPointInfo>*>(this, "AShooterPlayerState.CachedSpawnPointInfos"); }
	int& TotalEngramPointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.TotalEngramPoints"); }
	int& FreeEngramPointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.FreeEngramPoints"); }
	long double& NextAllowedRespawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerState.NextAllowedRespawnTime"); }
	long double& LastFlexPipeRefreshConnectionsNetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerState.LastFlexPipeRefreshConnectionsNetworkTime"); }
	float& AllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterPlayerState.AllowedRespawnInterval"); }
	long double& LastTimeDiedToEnemyTeamField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerState.LastTimeDiedToEnemyTeam"); }
	int& CurrentlySelectedDinoOrderGroupField() { return *GetNativePointerField<int*>(this, "AShooterPlayerState.CurrentlySelectedDinoOrderGroup"); }
	FieldArray<FDinoOrderGroup, 10> DinoOrderGroupsField() { return {this, "AShooterPlayerState.DinoOrderGroups"}; }
	long double& GenesisAbilityErrorLastTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerState.GenesisAbilityErrorLastTime"); }
	long double& NextAllowTurretCopySettingsTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerState.NextAllowTurretCopySettingsTime"); }
	long double& LastTribeRequestTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerState.LastTribeRequestTime"); }

	// Functions

	void AcceptJoinAlliance(unsigned int AllianceID, unsigned int NewMemberID, FString NewMemberName) { NativeCall<void, unsigned int, unsigned int, FString>(this, "AShooterPlayerState.AcceptJoinAlliance", AllianceID, NewMemberID, NewMemberName); }
	void AddEngramBlueprintToPlayerInventory(UPrimalInventoryComponent * invComp, TSubclassOf<UPrimalItem> engramItemBlueprint) { NativeCall<void, UPrimalInventoryComponent *, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.AddEngramBlueprintToPlayerInventory", invComp, engramItemBlueprint); }
	bool AddToTribe(const FTribeData * MyNewTribe, bool bMergeTribe, bool bForce, bool bIsFromInvite, APlayerController * InviterPC) { return NativeCall<bool, const FTribeData *, bool, bool, bool, APlayerController *>(this, "AShooterPlayerState.AddToTribe", MyNewTribe, bMergeTribe, bForce, bIsFromInvite, InviterPC); }
	bool AllowDinoOrderByGroup(APrimalDinoCharacter * orderDino) { return NativeCall<bool, APrimalDinoCharacter *>(this, "AShooterPlayerState.AllowDinoOrderByGroup", orderDino); }
	bool AllowTribeGroupPermission(ETribeGroupPermission::Type TribeGroupPermission, UObject * OnObject) { return NativeCall<bool, ETribeGroupPermission::Type, UObject *>(this, "AShooterPlayerState.AllowTribeGroupPermission", TribeGroupPermission, OnObject); }
	void BeginPlay() { NativeCall<void>(this, "AShooterPlayerState.BeginPlay"); }
	void BroadcastDeath_Implementation(AShooterPlayerState * KillerPlayerState, const UDamageType * KillerDamageType, AShooterPlayerState * KilledPlayerState) { NativeCall<void, AShooterPlayerState *, const UDamageType *, AShooterPlayerState *>(this, "AShooterPlayerState.BroadcastDeath_Implementation", KillerPlayerState, KillerDamageType, KilledPlayerState); }
	void ClearTribe(bool bDontRemoveFromTribe, bool bForce, APlayerController * ForPC) { NativeCall<void, bool, bool, APlayerController *>(this, "AShooterPlayerState.ClearTribe", bDontRemoveFromTribe, bForce, ForPC); }
	void ClientGetAlivePlayerConnectedData_Implementation(const TArray<FAlivePlayerDataInfo> * list) { NativeCall<void, const TArray<FAlivePlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetAlivePlayerConnectedData_Implementation", list); }
	void ClientGetAllPlayerNamesAndLocations_Implementation(const TArray<FAliveNameAndLocation> * list) { NativeCall<void, const TArray<FAliveNameAndLocation> *>(this, "AShooterPlayerState.ClientGetAllPlayerNamesAndLocations_Implementation", list); }
	void ClientGetPlayerBannedData_Implementation(const TArray<FAdminPlayerDataInfo> * list) { NativeCall<void, const TArray<FAdminPlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetPlayerBannedData_Implementation", list); }
	void ClientGetPlayerConnectedData_Implementation(const TArray<FAdminPlayerDataInfo> * list) { NativeCall<void, const TArray<FAdminPlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetPlayerConnectedData_Implementation", list); }
	void ClientGetPlayerWhiteListedData_Implementation(const TArray<FAdminPlayerDataInfo> * list) { NativeCall<void, const TArray<FAdminPlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetPlayerWhiteListedData_Implementation", list); }
	void ClientGetServerOptions_Implementation(FServerOptions info) { NativeCall<void, FServerOptions>(this, "AShooterPlayerState.ClientGetServerOptions_Implementation", info); }
	void ClientInitialize(AController * InController) { NativeCall<void, AController *>(this, "AShooterPlayerState.ClientInitialize", InController); }
	void ClientNotifyLevelUpAvailable_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ClientNotifyLevelUpAvailable_Implementation"); }
	void ClientReceiveSpawnPoints_Implementation(const TArray<FSpawnPointInfo> * SpawnPointsInfos) { NativeCall<void, const TArray<FSpawnPointInfo> *>(this, "AShooterPlayerState.ClientReceiveSpawnPoints_Implementation", SpawnPointsInfos); }
	void ClientRefreshDinoOrderGroup_Implementation(int groupIndex, FDinoOrderGroup groupData, int UseCurrentlySelectedGroup) { NativeCall<void, int, FDinoOrderGroup, int>(this, "AShooterPlayerState.ClientRefreshDinoOrderGroup_Implementation", groupIndex, groupData, UseCurrentlySelectedGroup); }
	void CopyProperties(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AShooterPlayerState.CopyProperties", PlayerState); }
	void Destroyed() { NativeCall<void>(this, "AShooterPlayerState.Destroyed"); }
	void DoRespec(UPrimalPlayerData * ForPlayerData, AShooterCharacter * ForCharacter, bool bSetRespecedAtCharacterLevel) { NativeCall<void, UPrimalPlayerData *, AShooterCharacter *, bool>(this, "AShooterPlayerState.DoRespec", ForPlayerData, ForCharacter, bSetRespecedAtCharacterLevel); }
	int GetCharacterLevel() { return NativeCall<int>(this, "AShooterPlayerState.GetCharacterLevel"); }
	void GetDataListEntries(TArray<IDataListEntryInterface *> * OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString> * FoldersFound, UObject * ForObject, const wchar_t * CustomFolderFilter, char SortType, const wchar_t * NameFilter) { NativeCall<void, TArray<IDataListEntryInterface *> *, int, bool, char, TArray<FString> *, UObject *, const wchar_t *, char, const wchar_t *>(this, "AShooterPlayerState.GetDataListEntries", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter); }
	FString * GetDinoOrderGroupName(FString * result, int groupIndex) { return NativeCall<FString *, FString *, int>(this, "AShooterPlayerState.GetDinoOrderGroupName", result, groupIndex); }
	FString * GetEngramEntryCostTextOverride(FString * result, IDataListEntryInterface * entryInterface) { return NativeCall<FString *, FString *, IDataListEntryInterface *>(this, "AShooterPlayerState.GetEngramEntryCostTextOverride", result, entryInterface); }
	void GetEntryCustomColor(IDataListEntryInterface * entryInterface, FLinearColor * CustomColor, FLinearColor * TextColorOverride) { NativeCall<void, IDataListEntryInterface *, FLinearColor *, FLinearColor *>(this, "AShooterPlayerState.GetEntryCustomColor", entryInterface, CustomColor, TextColorOverride); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface * entryInterface) { return NativeCall<bool, IDataListEntryInterface *>(this, "AShooterPlayerState.GetEntryDefaultEnabled", entryInterface); }
	FString * GetEntryDefaultTextOverride(FString * result, IDataListEntryInterface * entryInterface) { return NativeCall<FString *, FString *, IDataListEntryInterface *>(this, "AShooterPlayerState.GetEntryDefaultTextOverride", result, entryInterface); }
	int GetHexCostToPurchaseNextEngramPoint() { return NativeCall<int>(this, "AShooterPlayerState.GetHexCostToPurchaseNextEngramPoint"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterPlayerState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FString * GetPlayerName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerState.GetPlayerName", result); }
	FString * GetPlayerOrTribeName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerState.GetPlayerOrTribeName", result); }
	AShooterPlayerController * GetShooterController() { return NativeCall<AShooterPlayerController *>(this, "AShooterPlayerState.GetShooterController"); }
	AShooterHUD * GetShooterHUD() { return NativeCall<AShooterHUD *>(this, "AShooterPlayerState.GetShooterHUD"); }
	FString * GetShortPlayerName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerState.GetShortPlayerName", result); }
	int GetTribeId() { return NativeCall<int>(this, "AShooterPlayerState.GetTribeId"); }
	FTribeWar * GetTribeWar(FTribeWar * result, int EnemyTeam) { return NativeCall<FTribeWar *, FTribeWar *, int>(this, "AShooterPlayerState.GetTribeWar", result, EnemyTeam); }
	FString * GetUniqueIdString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerState.GetUniqueIdString", result); }
	bool HasEngram(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.HasEngram", ItemClass); }
	bool HasTribeWarRequest(int EnemyTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.HasTribeWarRequest", EnemyTeam); }
	void InvitedRankGroupPlayerIntoTribe(AShooterPlayerState * OtherPlayer) { NativeCall<void, AShooterPlayerState *>(this, "AShooterPlayerState.InvitedRankGroupPlayerIntoTribe", OtherPlayer); }
	bool IsAlliedWith(int OtherTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.IsAlliedWith", OtherTeam); }
	bool IsAllowedToRefreshFlexPipeConnections(float Cooldown) { return NativeCall<bool, float>(this, "AShooterPlayerState.IsAllowedToRefreshFlexPipeConnections", Cooldown); }
	bool IsDinoClassInOrderGroup(int groupIndex, TSubclassOf<APrimalDinoCharacter> dinoClass) { return NativeCall<bool, int, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerState.IsDinoClassInOrderGroup", groupIndex, dinoClass); }
	bool IsDinoInOrderGroup(int groupIndex, APrimalDinoCharacter * dinoChar) { return NativeCall<bool, int, APrimalDinoCharacter *>(this, "AShooterPlayerState.IsDinoInOrderGroup", groupIndex, dinoChar); }
	bool IsExclusivelyTribeAdmin(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsExclusivelyTribeAdmin", CheckPlayerDataID); }
	bool IsExclusivelyTribeOwner(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsExclusivelyTribeOwner", CheckPlayerDataID); }
	bool IsFriendly(int OtherTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.IsFriendly", OtherTeam); }
	bool IsInTribe() { return NativeCall<bool>(this, "AShooterPlayerState.IsInTribe"); }
	bool IsInTribeWar(int EnemyTeam) { return NativeCall<bool, int>(this, "AShooterPlayerState.IsInTribeWar", EnemyTeam); }
	bool IsTribeAdmin() { return NativeCall<bool>(this, "AShooterPlayerState.IsTribeAdmin"); }
	bool IsTribeFounder() { return NativeCall<bool>(this, "AShooterPlayerState.IsTribeFounder"); }
	bool IsTribeOwner(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>(this, "AShooterPlayerState.IsTribeOwner", CheckPlayerDataID); }
	void LocalSetSelectedDinoOrderGroup(int newGroup, bool bDontToggle) { NativeCall<void, int, bool>(this, "AShooterPlayerState.LocalSetSelectedDinoOrderGroup", newGroup, bDontToggle); }
	void NotifyPlayerJoinedTribe_Implementation(const FString * ThePlayerName, const FString * TribeName) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerState.NotifyPlayerJoinedTribe_Implementation", ThePlayerName, TribeName); }
	void NotifyPlayerJoined_Implementation(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyPlayerJoined_Implementation", ThePlayerName); }
	void NotifyPlayerLeftTribe_Implementation(const FString * ThePlayerName, const FString * TribeName) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerState.NotifyPlayerLeftTribe_Implementation", ThePlayerName, TribeName); }
	void NotifyPlayerLeft_Implementation(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyPlayerLeft_Implementation", ThePlayerName); }
	void NotifyTribememberJoined_Implementation(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyTribememberJoined_Implementation", ThePlayerName); }
	void NotifyTribememberLeft_Implementation(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyTribememberLeft_Implementation", ThePlayerName); }
	void NotifyUniqueDinoDownloadAllowed_Implementation(const FString * TheDinoName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyUniqueDinoDownloadAllowed_Implementation", TheDinoName); }
	void NotifyUniqueDinoDownloaded_Implementation(const FString * TheDinoName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyUniqueDinoDownloaded_Implementation", TheDinoName); }
	void OnRep_UpdatedEngrams() { NativeCall<void>(this, "AShooterPlayerState.OnRep_UpdatedEngrams"); }
	void PromoteToTribeAdmin(APlayerController * PromoterPC) { NativeCall<void, APlayerController *>(this, "AShooterPlayerState.PromoteToTribeAdmin", PromoterPC); }
	void ReceivedPlayerCharacter(AShooterCharacter * NewPawn) { NativeCall<void, AShooterCharacter *>(this, "AShooterPlayerState.ReceivedPlayerCharacter", NewPawn); }
	void RequestCreateNewPlayerWithArkData(UPrimalPlayerData * PlayerArkData) { NativeCall<void, UPrimalPlayerData *>(this, "AShooterPlayerState.RequestCreateNewPlayerWithArkData", PlayerArkData); }
	void Reset() { NativeCall<void>(this, "AShooterPlayerState.Reset"); }
	void ResetFlexPipeGlobalCooldown() { NativeCall<void>(this, "AShooterPlayerState.ResetFlexPipeGlobalCooldown"); }
	void SendTribeInviteData_Implementation(FTribeData TribeInviteData) { NativeCall<void, FTribeData>(this, "AShooterPlayerState.SendTribeInviteData_Implementation", TribeInviteData); }
	void ServerAcceptTribeWar_Implementation(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerAcceptTribeWar_Implementation", EnemyTeamID); }
	void ServerDeclareTribeWar_Implementation(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime) { NativeCall<void, int, int, int, float, float>(this, "AShooterPlayerState.ServerDeclareTribeWar_Implementation", EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int groupIndex, APrimalDinoCharacter * DinoCharacter, bool bAdd) { NativeCall<void, int, APrimalDinoCharacter *, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation", groupIndex, DinoCharacter, bAdd); }
	void ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int groupIndex, TSubclassOf<APrimalDinoCharacter> DinoClass, bool bAdd) { NativeCall<void, int, TSubclassOf<APrimalDinoCharacter>, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation", groupIndex, DinoClass, bAdd); }
	void ServerDinoOrderGroup_Clear_Implementation(int groupIndex, bool bClearClasses, bool bClearChars) { NativeCall<void, int, bool, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_Clear_Implementation", groupIndex, bClearClasses, bClearChars); }
	void ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int groupIndex, bool bIsClass, int entryIndex) { NativeCall<void, int, bool, int>(this, "AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex_Implementation", groupIndex, bIsClass, entryIndex); }
	void ServerGetAlivePlayerConnectedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAlivePlayerConnectedData_Implementation"); }
	void ServerGetAllPlayerNamesAndLocations_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAllPlayerNamesAndLocations_Implementation"); }
	void ServerGetPlayerBannedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerBannedData_Implementation"); }
	void ServerGetPlayerConnectedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerConnectedData_Implementation"); }
	void ServerGetPlayerWhiteListedData_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerWhiteListedData_Implementation"); }
	void ServerGetServerOptions_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerGetServerOptions_Implementation"); }
	void ServerRejectTribeWar_Implementation(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRejectTribeWar_Implementation", EnemyTeamID); }
	void ServerRequestApplyEngramPoints_Implementation(TSubclassOf<UPrimalItem> forItemEntry) { NativeCall<void, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.ServerRequestApplyEngramPoints_Implementation", forItemEntry); }
	void ServerRequestCreateNewPlayer_Implementation(FPrimalPlayerCharacterConfigStructReplicated PlayerCharacterConfig) { NativeCall<void, FPrimalPlayerCharacterConfigStructReplicated>(this, "AShooterPlayerState.ServerRequestCreateNewPlayer_Implementation", PlayerCharacterConfig); }
	void ServerRequestCreateNewTribe_Implementation(const FString * TribeName, FTribeGovernment TribeGovernment) { NativeCall<void, const FString *, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestCreateNewTribe_Implementation", TribeName, TribeGovernment); }
	void ServerRequestDemotePlayerInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestDemotePlayerInMyTribe_Implementation", PlayerIndexInTribe); }
	void ServerRequestDinoOrderGroups_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestDinoOrderGroups_Implementation"); }
	void ServerRequestLeaveAlliance_Implementation(unsigned int AllianceID) { NativeCall<void, unsigned int>(this, "AShooterPlayerState.ServerRequestLeaveAlliance_Implementation", AllianceID); }
	void ServerRequestLeaveTribe_Implementation() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestLeaveTribe_Implementation"); }
	void ServerRequestMySpawnPoints_Implementation(int IgnoreBedID, TSubclassOf<APrimalStructure> FilterClass) { NativeCall<void, int, TSubclassOf<APrimalStructure>>(this, "AShooterPlayerState.ServerRequestMySpawnPoints_Implementation", IgnoreBedID, FilterClass); }
	void ServerRequestPromoteAllianceMember_Implementation(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestPromoteAllianceMember_Implementation", AllianceID, MemberID); }
	void ServerRequestPromotePlayerInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestPromotePlayerInMyTribe_Implementation", PlayerIndexInTribe); }
	void ServerRequestRemoveAllianceMember_Implementation(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestRemoveAllianceMember_Implementation", AllianceID, MemberID); }
	void ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe_Implementation", PlayerIndexInTribe); }
	void ServerRequestRenameTribe_Implementation(const FString * TribeName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.ServerRequestRenameTribe_Implementation", TribeName); }
	void ServerRequestSetTribeGovernment_Implementation(FTribeGovernment TribeGovernment) { NativeCall<void, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestSetTribeGovernment_Implementation", TribeGovernment); }
	void ServerRequestSetTribeMemberGroupRank_Implementation(int PlayerIndexInTribe, int RankGroupIndex) { NativeCall<void, int, int>(this, "AShooterPlayerState.ServerRequestSetTribeMemberGroupRank_Implementation", PlayerIndexInTribe, RankGroupIndex); }
	void ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned __int64 PlayerDataID, int IgnoreBedID) { NativeCall<void, unsigned __int64, int>(this, "AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters_Implementation", PlayerDataID, IgnoreBedID); }
	void ServerRequestTransferOwnershipInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe_Implementation", PlayerIndexInTribe); }
	void ServerSetDefaultItemSlotClass_Implementation(int slotNum, TSubclassOf<UPrimalItem> ItemClass, bool bIsEngram) { NativeCall<void, int, TSubclassOf<UPrimalItem>, bool>(this, "AShooterPlayerState.ServerSetDefaultItemSlotClass_Implementation", slotNum, ItemClass, bIsEngram); }
	void ServerSetDinoGroupName_Implementation(int groupIndex, const FString * GroupName) { NativeCall<void, int, const FString *>(this, "AShooterPlayerState.ServerSetDinoGroupName_Implementation", groupIndex, GroupName); }
	void ServerSetSelectedDinoOrderGroup_Implementation(int newGroup) { NativeCall<void, int>(this, "AShooterPlayerState.ServerSetSelectedDinoOrderGroup_Implementation", newGroup); }
	void ServerTribeRequestAddRankGroup_Implementation(const FString * GroupName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.ServerTribeRequestAddRankGroup_Implementation", GroupName); }
	void ServerTribeRequestApplyRankGroupSettings_Implementation(int RankGroupIndex, FTribeRankGroup newGroupSettings) { NativeCall<void, int, FTribeRankGroup>(this, "AShooterPlayerState.ServerTribeRequestApplyRankGroupSettings_Implementation", RankGroupIndex, newGroupSettings); }
	void ServerTribeRequestNewAlliance_Implementation(const FString * AllianceName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.ServerTribeRequestNewAlliance_Implementation", AllianceName); }
	void ServerTribeRequestRemoveRankGroup_Implementation(int RankGroupIndex) { NativeCall<void, int>(this, "AShooterPlayerState.ServerTribeRequestRemoveRankGroup_Implementation", RankGroupIndex); }
	void ServerUnlockEngram(TSubclassOf<UPrimalItem> forItemEntry, bool bNotifyPlayerHUD, bool bForceUnlock) { NativeCall<void, TSubclassOf<UPrimalItem>, bool, bool>(this, "AShooterPlayerState.ServerUnlockEngram", forItemEntry, bNotifyPlayerHUD, bForceUnlock); }
	void SetQuitter(bool bInQuitter) { NativeCall<void, bool>(this, "AShooterPlayerState.SetQuitter", bInQuitter); }
	void SetTribeTamingDinoSettings(APrimalDinoCharacter * aDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerState.SetTribeTamingDinoSettings", aDinoChar); }
	void TransferTribalObjects(const FTribeData * TribeData, bool bTransferToTribe, bool bDontIncludePlayers) { NativeCall<void, const FTribeData *, bool, bool>(this, "AShooterPlayerState.TransferTribalObjects", TribeData, bTransferToTribe, bDontIncludePlayers); }
	void UnregisterPlayerWithSession() { NativeCall<void>(this, "AShooterPlayerState.UnregisterPlayerWithSession"); }
	void UpdateTribeData(const FTribeData * TribeData) { NativeCall<void, const FTribeData *>(this, "AShooterPlayerState.UpdateTribeData", TribeData); }
	void BroadcastDeath(AShooterPlayerState * KillerPlayerState, const UDamageType * KillerDamageType, AShooterPlayerState * KilledPlayerState) { NativeCall<void, AShooterPlayerState *, const UDamageType *, AShooterPlayerState *>(this, "AShooterPlayerState.BroadcastDeath", KillerPlayerState, KillerDamageType, KilledPlayerState); }
	void ClientGetAlivePlayerConnectedData(const TArray<FAlivePlayerDataInfo> * list) { NativeCall<void, const TArray<FAlivePlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetAlivePlayerConnectedData", list); }
	void ClientGetAllPlayerNamesAndLocations(const TArray<FAliveNameAndLocation> * list) { NativeCall<void, const TArray<FAliveNameAndLocation> *>(this, "AShooterPlayerState.ClientGetAllPlayerNamesAndLocations", list); }
	void ClientGetPlayerBannedData(const TArray<FAdminPlayerDataInfo> * list) { NativeCall<void, const TArray<FAdminPlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetPlayerBannedData", list); }
	void ClientGetPlayerConnectedData(const TArray<FAdminPlayerDataInfo> * list) { NativeCall<void, const TArray<FAdminPlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetPlayerConnectedData", list); }
	void ClientGetPlayerWhiteListedData(const TArray<FAdminPlayerDataInfo> * list) { NativeCall<void, const TArray<FAdminPlayerDataInfo> *>(this, "AShooterPlayerState.ClientGetPlayerWhiteListedData", list); }
	void ClientGetServerOptions(FServerOptions info) { NativeCall<void, FServerOptions>(this, "AShooterPlayerState.ClientGetServerOptions", info); }
	void ClientNotifyLevelUpAvailable() { NativeCall<void>(this, "AShooterPlayerState.ClientNotifyLevelUpAvailable"); }
	void ClientReceiveSpawnPoints(const TArray<FSpawnPointInfo> * SpawnPointsInfos) { NativeCall<void, const TArray<FSpawnPointInfo> *>(this, "AShooterPlayerState.ClientReceiveSpawnPoints", SpawnPointsInfos); }
	void ClientRefreshDinoOrderGroup(int groupIndex, FDinoOrderGroup groupData, int UseCurrentlySelectedGroup) { NativeCall<void, int, FDinoOrderGroup, int>(this, "AShooterPlayerState.ClientRefreshDinoOrderGroup", groupIndex, groupData, UseCurrentlySelectedGroup); }
	void NotifyPlayerJoined(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyPlayerJoined", ThePlayerName); }
	void NotifyPlayerJoinedTribe(const FString * ThePlayerName, const FString * TribeName) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerState.NotifyPlayerJoinedTribe", ThePlayerName, TribeName); }
	void NotifyPlayerLeft(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyPlayerLeft", ThePlayerName); }
	void NotifyPlayerLeftTribe(const FString * ThePlayerName, const FString * TribeName) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerState.NotifyPlayerLeftTribe", ThePlayerName, TribeName); }
	void NotifyTribememberJoined(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyTribememberJoined", ThePlayerName); }
	void NotifyTribememberLeft(const FString * ThePlayerName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyTribememberLeft", ThePlayerName); }
	void NotifyUniqueDinoDownloadAllowed(const FString * TheDinoName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.NotifyUniqueDinoDownloadAllowed", TheDinoName); }
	void SendTribeInviteData(FTribeData TribeInviteData) { NativeCall<void, FTribeData>(this, "AShooterPlayerState.SendTribeInviteData", TribeInviteData); }
	void ServerAcceptTribeWar(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerAcceptTribeWar", EnemyTeamID); }
	void ServerDeclareTribeWar(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime) { NativeCall<void, int, int, int, float, float>(this, "AShooterPlayerState.ServerDeclareTribeWar", EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int groupIndex, APrimalDinoCharacter * DinoCharacter, bool bAdd) { NativeCall<void, int, APrimalDinoCharacter *, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoCharacter", groupIndex, DinoCharacter, bAdd); }
	void ServerDinoOrderGroup_AddOrRemoveDinoClass(int groupIndex, TSubclassOf<APrimalDinoCharacter> DinoClass, bool bAdd) { NativeCall<void, int, TSubclassOf<APrimalDinoCharacter>, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_AddOrRemoveDinoClass", groupIndex, DinoClass, bAdd); }
	void ServerDinoOrderGroup_Clear(int groupIndex, bool bClearClasses, bool bClearChars) { NativeCall<void, int, bool, bool>(this, "AShooterPlayerState.ServerDinoOrderGroup_Clear", groupIndex, bClearClasses, bClearChars); }
	void ServerDinoOrderGroup_RemoveEntryByIndex(int groupIndex, bool bIsClass, int entryIndex) { NativeCall<void, int, bool, int>(this, "AShooterPlayerState.ServerDinoOrderGroup_RemoveEntryByIndex", groupIndex, bIsClass, entryIndex); }
	void ServerGetAlivePlayerConnectedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAlivePlayerConnectedData"); }
	void ServerGetAllPlayerNamesAndLocations() { NativeCall<void>(this, "AShooterPlayerState.ServerGetAllPlayerNamesAndLocations"); }
	void ServerGetPlayerBannedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerBannedData"); }
	void ServerGetPlayerConnectedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerConnectedData"); }
	void ServerGetPlayerWhiteListedData() { NativeCall<void>(this, "AShooterPlayerState.ServerGetPlayerWhiteListedData"); }
	void ServerGetServerOptions() { NativeCall<void>(this, "AShooterPlayerState.ServerGetServerOptions"); }
	void ServerRejectTribeWar(int EnemyTeamID) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRejectTribeWar", EnemyTeamID); }
	void ServerRequestApplyEngramPoints(TSubclassOf<UPrimalItem> forItemEntry) { NativeCall<void, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerState.ServerRequestApplyEngramPoints", forItemEntry); }
	void ServerRequestCreateNewPlayer(FPrimalPlayerCharacterConfigStructReplicated PlayerCharacterConfig) { NativeCall<void, FPrimalPlayerCharacterConfigStructReplicated>(this, "AShooterPlayerState.ServerRequestCreateNewPlayer", PlayerCharacterConfig); }
	void ServerRequestCreateNewTribe(const FString * TribeName, FTribeGovernment TribeGovernment) { NativeCall<void, const FString *, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestCreateNewTribe", TribeName, TribeGovernment); }
	void ServerRequestDemotePlayerInMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestDemotePlayerInMyTribe", PlayerIndexInTribe); }
	void ServerRequestDinoOrderGroups() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestDinoOrderGroups"); }
	void ServerRequestLeaveAlliance(unsigned int AllianceID) { NativeCall<void, unsigned int>(this, "AShooterPlayerState.ServerRequestLeaveAlliance", AllianceID); }
	void ServerRequestLeaveTribe() { NativeCall<void>(this, "AShooterPlayerState.ServerRequestLeaveTribe"); }
	void ServerRequestMySpawnPoints(int IgnoreBedID, TSubclassOf<APrimalStructure> FilterClass) { NativeCall<void, int, TSubclassOf<APrimalStructure>>(this, "AShooterPlayerState.ServerRequestMySpawnPoints", IgnoreBedID, FilterClass); }
	void ServerRequestPromoteAllianceMember(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestPromoteAllianceMember", AllianceID, MemberID); }
	void ServerRequestPromotePlayerInMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestPromotePlayerInMyTribe", PlayerIndexInTribe); }
	void ServerRequestRemoveAllianceMember(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>(this, "AShooterPlayerState.ServerRequestRemoveAllianceMember", AllianceID, MemberID); }
	void ServerRequestRemovePlayerIndexFromMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe", PlayerIndexInTribe); }
	void ServerRequestRenameTribe(const FString * ServerRequestRenameTribe) { NativeCall<void, const FString *>(this, "AShooterPlayerState.ServerRequestRenameTribe", ServerRequestRenameTribe); }
	void ServerRequestSetTribeGovernment(FTribeGovernment TribeGovernment) { NativeCall<void, FTribeGovernment>(this, "AShooterPlayerState.ServerRequestSetTribeGovernment", TribeGovernment); }
	void ServerRequestSetTribeMemberGroupRank(int PlayerIndexInTribe, int RankGroupIndex) { NativeCall<void, int, int>(this, "AShooterPlayerState.ServerRequestSetTribeMemberGroupRank", PlayerIndexInTribe, RankGroupIndex); }
	void ServerRequestSpawnPointsForDownloadedCharacters(unsigned __int64 PlayerDataID, int IgnoreBedID) { NativeCall<void, unsigned __int64, int>(this, "AShooterPlayerState.ServerRequestSpawnPointsForDownloadedCharacters", PlayerDataID, IgnoreBedID); }
	void ServerRequestTransferOwnershipInMyTribe(int PlayerIndexInTribe) { NativeCall<void, int>(this, "AShooterPlayerState.ServerRequestTransferOwnershipInMyTribe", PlayerIndexInTribe); }
	void ServerSetDefaultItemSlotClass(int slotNum, TSubclassOf<UPrimalItem> ItemClass, bool bIsEngram) { NativeCall<void, int, TSubclassOf<UPrimalItem>, bool>(this, "AShooterPlayerState.ServerSetDefaultItemSlotClass", slotNum, ItemClass, bIsEngram); }
	void ServerSetDinoGroupName(int groupIndex, const FString * GroupName) { NativeCall<void, int, const FString *>(this, "AShooterPlayerState.ServerSetDinoGroupName", groupIndex, GroupName); }
	void ServerSetSelectedDinoOrderGroup(int newGroup) { NativeCall<void, int>(this, "AShooterPlayerState.ServerSetSelectedDinoOrderGroup", newGroup); }
	void ServerTribeRequestAddRankGroup(const FString * GroupName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.ServerTribeRequestAddRankGroup", GroupName); }
	void ServerTribeRequestApplyRankGroupSettings(int RankGroupIndex, FTribeRankGroup newGroupSettings) { NativeCall<void, int, FTribeRankGroup>(this, "AShooterPlayerState.ServerTribeRequestApplyRankGroupSettings", RankGroupIndex, newGroupSettings); }
	void ServerTribeRequestNewAlliance(const FString * AllianceName) { NativeCall<void, const FString *>(this, "AShooterPlayerState.ServerTribeRequestNewAlliance", AllianceName); }
	void ServerTribeRequestRemoveRankGroup(int RankGroupIndex) { NativeCall<void, int>(this, "AShooterPlayerState.ServerTribeRequestRemoveRankGroup", RankGroupIndex); }
};

