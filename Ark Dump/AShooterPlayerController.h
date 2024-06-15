#pragma once

#include "BaseDeclarations.h"
#include "APlayerController.h"
#include "AController.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FItemNetInfo.h"
#include "FColor.h"
#include "FChatMessage.h"
#include "UPrimalItem.h"
#include "FDataSet.h"
#include "FBPNetExecParams.h"
#include "FDinoAncestorsEntry.h"
#include "FStructuresOnFloor.h"
#include "FTamingDinoInfo.h"
#include "FGuid.h"
#include "FServerCustomFolder.h"
#include "FPrimalPlayerCharacterConfigStructReplicated.h"
#include "AHUD.h"
#include "ULeaderboard.h"
#include "FLeaderboardRow.h"
#include "FItemCraftQueueEntry.h"
#include "FCustomItemData.h"
#include "FArkTributePlayerDataListing.h"
#include "FARKTributeDinoListing.h"
#include "APrimalBuff.h"
#include "FLifetimeProperty.h"
#include "FArkTributePlayerData.h"
#include "FARKTributeData.h"
#include "FARKTributeDino.h"
#include "FPrimalMapMarkerEntryData.h"
#include "APrimalStructure.h"
#include "FKey.h"

struct ABasePlayerController : APlayerController
{
	char __padding[0x28L];
	TSharedPtr<FOnlineAchievementsWrite,1>& WriteObjectField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsWrite,1>*>(this, "ABasePlayerController.WriteObject"); }
	FName& ServerSayStringField() { return *GetNativePointerField<FName*>(this, "ABasePlayerController.ServerSayString"); }
	bool& bHasSentStartEventsField() { return *GetNativePointerField<bool*>(this, "ABasePlayerController.bHasSentStartEvents"); }

	// Functions

	void CleanupSessionOnReturnToMenu() { NativeCall<void>(this, "ABasePlayerController.CleanupSessionOnReturnToMenu"); }
	void ClientEndOnlineGame_Implementation() { NativeCall<void>(this, "ABasePlayerController.ClientEndOnlineGame_Implementation"); }
	void ClientGameEnded_Implementation(AActor * EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>(this, "ABasePlayerController.ClientGameEnded_Implementation", EndGameFocus, bIsWinner); }
	void ClientGameStarted_Implementation() { NativeCall<void>(this, "ABasePlayerController.ClientGameStarted_Implementation"); }
	void ClientReturnToMainMenu_Implementation(const FString * ReturnReason) { NativeCall<void, const FString *>(this, "ABasePlayerController.ClientReturnToMainMenu_Implementation", ReturnReason); }
	void ClientSendRoundEndEvent_Implementation(bool bIsWinner, int ExpendedTimeInSeconds) { NativeCall<void, bool, int>(this, "ABasePlayerController.ClientSendRoundEndEvent_Implementation", bIsWinner, ExpendedTimeInSeconds); }
	void ClientSetSpectatorCamera_Implementation(FVector CameraLocation, FRotator CameraRotation) { NativeCall<void, FVector, FRotator>(this, "ABasePlayerController.ClientSetSpectatorCamera_Implementation", CameraLocation, CameraRotation); }
	void ClientStartOnlineGame_Implementation() { NativeCall<void>(this, "ABasePlayerController.ClientStartOnlineGame_Implementation"); }
	void GameHasEnded(AActor * EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>(this, "ABasePlayerController.GameHasEnded", EndGameFocus, bIsWinner); }
	void HandleReturnToMainMenu() { NativeCall<void>(this, "ABasePlayerController.HandleReturnToMainMenu"); }
	bool HasValidAdminIP() { return NativeCall<bool>(this, "ABasePlayerController.HasValidAdminIP"); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "ABasePlayerController.IsGameInputAllowed"); }
	bool IsLookInputIgnored() { return NativeCall<bool>(this, "ABasePlayerController.IsLookInputIgnored"); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "ABasePlayerController.IsMoveInputIgnored"); }
	void OnQueryAchievementsComplete(const FUniqueNetId * PlayerId, const bool bWasSuccessful) { NativeCall<void, const FUniqueNetId *, const bool>(this, "ABasePlayerController.OnQueryAchievementsComplete", PlayerId, bWasSuccessful); }
	void PreClientTravel(const FString * PendingURL, ETravelType TravelType, bool bIsSeamlessTravel) { NativeCall<void, const FString *, ETravelType, bool>(this, "ABasePlayerController.PreClientTravel", PendingURL, TravelType, bIsSeamlessTravel); }
	void QueryAchievements() { NativeCall<void>(this, "ABasePlayerController.QueryAchievements"); }
	void ServerCheat_Implementation(const FString * Msg) { NativeCall<void, const FString *>(this, "ABasePlayerController.ServerCheat_Implementation", Msg); }
	void SimulateInputKey(FKey Key, bool bPressed) { NativeCall<void, FKey, bool>(this, "ABasePlayerController.SimulateInputKey", Key, bPressed); }
	void ClientEndOnlineGame() { NativeCall<void>(this, "ABasePlayerController.ClientEndOnlineGame"); }
	void ClientGameStarted() { NativeCall<void>(this, "ABasePlayerController.ClientGameStarted"); }
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds) { NativeCall<void, bool, int>(this, "ABasePlayerController.ClientSendRoundEndEvent", bIsWinner, ExpendedTimeInSeconds); }
	void ClientSetSpectatorCamera(FVector CameraLocation, FRotator CameraRotation) { NativeCall<void, FVector, FRotator>(this, "ABasePlayerController.ClientSetSpectatorCamera", CameraLocation, CameraRotation); }
	void ClientStartOnlineGame() { NativeCall<void>(this, "ABasePlayerController.ClientStartOnlineGame"); }
	void ServerCheat(const FString * Msg) { NativeCall<void, const FString *>(this, "ABasePlayerController.ServerCheat", Msg); }
};

struct AShooterPlayerController : ABasePlayerController
{
	enum CharacterTransferState
	{
		CTS_None = 0x0,
		CTS_Transferring = 0x1,
		CTS_Downloading = 0x2,
		CTS_Done = 0x3,
	};

	char __padding[0xb50L];
	TSubobjectPtr<UPaintingStreamingComponent>& PaintingStreamingComponentField() { return *GetNativePointerField<TSubobjectPtr<UPaintingStreamingComponent>*>(this, "AShooterPlayerController.PaintingStreamingComponent"); }
	FieldArray<char, 10> HeldItemSlotField() { return {this, "AShooterPlayerController.HeldItemSlot"}; }
	FieldArray<char, 10> UsedItemSlotField() { return {this, "AShooterPlayerController.UsedItemSlot"}; }
	FieldArray<long double, 10> LastRepeatUseConsumableTimeField() { return {this, "AShooterPlayerController.LastRepeatUseConsumableTime"}; }
	FieldArray<long double, 10> HeldItemSlotTimeField() { return {this, "AShooterPlayerController.HeldItemSlotTime"}; }
	FieldArray<long double, 10> LastUsedItemSlotTimesField() { return {this, "AShooterPlayerController.LastUsedItemSlotTimes"}; }
	TSubclassOf<UUI_PauseMenu>& PauseMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_PauseMenu>*>(this, "AShooterPlayerController.PauseMenuUITemplate"); }
	TSubclassOf<UUI_DepthOfFieldMenu>& DoFMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_DepthOfFieldMenu>*>(this, "AShooterPlayerController.DoFMenuUITemplate"); }
	FVector& CurrentPlayerCharacterLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.CurrentPlayerCharacterLocation"); }
	int& ModifedButtonCountField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ModifedButtonCount"); }
	int& nArkTributeLoadIndexField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.nArkTributeLoadIndex"); }
	FVector& LastDeathLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.LastDeathLocation"); }
	long double& LastDeathTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastDeathTime"); }
	bool& bWasDeadField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bWasDead"); }
	long double& LastDeadCharacterDestructionTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastDeadCharacterDestructionTime"); }
	long double& LastLargeQuantityTranserAllTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastLargeQuantityTranserAllTime"); }
	bool& bShowGameModeHUDField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bShowGameModeHUD"); }
	FVector2D& CurrentRadialDirection1Field() { return *GetNativePointerField<FVector2D*>(this, "AShooterPlayerController.CurrentRadialDirection1"); }
	FVector2D& CurrentRadialDirection2Field() { return *GetNativePointerField<FVector2D*>(this, "AShooterPlayerController.CurrentRadialDirection2"); }
	USoundCue * SelectSlotSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterPlayerController.SelectSlotSound"); }
	TSubclassOf<UFogOfWar>& FogOfWarClassField() { return *GetNativePointerField<TSubclassOf<UFogOfWar>*>(this, "AShooterPlayerController.FogOfWarClass"); }
	UFogOfWar * FogOfWarField() { return GetNativePointerField<UFogOfWar *>(this, "AShooterPlayerController.FogOfWar"); }
	UPrimalLocalProfile * PrimalLocalProfileField() { return GetNativePointerField<UPrimalLocalProfile *>(this, "AShooterPlayerController.PrimalLocalProfile"); }
	int& CurrentGameModeMaxNumOfRespawnsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CurrentGameModeMaxNumOfRespawns"); }
	FVector& LastRawInputDirField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.LastRawInputDir"); }
	FString& VivoxUsernameField() { return *GetNativePointerField<FString*>(this, "AShooterPlayerController.VivoxUsername"); }
	int& VivoxLoginAttemptsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.VivoxLoginAttempts"); }
	int& VivoxJoinChannelAttemptsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.VivoxJoinChannelAttempts"); }
	bool& bConnectedToPositionalChannelField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bConnectedToPositionalChannel"); }
	long double& LastVivoxPositionalUpdateField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastVivoxPositionalUpdate"); }
	CachedProperty<FVector>& CachedPositionField() { return *GetNativePointerField<CachedProperty<FVector>*>(this, "AShooterPlayerController.CachedPosition"); }
	CachedProperty<FVector>& CachedForwardVectorField() { return *GetNativePointerField<CachedProperty<FVector>*>(this, "AShooterPlayerController.CachedForwardVector"); }
	CachedProperty<FVector>& CachedUpVectorField() { return *GetNativePointerField<CachedProperty<FVector>*>(this, "AShooterPlayerController.CachedUpVector"); }
	unsigned __int64& TargetOrbitedPlayerIdField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterPlayerController.TargetOrbitedPlayerId"); }
	char& TargetOrbitedTrialCountField() { return *GetNativePointerField<char*>(this, "AShooterPlayerController.TargetOrbitedTrialCount"); }
	TWeakObjectPtr<AShooterCharacter>& LastControlledPlayerCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "AShooterPlayerController.LastControlledPlayerCharacter"); }
	float& MaxUseDistanceField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.MaxUseDistance"); }
	float& MaxUseCheckRadiusField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.MaxUseCheckRadius"); }
	TArray<bool>& SavedSurvivorProfileSettingsField() { return *GetNativePointerField<TArray<bool>*>(this, "AShooterPlayerController.SavedSurvivorProfileSettings"); }
	bool& bCachedOnlyShowOnlineTribeMembersField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bCachedOnlyShowOnlineTribeMembers"); }
	int& SavedMissionBiomeFilterMaskField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.SavedMissionBiomeFilterMask"); }
	bool& bInitializedMissionUIField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bInitializedMissionUI"); }
	bool& bMissionSortByDistanceField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bMissionSortByDistance"); }
	TArray<FDinoMapMarkerInfo>& MapDinosField() { return *GetNativePointerField<TArray<FDinoMapMarkerInfo>*>(this, "AShooterPlayerController.MapDinos"); }
	int& LastHeldUseHitBodyIndexField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.LastHeldUseHitBodyIndex"); }
	bool& bUsePressedFromGamepadField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bUsePressedFromGamepad"); }
	bool& bHasLoadedProfileField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasLoadedProfile"); }
	bool& bLockedInputDontRecenterMouseField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bLockedInputDontRecenterMouse"); }
	long double& LastRespawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastRespawnTime"); }
	FItemNetID& LastEquipedItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterPlayerController.LastEquipedItemNetID"); }
	FItemNetID& LastUnequippedItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterPlayerController.LastUnequippedItemNetID"); }
	__int64& LinkedPlayerIDField() { return *GetNativePointerField<__int64*>(this, "AShooterPlayerController.LinkedPlayerID"); }
	TSubclassOf<UUI_SteamInventoryStatusPopup>& SteamInventoryStatusUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SteamInventoryStatusPopup>*>(this, "AShooterPlayerController.SteamInventoryStatusUITemplate"); }
	bool& bDrawLocationField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bDrawLocation"); }
	int& PlayerControllerNumField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.PlayerControllerNum"); }
	FVector& LastTurnSpeedField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.LastTurnSpeed"); }
	long double& LastMultiUseInteractionTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastMultiUseInteractionTime"); }
	float& LastTimeSentCarriedRotationField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.LastTimeSentCarriedRotation"); }
	FItemNetID& LastSteamItemIDToRemoveField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterPlayerController.LastSteamItemIDToRemove"); }
	FItemNetID& LastSteamItemIDToAddField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterPlayerController.LastSteamItemIDToAdd"); }
	bool& bConsumeItemSucceededField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bConsumeItemSucceeded"); }
	bool& bRefreshedInvetoryForRemoveField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bRefreshedInvetoryForRemove"); }
	bool& bServerRefreshedSteamInventoryField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bServerRefreshedSteamInventory"); }
	bool& bServerRefreshStatusField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bServerRefreshStatus"); }
	bool& bCloseSteamStatusSceneField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bCloseSteamStatusScene"); }
	long double& LastSteamInventoryRefreshTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastSteamInventoryRefreshTime"); }
	long double& LastRequesteDinoAncestorsTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastRequesteDinoAncestorsTime"); }
	long double& LastDiedMessageTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastDiedMessageTime"); }
	long double& LastNotifiedTorpidityIncreaseTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastNotifiedTorpidityIncreaseTime"); }
	long double& LastInvDropRequestTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastInvDropRequestTime"); }
	long double& LastHadPawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastHadPawnTime"); }
	long double& LastChatMessageTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastChatMessageTime"); }
	FItemNetInfo& ARKTributeItemNetInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "AShooterPlayerController.ARKTributeItemNetInfo"); }
	bool& bServerIsPaintingField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bServerIsPainting"); }
	bool& bServerPaintingSuccessField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bServerPaintingSuccess"); }
	long double& LastListenServerNotifyOutOfRangeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastListenServerNotifyOutOfRangeTime"); }
	int& SpectatorCycleIndexField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.SpectatorCycleIndex"); }
	bool& bPossessedAnyPawnField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bPossessedAnyPawn"); }
	bool& bIsFastTravellingField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsFastTravelling"); }
	bool& bLastSpawnWasFastTravelField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bLastSpawnWasFastTravel"); }
	bool& bSuppressAdminIconField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bSuppressAdminIcon"); }
	long double& WaitingForSpawnUITimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.WaitingForSpawnUITime"); }
	float& ChatSpamWeightField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.ChatSpamWeight"); }
	bool& bChatSpammedField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bChatSpammed"); }
	long double& EnteredSpectatingStateTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.EnteredSpectatingStateTime"); }
	bool& bPreventPaintingStreamingField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bPreventPaintingStreaming"); }
	long double& LastUsePressTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastUsePressTime"); }
	TArray<int>& PlayerAppIDsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterPlayerController.PlayerAppIDs"); }
	TArray<int>& NotifiedTribeWarIDsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterPlayerController.NotifiedTribeWarIDs"); }
	TArray<FString>& NotifiedTribeWarNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterPlayerController.NotifiedTribeWarNames"); }
	int& ServerTribeLogLastLogIndexField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ServerTribeLogLastLogIndex"); }
	int& ServerTribeLogLastTribeIDField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ServerTribeLogLastTribeID"); }
	FVector& LastViewLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.LastViewLocation"); }
	bool& bHasGottenInitialSpawnLocationField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasGottenInitialSpawnLocation"); }
	bool& bClientReceivedTribeLogField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bClientReceivedTribeLog"); }
	TArray<FString>& CurrentTribeLogField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterPlayerController.CurrentTribeLog"); }
	long double& LastTribeLogRequestTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastTribeLogRequestTime"); }
	bool& bHasSurvivedOneDayField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasSurvivedOneDay"); }
	bool& bHasReachedHighestPeakField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasReachedHighestPeak"); }
	bool& bHasReachedLowestDepthField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasReachedLowestDepth"); }
	bool& bZoomingOutField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bZoomingOut"); }
	bool& bZoomingInField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bZoomingIn"); }
	long double& LastRPCStayAliveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastRPCStayAliveTime"); }
	int& PlayerBadgeGroupField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.PlayerBadgeGroup"); }
	long double& LastMultiUseTraceTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastMultiUseTraceTime"); }
	FVector& LastLargeMoveLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.LastLargeMoveLocation"); }
	long double& LastLargeMoveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastLargeMoveTime"); }
	long double& LastNotOnUnriddenDinoTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastNotOnUnriddenDinoTime"); }
	long double& LastHitMarkerCharacterTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastHitMarkerCharacterTime"); }
	bool& bLastHitMarkerCharacterAllyField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bLastHitMarkerCharacterAlly"); }
	long double& LastHitMarkerStructureTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastHitMarkerStructureTime"); }
	bool& bLastHitMarkerStructureAllyField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bLastHitMarkerStructureAlly"); }
	FHitMarkerSettings& LastHitMarkerCharacterSettingsField() { return *GetNativePointerField<FHitMarkerSettings*>(this, "AShooterPlayerController.LastHitMarkerCharacterSettings"); }
	float& DoFSettingCurrentTimerField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.DoFSettingCurrentTimer"); }
	float& DoFSettingTargetTimerField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.DoFSettingTargetTimer"); }
	TArray<FSteamInventoryItemInfo>& PlayerInventoryItemsField() { return *GetNativePointerField<TArray<FSteamInventoryItemInfo>*>(this, "AShooterPlayerController.PlayerInventoryItems"); }
	int& LastSpawnPointIDField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.LastSpawnPointID"); }
	int& LastSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.LastSpawnRegionIndex"); }
	int& LastDownloadCachedTribeIDField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.LastDownloadCachedTribeID"); }
	TArray<unsigned char>& LastDownloadPlayerDataBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "AShooterPlayerController.LastDownloadPlayerDataBytes"); }
	unsigned __int64& LastTransferredPlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterPlayerController.LastTransferredPlayerID"); }
	AShooterPlayerController::CharacterTransferState& CurrentCharacterTransferStateField() { return *GetNativePointerField<AShooterPlayerController::CharacterTransferState*>(this, "AShooterPlayerController.CurrentCharacterTransferState"); }
	bool& bReceivedSubscribedAppsField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bReceivedSubscribedApps"); }
	bool& bIsTransferringCharacterField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsTransferringCharacter"); }
	long double& PossessedFirstPawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.PossessedFirstPawnTime"); }
	int& SnapPointCycleField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.SnapPointCycle"); }
	FVector& LastSnapPointCyclePositionField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerController.LastSnapPointCyclePosition"); }
	int& ViewingWheelCategoryField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.ViewingWheelCategory"); }
	long double& ForceDrawCurrentGroupsUntilTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.ForceDrawCurrentGroupsUntilTime"); }
	long double& LastRequestedPlaceStructureTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastRequestedPlaceStructureTime"); }
	long double& LastVerifyStructureItemTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastVerifyStructureItemTime"); }
	long double& LastServerRemovePawnItemTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastServerRemovePawnItemTime"); }
	int& PersonalDinoTameCountField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.PersonalDinoTameCount"); }
	bool& bNextShowCharacterCreationUIDownloadField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bNextShowCharacterCreationUIDownload"); }
	bool& bForceHideGameplayUIField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bForceHideGameplayUI"); }
	long double& LastGamepadOpenRemoteInventoryTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastGamepadOpenRemoteInventoryTime"); }
	bool& bIsGamepadActiveField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsGamepadActive"); }
	bool& bClientIsDPCField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bClientIsDPC"); }
	long double& LastClientRequestTribeOnlineListTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastClientRequestTribeOnlineListTime"); }
	long double& LastClientModifiedARKInventoryTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastClientModifiedARKInventoryTime"); }
	TArray<unsigned __int64>& ClientCachedTribeOnlineListField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "AShooterPlayerController.ClientCachedTribeOnlineList"); }
	bool& bPreventDefaultCharacterItemsField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bPreventDefaultCharacterItems"); }
	float& SFXVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.SFXVolumeMultiplier"); }
	long double& LastTeleportedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastTeleportedTime"); }
	unsigned __int64& LastConvertedPlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterPlayerController.LastConvertedPlayerID"); }
	FString& LastConvertedPlayerIDStringField() { return *GetNativePointerField<FString*>(this, "AShooterPlayerController.LastConvertedPlayerIDString"); }
	long double& LastShowExtendedInfoTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastShowExtendedInfoTime"); }
	bool& bHasDisplayedSplitScreenMessageField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHasDisplayedSplitScreenMessage"); }
	bool& bIsViewingTributeInventoryField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsViewingTributeInventory"); }
	bool& bDrawBlackBackgroundField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bDrawBlackBackground"); }
	bool& bFailedToDownloadedTransferredCharacterField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bFailedToDownloadedTransferredCharacter"); }
	float& PrimalStatsCacheFlushIntervalField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PrimalStatsCacheFlushInterval"); }
	bool& bIsPrimalStatsTimerActiveField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsPrimalStatsTimerActive"); }
	FPrimalStats& PrimalStatsCacheField() { return *GetNativePointerField<FPrimalStats*>(this, "AShooterPlayerController.PrimalStatsCache"); }
	bool& bAutoPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bAutoPlayer"); }
	float& PingTraceDistanceField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingTraceDistance"); }
	float& PingNotifyRadiusField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingNotifyRadius"); }
	float& PingLifetimeField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingLifetime"); }
	float& PingLifetime_DyingField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingLifetime_Dying"); }
	float& PingCoolDownTimeField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.PingCoolDownTime"); }
	long double& LastPingTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastPingTime"); }
	TArray<FPingData>& CurrentPingsField() { return *GetNativePointerField<TArray<FPingData>*>(this, "AShooterPlayerController.CurrentPings"); }
	bool& bDebugPOIsField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bDebugPOIs"); }
	float& POI_SearchTickInterval_CurrentField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.POI_SearchTickInterval_Current"); }
	FVector2D& POI_SearchTickInterval_RandRangesField() { return *GetNativePointerField<FVector2D*>(this, "AShooterPlayerController.POI_SearchTickInterval_RandRanges"); }
	float& POI_SearchRadiusField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.POI_SearchRadius"); }
	long double& POI_LastSearchTickTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.POI_LastSearchTickTime"); }
	TArray<APointOfInterestCosmeticActor *>& SpawnedPointCosmeticActorsField() { return *GetNativePointerField<TArray<APointOfInterestCosmeticActor *>*>(this, "AShooterPlayerController.SpawnedPointCosmeticActors"); }
	TArray<FPointOfInterestData_ForCompanion>& NearbyPointsOfInterestField() { return *GetNativePointerField<TArray<FPointOfInterestData_ForCompanion>*>(this, "AShooterPlayerController.NearbyPointsOfInterest"); }
	FMissionWaypointInfo& MissionWaypointField() { return *GetNativePointerField<FMissionWaypointInfo*>(this, "AShooterPlayerController.MissionWaypoint"); }
	TArray<FTamingWaypointInfo>& TamingWaypointsField() { return *GetNativePointerField<TArray<FTamingWaypointInfo>*>(this, "AShooterPlayerController.TamingWaypoints"); }
	long double& LastGen1FixENTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.LastGen1FixENTime"); }
	float& Gen1FixENTimeThresholdField() { return *GetNativePointerField<float*>(this, "AShooterPlayerController.Gen1FixENTimeThreshold"); }
	int& Gen1FixENCountField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.Gen1FixENCount"); }
	int& Gen1FixENCountThresholdField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.Gen1FixENCountThreshold"); }
	bool& bSyncTamingWithoutUIField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bSyncTamingWithoutUI"); }
	int& MaxTamingWaypointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.MaxTamingWaypoints"); }
	int& CurrentTamingWaypointsField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.CurrentTamingWaypoints"); }
	FLinearColor& ForceColorOverlayColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterPlayerController.ForceColorOverlayColor"); }
	long double& ForceColorOverlayUntilTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.ForceColorOverlayUntilTime"); }
	long double& ForceColorOverlayFadeOutTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerController.ForceColorOverlayFadeOutTime"); }
	bool& bIsInAdvancedCinematicModeField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bIsInAdvancedCinematicMode"); }
	int& Gen1ENFixDesyncValueField() { return *GetNativePointerField<int*>(this, "AShooterPlayerController.Gen1ENFixDesyncValue"); }
	TArray<FStructHighlightInfo>& HighlightedStructuresField() { return *GetNativePointerField<TArray<FStructHighlightInfo>*>(this, "AShooterPlayerController.HighlightedStructures"); }
	TArray<FLinearColor>& EnforcementColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "AShooterPlayerController.EnforcementColors"); }
	bool& bHighlightEnforcementStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerController.bHighlightEnforcementStructures"); }

	// Functions

	bool IsConnectedToPositionalChannel() { return NativeCall<bool>(this, "AShooterPlayerController.IsConnectedToPositionalChannel"); }
	bool IsInMission() { return NativeCall<bool>(this, "AShooterPlayerController.IsInMission"); }
	bool IsGameMenuVisible() { return NativeCall<bool>(this, "AShooterPlayerController.IsGameMenuVisible"); }
	void AcknowledgePossession(APawn * P) { NativeCall<void, APawn *>(this, "AShooterPlayerController.AcknowledgePossession", P); }
	void ActivateMultiUseSelection(bool bIsFromUseRelease) { NativeCall<void, bool>(this, "AShooterPlayerController.ActivateMultiUseSelection", bIsFromUseRelease); }
	void AddDinoToMap(APrimalDinoCharacter * Dino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.AddDinoToMap", Dino); }
	void AddExperience(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, float, bool, bool>(this, "AShooterPlayerController.AddExperience", HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	bool AddItemToAllClustersInventory(FString UserId, int MasterIndexNum) { return NativeCall<bool, FString, int>(this, "AShooterPlayerController.AddItemToAllClustersInventory", UserId, MasterIndexNum); }
	void AdminCheat(const FString * Msg) { NativeCall<void, const FString *>(this, "AShooterPlayerController.AdminCheat", Msg); }
	void AllowPlayerToJoinNoCheck(const FString * PlayerId) { NativeCall<void, const FString *>(this, "AShooterPlayerController.AllowPlayerToJoinNoCheck", PlayerId); }
	bool AllowTribeGroupPermission(ETribeGroupPermission::Type TribeGroupPermission, UObject * OnObject) { return NativeCall<bool, ETribeGroupPermission::Type, UObject *>(this, "AShooterPlayerController.AllowTribeGroupPermission", TribeGroupPermission, OnObject); }
	void ApplyDepthOfFieldSetting(int Index, float CurrentTimer) { NativeCall<void, int, float>(this, "AShooterPlayerController.ApplyDepthOfFieldSetting", Index, CurrentTimer); }
	void AsyncLoadInventory() { NativeCall<void>(this, "AShooterPlayerController.AsyncLoadInventory"); }
	void AttemptTransferRedownload() { NativeCall<void>(this, "AShooterPlayerController.AttemptTransferRedownload"); }
	void AutoCycle(float Duration) { NativeCall<void, float>(this, "AShooterPlayerController.AutoCycle", Duration); }
	bool BPCheckClientPossession() { return NativeCall<bool>(this, "AShooterPlayerController.BPCheckClientPossession"); }
	void BPClientUnlockExplorerNote(int ExplorerNoteIndex, const bool forceShowExplorerNoteUI) { NativeCall<void, int, const bool>(this, "AShooterPlayerController.BPClientUnlockExplorerNote", ExplorerNoteIndex, forceShowExplorerNoteUI); }
	void BanPlayer(FString PlayerSteamName) { NativeCall<void, FString>(this, "AShooterPlayerController.BanPlayer", PlayerSteamName); }
	void BeginInactiveState() { NativeCall<void>(this, "AShooterPlayerController.BeginInactiveState"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterPlayerController.BeginPlay"); }
	void BeginSpectatingState() { NativeCall<void>(this, "AShooterPlayerController.BeginSpectatingState"); }
	void CCC() { NativeCall<void>(this, "AShooterPlayerController.CCC"); }
	bool CanDoPlayerCharacterInput(bool bIgnoreCurrentWeapon, bool bWeaponForcesMountedWeaponry) { return NativeCall<bool, bool, bool>(this, "AShooterPlayerController.CanDoPlayerCharacterInput", bIgnoreCurrentWeapon, bWeaponForcesMountedWeaponry); }
	bool CanPingPlayer(const AShooterCharacter * ForPlayer) { return NativeCall<bool, const AShooterCharacter *>(this, "AShooterPlayerController.CanPingPlayer", ForPlayer); }
	void CancelMultiUseSelection() { NativeCall<void>(this, "AShooterPlayerController.CancelMultiUseSelection"); }
	void ChangeState(FName NewState) { NativeCall<void, FName>(this, "AShooterPlayerController.ChangeState", NewState); }
	void Cheat(const FString * Msg) { NativeCall<void, const FString *>(this, "AShooterPlayerController.Cheat", Msg); }
	void CheckCheatsPassword_Implementation(const FString * Pass) { NativeCall<void, const FString *>(this, "AShooterPlayerController.CheckCheatsPassword_Implementation", Pass); }
	void CheckForPlayerInventory() { NativeCall<void>(this, "AShooterPlayerController.CheckForPlayerInventory"); }
	bool CheckIsOnTransferAllCooldown(UPrimalInventoryComponent * inventoryComp) { return NativeCall<bool, UPrimalInventoryComponent *>(this, "AShooterPlayerController.CheckIsOnTransferAllCooldown", inventoryComp); }
	void CheckRequestSpectator_Implementation(const FString * InSpectatorPass) { NativeCall<void, const FString *>(this, "AShooterPlayerController.CheckRequestSpectator_Implementation", InSpectatorPass); }
	void CheckforOrbiting() { NativeCall<void>(this, "AShooterPlayerController.CheckforOrbiting"); }
	bool CheckforOrbitingInstantaneously() { return NativeCall<bool>(this, "AShooterPlayerController.CheckforOrbitingInstantaneously"); }
	void Clear3DValuesAreDirty() { NativeCall<void>(this, "AShooterPlayerController.Clear3DValuesAreDirty"); }
	void ClearTutorials() { NativeCall<void>(this, "AShooterPlayerController.ClearTutorials"); }
	void ClearVivoxRetryCounters() { NativeCall<void>(this, "AShooterPlayerController.ClearVivoxRetryCounters"); }
	void ClearVivoxRetryTimers() { NativeCall<void>(this, "AShooterPlayerController.ClearVivoxRetryTimers"); }
	void ClientAddActorItemToFolder_Implementation(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, bool bEquipItem, bool ShowHUDNotification, const FString * ToFolder) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool, bool, const FString *>(this, "AShooterPlayerController.ClientAddActorItemToFolder_Implementation", forInventory, itemInfo, bEquipItem, ShowHUDNotification, ToFolder); }
	void ClientAddActorItem_Implementation(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, bool bEquipItem, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool, bool>(this, "AShooterPlayerController.ClientAddActorItem_Implementation", forInventory, itemInfo, bEquipItem, ShowHUDNotification); }
	void ClientAddFloatingDamageText_Implementation(FVector_NetQuantize AtLocation, int DamageAmount, int FromTeamID) { NativeCall<void, FVector_NetQuantize, int, int>(this, "AShooterPlayerController.ClientAddFloatingDamageText_Implementation", AtLocation, DamageAmount, FromTeamID); }
	void ClientAddFloatingText_Implementation(FVector_NetQuantize AtLocation, const FString * FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, FVector_NetQuantize, const FString *, FColor, float, float, float, FVector, float, float, float>(this, "AShooterPlayerController.ClientAddFloatingText_Implementation", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	void ClientAddFolderToInventoryComponent_Implementation(UPrimalInventoryComponent * forInventory, const FString * NewCustomFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int>(this, "AShooterPlayerController.ClientAddFolderToInventoryComponent_Implementation", forInventory, NewCustomFolderName, InventoryCompType); }
	void ClientAddItemToArk_Implementation(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool>(this, "AShooterPlayerController.ClientAddItemToArk_Implementation", forInventory, itemInfo, bFromLoad); }
	void ClientChatMessage_Implementation(FChatMessage Chat) { NativeCall<void, FChatMessage>(this, "AShooterPlayerController.ClientChatMessage_Implementation", Chat); }
	void ClientCollectedAchievementItem_Implementation(TSubclassOf<UPrimalItem> ItemClass) { NativeCall<void, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerController.ClientCollectedAchievementItem_Implementation", ItemClass); }
	void ClientDataSetRPC_Implementation(const TArray<FDataSet> * dataSets) { NativeCall<void, const TArray<FDataSet> *>(this, "AShooterPlayerController.ClientDataSetRPC_Implementation", dataSets); }
	void ClientDoMultiUse_Implementation(UObject * ForObject, int useIndex) { NativeCall<void, UObject *, int>(this, "AShooterPlayerController.ClientDoMultiUse_Implementation", ForObject, useIndex); }
	void ClientDownloadDinoRequestFinished_Implementation(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadDinoRequestFinished_Implementation", Success); }
	void ClientDownloadPlayerCharacterRequestFinished_Implementation(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadPlayerCharacterRequestFinished_Implementation", Success); }
	void ClientDrawBrushComponentInGame_Implementation(UBrushComponent * BrushComponent, float Duration, bool bDrawSolidBox) { NativeCall<void, UBrushComponent *, float, bool>(this, "AShooterPlayerController.ClientDrawBrushComponentInGame_Implementation", BrushComponent, Duration, bDrawSolidBox); }
	void ClientDrawUndermeshSphere_Implementation(const int radius) { NativeCall<void, const int>(this, "AShooterPlayerController.ClientDrawUndermeshSphere_Implementation", radius); }
	void ClientEndReceivingTribeLog_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientEndReceivingTribeLog_Implementation"); }
	void ClientFailedRemoveSaddle_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientFailedRemoveSaddle_Implementation"); }
	void ClientFailedToAddItemFromArkInventory_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientFailedToAddItemFromArkInventory_Implementation"); }
	void ClientFinishedLoadArkItems_Implementation(UPrimalInventoryComponent * forInventory) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ClientFinishedLoadArkItems_Implementation", forInventory); }
	void ClientFinishedReceivingActorItems_Implementation(UPrimalInventoryComponent * forInventory, bool bEquippedItems) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "AShooterPlayerController.ClientFinishedReceivingActorItems_Implementation", forInventory, bEquippedItems); }
	void ClientGetMessageOfTheDay_Implementation(const FString * Message) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientGetMessageOfTheDay_Implementation", Message); }
	void ClientHUDNotificationTypeParams_Implementation(int MessageType, int MessageParam1, int MessageParam2, UObject * ObjectParam1) { NativeCall<void, int, int, int, UObject *>(this, "AShooterPlayerController.ClientHUDNotificationTypeParams_Implementation", MessageType, MessageParam1, MessageParam2, ObjectParam1); }
	void ClientInsertActorItem_Implementation(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, FItemNetID InsertAfterItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, FItemNetID>(this, "AShooterPlayerController.ClientInsertActorItem_Implementation", forInventory, itemInfo, InsertAfterItemID); }
	void ClientJoinVivoxChannel_Implementation(const FString * ChannelName, int AtlasVoiceChannelTypeAsInt, int AttenuationModelAsInt32, int MaxDistance, int MinDistance, long double Rolloff) { NativeCall<void, const FString *, int, int, int, int, long double>(this, "AShooterPlayerController.ClientJoinVivoxChannel_Implementation", ChannelName, AtlasVoiceChannelTypeAsInt, AttenuationModelAsInt32, MaxDistance, MinDistance, Rolloff); }
	void ClientLoadArkItems_Implementation(UPrimalInventoryComponent * forInventory, const TArray<FItemNetInfo> * itemInfos, bool bClear, bool bFinalBatch) { NativeCall<void, UPrimalInventoryComponent *, const TArray<FItemNetInfo> *, bool, bool>(this, "AShooterPlayerController.ClientLoadArkItems_Implementation", forInventory, itemInfos, bClear, bFinalBatch); }
	void ClientLoginToVivox_Implementation(const FString * InVivoxUsername) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientLoginToVivox_Implementation", InVivoxUsername); }
	void ClientNotifyAdmin_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyAdmin_Implementation"); }
	void ClientNotifyCantHarvest_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyCantHarvest_Implementation"); }
	void ClientNotifyCantHitHarvest_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyCantHitHarvest_Implementation"); }
	void ClientNotifyDefeatedDino_Implementation(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerController.ClientNotifyDefeatedDino_Implementation", DinoClass); }
	void ClientNotifyDinoDeath_Implementation(const FString * DinoName, const FString * AttackerName, bool bIsVehicle) { NativeCall<void, const FString *, const FString *, bool>(this, "AShooterPlayerController.ClientNotifyDinoDeath_Implementation", DinoName, AttackerName, bIsVehicle); }
	void ClientNotifyDinoKill_Implementation(APrimalDinoCharacter * InstigatingPawn, APawn * VictimPawn) { NativeCall<void, APrimalDinoCharacter *, APawn *>(this, "AShooterPlayerController.ClientNotifyDinoKill_Implementation", InstigatingPawn, VictimPawn); }
	void ClientNotifyEditText_Implementation(TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject * ForObject) { NativeCall<void, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>(this, "AShooterPlayerController.ClientNotifyEditText_Implementation", ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ClientNotifyHitHarvest_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyHitHarvest_Implementation"); }
	void ClientNotifyLevelUp_Implementation(APrimalCharacter * ForChar, int NewLevel) { NativeCall<void, APrimalCharacter *, int>(this, "AShooterPlayerController.ClientNotifyLevelUp_Implementation", ForChar, NewLevel); }
	void ClientNotifyListenServerOutOfRange_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyListenServerOutOfRange_Implementation"); }
	void ClientNotifyMessageOfTheDay_Implementation(const FString * Message, float TimeToDisplay) { NativeCall<void, const FString *, float>(this, "AShooterPlayerController.ClientNotifyMessageOfTheDay_Implementation", Message, TimeToDisplay); }
	void ClientNotifyPaintFinished_Implementation(bool bSuccess) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientNotifyPaintFinished_Implementation", bSuccess); }
	void ClientNotifyPlayerDeathReason_Implementation(const FString * ReasonString) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientNotifyPlayerDeathReason_Implementation", ReasonString); }
	void ClientNotifyPlayerDeath_Implementation(APawn * InstigatingPawn) { NativeCall<void, APawn *>(this, "AShooterPlayerController.ClientNotifyPlayerDeath_Implementation", InstigatingPawn); }
	void ClientNotifyPlayerKill_Implementation(AActor * PlayerPawn, APawn * VictimPawn) { NativeCall<void, AActor *, APawn *>(this, "AShooterPlayerController.ClientNotifyPlayerKill_Implementation", PlayerPawn, VictimPawn); }
	void ClientNotifyReconnected_Implementation(APawn * NewPawn) { NativeCall<void, APawn *>(this, "AShooterPlayerController.ClientNotifyReconnected_Implementation", NewPawn); }
	void ClientNotifyRemotePlayerDeath_Implementation(const FString * PlayerName, const FString * AttackerName) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ClientNotifyRemotePlayerDeath_Implementation", PlayerName, AttackerName); }
	void ClientNotifyRespawned_Implementation(APawn * NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn *, bool>(this, "AShooterPlayerController.ClientNotifyRespawned_Implementation", NewPawn, IsFirstSpawn); }
	void ClientNotifySummonedDino_Implementation(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerController.ClientNotifySummonedDino_Implementation", DinoClass); }
	void ClientNotifyTamedDino_Implementation(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerController.ClientNotifyTamedDino_Implementation", DinoClass); }
	void ClientNotifyTorpidityIncrease_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyTorpidityIncrease_Implementation"); }
	void ClientNotifyTribeXP_Implementation(float HowMuch) { NativeCall<void, float>(this, "AShooterPlayerController.ClientNotifyTribeXP_Implementation", HowMuch); }
	void ClientNotifyUnlockHairStyleOrEmote_Implementation(FName HairstyleOrEmoteName) { NativeCall<void, FName>(this, "AShooterPlayerController.ClientNotifyUnlockHairStyleOrEmote_Implementation", HairstyleOrEmoteName); }
	void ClientNotifyUnlockedAllExplorerNotes_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyUnlockedAllExplorerNotes_Implementation"); }
	void ClientNotifyUnlockedEngram_Implementation(TSubclassOf<UPrimalItem> ItemClass, bool bTekGram) { NativeCall<void, TSubclassOf<UPrimalItem>, bool>(this, "AShooterPlayerController.ClientNotifyUnlockedEngram_Implementation", ItemClass, bTekGram); }
	void ClientOnAddedItemsToAllClustersInventory_Implementation(bool Success, const FString * UserId, const TArray<int> * MasterIndexNum) { NativeCall<void, bool, const FString *, const TArray<int> *>(this, "AShooterPlayerController.ClientOnAddedItemsToAllClustersInventory_Implementation", Success, UserId, MasterIndexNum); }
	void ClientOnCurrentCharacterAndItemsUploaded_Implementation(unsigned __int64 TransferringPlayerDataId) { NativeCall<void, unsigned __int64>(this, "AShooterPlayerController.ClientOnCurrentCharacterAndItemsUploaded_Implementation", TransferringPlayerDataId); }
	void ClientOnDropAllNotReadyForUploadItemsFinished_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientOnDropAllNotReadyForUploadItemsFinished_Implementation"); }
	void ClientOnEndDownloadTransferredPlayerCharacter_Implementation(bool Success, int FailureResponseCode, const FString * FailureResponseMessage) { NativeCall<void, bool, int, const FString *>(this, "AShooterPlayerController.ClientOnEndDownloadTransferredPlayerCharacter_Implementation", Success, FailureResponseCode, FailureResponseMessage); }
	void ClientOnStartDownloadTransferredPlayerCharacter_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientOnStartDownloadTransferredPlayerCharacter_Implementation"); }
	void ClientPlayLocalSound_Implementation(USoundBase * aSound, bool bAttach) { NativeCall<void, USoundBase *, bool>(this, "AShooterPlayerController.ClientPlayLocalSound_Implementation", aSound, bAttach); }
	void ClientPlayerIsValidToDownload_Implementation(bool bIsValid, const FArkTributePlayerData PlayerData) { NativeCall<void, bool, const FArkTributePlayerData>(this, "AShooterPlayerController.ClientPlayerIsValidToDownload_Implementation", bIsValid, PlayerData); }
	void ClientProcessItemNetExecCommandBP_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandBP_Implementation", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ClientProcessItemNetExecCommandUnreliableBP_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandUnreliableBP_Implementation", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ClientReceiveActiveMissionTags_Implementation(const TArray<FName> * MissionTags) { NativeCall<void, const TArray<FName> *>(this, "AShooterPlayerController.ClientReceiveActiveMissionTags_Implementation", MissionTags); }
	void ClientReceiveDinoAncestors_Implementation(APrimalDinoCharacter * ForDino, const TArray<FDinoAncestorsEntry> * DinoAncestors, const TArray<FDinoAncestorsEntry> * DinoAncestorsMale, int RandomMutationsFemale, int RandomMutationsMale) { NativeCall<void, APrimalDinoCharacter *, const TArray<FDinoAncestorsEntry> *, const TArray<FDinoAncestorsEntry> *, int, int>(this, "AShooterPlayerController.ClientReceiveDinoAncestors_Implementation", ForDino, DinoAncestors, DinoAncestorsMale, RandomMutationsFemale, RandomMutationsMale); }
	void ClientReceiveDinoCharStats_Implementation(APrimalDinoCharacter * theDinoChar, const TArray<float> * CurValues, const TArray<float> * MaxValues) { NativeCall<void, APrimalDinoCharacter *, const TArray<float> *, const TArray<float> *>(this, "AShooterPlayerController.ClientReceiveDinoCharStats_Implementation", theDinoChar, CurValues, MaxValues); }
	void ClientReceiveMyTribeOnlineList_Implementation(const TArray<unsigned int> * OnlinePlayerIDs) { NativeCall<void, const TArray<unsigned int> *>(this, "AShooterPlayerController.ClientReceiveMyTribeOnlineList_Implementation", OnlinePlayerIDs); }
	void ClientReceiveOriginalHairColor_Implementation(FLinearColor HairColor) { NativeCall<void, FLinearColor>(this, "AShooterPlayerController.ClientReceiveOriginalHairColor_Implementation", HairColor); }
	void ClientReceiveStructuresPlacedOnFloor_Implementation(const TArray<FStructuresOnFloor> * Structures) { NativeCall<void, const TArray<FStructuresOnFloor> *>(this, "AShooterPlayerController.ClientReceiveStructuresPlacedOnFloor_Implementation", Structures); }
	void ClientReceiveTamingInfoList_Implementation(const TArray<FTamingDinoInfo> * InfoList) { NativeCall<void, const TArray<FTamingDinoInfo> *>(this, "AShooterPlayerController.ClientReceiveTamingInfoList_Implementation", InfoList); }
	void ClientReceiveTribeLog_Implementation(const FString * LogString) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientReceiveTribeLog_Implementation", LogString); }
	void ClientRefreshSteamInventoryFinished_Implementation(bool bSuccess) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientRefreshSteamInventoryFinished_Implementation", bSuccess); }
	void ClientRemoveActorItem_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID, bool showHUDMessage) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool>(this, "AShooterPlayerController.ClientRemoveActorItem_Implementation", forInventory, itemID, showHUDMessage); }
	void ClientRemoveItemFromArk_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID RemovedItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ClientRemoveItemFromArk_Implementation", forInventory, RemovedItemID); }
	void ClientRemoveItemFromSteamInventory_Implementation(const TArray<unsigned __int64> * ItemSteamUserID, int Quantity) { NativeCall<void, const TArray<unsigned __int64> *, int>(this, "AShooterPlayerController.ClientRemoveItemFromSteamInventory_Implementation", ItemSteamUserID, Quantity); }
	void ClientRequestSpectatorLocationAndRotation_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientRequestSpectatorLocationAndRotation_Implementation"); }
	void ClientResetRespawningFlag_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientResetRespawningFlag_Implementation"); }
	void ClientReset_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientReset_Implementation"); }
	void ClientRunLocalConsoleCommand_Implementation(const FString * Command, bool bWriteToLog) { NativeCall<void, const FString *, bool>(this, "AShooterPlayerController.ClientRunLocalConsoleCommand_Implementation", Command, bWriteToLog); }
	void ClientSendArkDataPayloadBegin_Implementation(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const FString * DataClass, const FString * TagName, const FString * Name, const TArray<FString> * DataStats, unsigned int ID1, unsigned int ID2) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const FString *, const FString *, const FString *, const TArray<FString> *, unsigned int, unsigned int>(this, "AShooterPlayerController.ClientSendArkDataPayloadBegin_Implementation", ID, ArkDataType, DataClass, TagName, Name, DataStats, ID1, ID2); }
	void ClientSendArkDataPayloadEnd_Implementation(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, unsigned __int64 PlayerDataID) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, unsigned __int64>(this, "AShooterPlayerController.ClientSendArkDataPayloadEnd_Implementation", ID, ArkDataType, PlayerDataID); }
	void ClientSendArkDataPayload_Implementation(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const TArray<unsigned char> * DataBytes) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const TArray<unsigned char> *>(this, "AShooterPlayerController.ClientSendArkDataPayload_Implementation", ID, ArkDataType, DataBytes); }
	void ClientSendFolderData_Implementation(UPrimalInventoryComponent * forInventory, const TArray<FServerCustomFolder> * ServerCustomFolder) { NativeCall<void, UPrimalInventoryComponent *, const TArray<FServerCustomFolder> *>(this, "AShooterPlayerController.ClientSendFolderData_Implementation", forInventory, ServerCustomFolder); }
	void ClientSendItemNetExecCommandToServer(UPrimalItem * forItem, FName CommandName, const FBPNetExecParams * ExecParams, bool bIsReliable) { NativeCall<void, UPrimalItem *, FName, const FBPNetExecParams *, bool>(this, "AShooterPlayerController.ClientSendItemNetExecCommandToServer", forItem, CommandName, ExecParams, bIsReliable); }
	void ClientServerChatDirectMessage_Implementation(const FString * MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, const FString *, FLinearColor, bool>(this, "AShooterPlayerController.ClientServerChatDirectMessage_Implementation", MessageText, MessageColor, bIsBold); }
	void ClientServerChatMessage_Implementation(const FString * MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, const FString *, FLinearColor, bool>(this, "AShooterPlayerController.ClientServerChatMessage_Implementation", MessageText, MessageColor, bIsBold); }
	void ClientServerNotificationSingle_Implementation(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay, int MessageTypeID) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *, int>(this, "AShooterPlayerController.ClientServerNotificationSingle_Implementation", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, MessageTypeID); }
	void ClientServerNotification_Implementation(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>(this, "AShooterPlayerController.ClientServerNotification_Implementation", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientServerSOTFNotificationCustom_Implementation(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>(this, "AShooterPlayerController.ClientServerSOTFNotificationCustom_Implementation", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientServerSOTFNotification_Implementation(ESTOFNotificationType::Type NotificationType, const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay, bool bLastPlayer, const FString * TribeName, const TArray<FString> * PlayerNames, const FString * DeathReason, const TArray<FPrimalPlayerCharacterConfigStructReplicated> * DeadPlayersData) { NativeCall<void, ESTOFNotificationType::Type, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *, bool, const FString *, const TArray<FString> *, const FString *, const TArray<FPrimalPlayerCharacterConfigStructReplicated> *>(this, "AShooterPlayerController.ClientServerSOTFNotification_Implementation", NotificationType, MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, bLastPlayer, TribeName, PlayerNames, DeathReason, DeadPlayersData); }
	void ClientSetArkTributeLimits_Implementation(bool LimitItems, bool LimitDinos, bool LimitCharacters, int MaxItems, int MaxDinos, int MaxCharacters) { NativeCall<void, bool, bool, bool, int, int, int>(this, "AShooterPlayerController.ClientSetArkTributeLimits_Implementation", LimitItems, LimitDinos, LimitCharacters, MaxItems, MaxDinos, MaxCharacters); }
	void ClientSetControlRotation_Implementation(FRotator NewRotation) { NativeCall<void, FRotator>(this, "AShooterPlayerController.ClientSetControlRotation_Implementation", NewRotation); }
	void ClientSetHUDAndInitUIScenes_Implementation(TSubclassOf<AHUD> NewHUDClass) { NativeCall<void, TSubclassOf<AHUD>>(this, "AShooterPlayerController.ClientSetHUDAndInitUIScenes_Implementation", NewHUDClass); }
	void ClientSetPersonalDinoTameCount_Implementation(int NewPersonalDinoTameCount) { NativeCall<void, int>(this, "AShooterPlayerController.ClientSetPersonalDinoTameCount_Implementation", NewPersonalDinoTameCount); }
	void ClientSetSpectatorLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>(this, "AShooterPlayerController.ClientSetSpectatorLocation_Implementation", NewLocation); }
	void ClientShowCharacterCreationUI_Implementation(bool bShowDownloadCharacter) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientShowCharacterCreationUI_Implementation", bShowDownloadCharacter); }
	void ClientShowLeaderboard_Implementation(TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag, const TArray<FLeaderboardRow> * LeaderboardRows, bool bPlayerHasValidLatestScore, FLeaderboardRow LatestPlayerScore) { NativeCall<void, TSubclassOf<ULeaderboard>, FName, const TArray<FLeaderboardRow> *, bool, FLeaderboardRow>(this, "AShooterPlayerController.ClientShowLeaderboard_Implementation", LeaderboardType, MissionTag, LeaderboardRows, bPlayerHasValidLatestScore, LatestPlayerScore); }
	void ClientShowPaintingUI_Implementation(UObject * ObjectToPaint) { NativeCall<void, UObject *>(this, "AShooterPlayerController.ClientShowPaintingUI_Implementation", ObjectToPaint); }
	void ClientShowSpawnUIForTransferringPlayer_Implementation(TSubclassOf<AHUD> NewHUDClass, unsigned __int64 TransferingPlayerID, bool bUseTimer) { NativeCall<void, TSubclassOf<AHUD>, unsigned __int64, bool>(this, "AShooterPlayerController.ClientShowSpawnUIForTransferringPlayer_Implementation", NewHUDClass, TransferingPlayerID, bUseTimer); }
	void ClientShowSpawnUI_Implementation(float Delay) { NativeCall<void, float>(this, "AShooterPlayerController.ClientShowSpawnUI_Implementation", Delay); }
	void ClientShowTransferredPlayerConfirmationDialog_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientShowTransferredPlayerConfirmationDialog_Implementation"); }
	void ClientStartReceivingActorItems_Implementation(UPrimalInventoryComponent * forInventory, bool bEquippedItems) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "AShooterPlayerController.ClientStartReceivingActorItems_Implementation", forInventory, bEquippedItems); }
	void ClientStartReceivingTribeLog_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ClientStartReceivingTribeLog_Implementation"); }
	void ClientStartSurfaceCameraForPassenger_Implementation(float yaw, float pitch, float roll, bool bInvertTurnInput) { NativeCall<void, float, float, float, bool>(this, "AShooterPlayerController.ClientStartSurfaceCameraForPassenger_Implementation", yaw, pitch, roll, bInvertTurnInput); }
	void ClientStopLocalSound_Implementation(USoundBase * aSound) { NativeCall<void, USoundBase *>(this, "AShooterPlayerController.ClientStopLocalSound_Implementation", aSound); }
	void ClientSwapActorItems_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>(this, "AShooterPlayerController.ClientSwapActorItems_Implementation", forInventory, itemID1, itemID2); }
	void ClientTeamMessage_Implementation(APlayerState * SenderPlayerState, const FString * S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState *, const FString *, FName, float>(this, "AShooterPlayerController.ClientTeamMessage_Implementation", SenderPlayerState, S, Type, MsgLifeTime); }
	void ClientTeleportSpectator_Implementation(FVector Location, unsigned __int64 PlayerID) { NativeCall<void, FVector, unsigned __int64>(this, "AShooterPlayerController.ClientTeleportSpectator_Implementation", Location, PlayerID); }
	void ClientTeleportSucceeded_Implementation(FVector TeleportLoc, FRotator TeleportRot, bool bSimpleTeleport) { NativeCall<void, FVector, FRotator, bool>(this, "AShooterPlayerController.ClientTeleportSucceeded_Implementation", TeleportLoc, TeleportRot, bSimpleTeleport); }
	void ClientUnlockAchievement_Implementation(const FString * AchievementID) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientUnlockAchievement_Implementation", AchievementID); }
	void ClientUnlockExplorerNote_Implementation(int ExplorerNoteIndex, bool forceShowExplorerNoteUI) { NativeCall<void, int, bool>(this, "AShooterPlayerController.ClientUnlockExplorerNote_Implementation", ExplorerNoteIndex, forceShowExplorerNoteUI); }
	void ClientUpdateInventoryCraftQueue_Implementation(UPrimalInventoryComponent * forInventory, const TArray<FItemCraftQueueEntry> * CraftQueueEntries) { NativeCall<void, UPrimalInventoryComponent *, const TArray<FItemCraftQueueEntry> *>(this, "AShooterPlayerController.ClientUpdateInventoryCraftQueue_Implementation", forInventory, CraftQueueEntries); }
	void ClientUpdateItemCustomData_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID, FCustomItemData InData) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FCustomItemData>(this, "AShooterPlayerController.ClientUpdateItemCustomData_Implementation", forInventory, itemID, InData); }
	void ClientUpdateItemDurability_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID, float ItemDurability) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, float>(this, "AShooterPlayerController.ClientUpdateItemDurability_Implementation", forInventory, itemID, ItemDurability); }
	void ClientUpdateItemQuantity_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID, int ItemQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ClientUpdateItemQuantity_Implementation", forInventory, itemID, ItemQuantity); }
	void ClientUpdateItemWeaponClipAmmo_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID, int Ammo) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ClientUpdateItemWeaponClipAmmo_Implementation", forInventory, itemID, Ammo); }
	void ClientUploadedCharactersLoaded_Implementation(bool Success, const TArray<FArkTributePlayerDataListing> * UploadedDinosListings) { NativeCall<void, bool, const TArray<FArkTributePlayerDataListing> *>(this, "AShooterPlayerController.ClientUploadedCharactersLoaded_Implementation", Success, UploadedDinosListings); }
	void ClientUploadedDinosLoaded_Implementation(const TArray<FARKTributeDinoListing> * UploadedDinosListings) { NativeCall<void, const TArray<FARKTributeDinoListing> *>(this, "AShooterPlayerController.ClientUploadedDinosLoaded_Implementation", UploadedDinosListings); }
	void ClientUsedActorItem_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ClientUsedActorItem_Implementation", forInventory, itemID); }
	void Client_ReceiveBuffFromDayCycle_Implementation(TSubclassOf<APrimalBuff> GiveBuffClass, ADayCycleManager * FromDayCycle) { NativeCall<void, TSubclassOf<APrimalBuff>, ADayCycleManager *>(this, "AShooterPlayerController.Client_ReceiveBuffFromDayCycle_Implementation", GiveBuffClass, FromDayCycle); }
	void Client_ReceivePingResponse_Implementation(const FReplicatePingData ResponseData, AShooterCharacter * RespondingPlayer) { NativeCall<void, const FReplicatePingData, AShooterCharacter *>(this, "AShooterPlayerController.Client_ReceivePingResponse_Implementation", ResponseData, RespondingPlayer); }
	void Client_ReceivePing_Implementation(const FReplicatePingData ReceivedPingData) { NativeCall<void, const FReplicatePingData>(this, "AShooterPlayerController.Client_ReceivePing_Implementation", ReceivedPingData); }
	void CloseSteamStatusScene() { NativeCall<void>(this, "AShooterPlayerController.CloseSteamStatusScene"); }
	void ConditonalEndGamepadModiferState() { NativeCall<void>(this, "AShooterPlayerController.ConditonalEndGamepadModiferState"); }
	FString * ConsoleCommand(FString * result, const FString * Command, bool bWriteToLog) { return NativeCall<FString *, FString *, const FString *, bool>(this, "AShooterPlayerController.ConsoleCommand", result, Command, bWriteToLog); }
	void CopyCoordsToClipboard() { NativeCall<void>(this, "AShooterPlayerController.CopyCoordsToClipboard"); }
	void CopyWorldBuffStatus() { NativeCall<void>(this, "AShooterPlayerController.CopyWorldBuffStatus"); }
	void DebugCheckSeven(bool bEnable) { NativeCall<void, bool>(this, "AShooterPlayerController.DebugCheckSeven", bEnable); }
	void DebugStructures() { NativeCall<void>(this, "AShooterPlayerController.DebugStructures"); }
	void DelayedTeamSpectatorSetup() { NativeCall<void>(this, "AShooterPlayerController.DelayedTeamSpectatorSetup"); }
	void Destroyed() { NativeCall<void>(this, "AShooterPlayerController.Destroyed"); }
	void DisableEnemyInvisible() { NativeCall<void>(this, "AShooterPlayerController.DisableEnemyInvisible"); }
	void DisableSpectator() { NativeCall<void>(this, "AShooterPlayerController.DisableSpectator"); }
	void DisableSurfaceCameraInterpolation() { NativeCall<void>(this, "AShooterPlayerController.DisableSurfaceCameraInterpolation"); }
	void DisallowPlayerToJoinNoCheck(const FString * PlayerId) { NativeCall<void, const FString *>(this, "AShooterPlayerController.DisallowPlayerToJoinNoCheck", PlayerId); }
	void DoCrash() { NativeCall<void>(this, "AShooterPlayerController.DoCrash"); }
	void DoDestroyTribeIdStructures() { NativeCall<void>(this, "AShooterPlayerController.DoDestroyTribeIdStructures"); }
	void DoFlushLevelStreaming() { NativeCall<void>(this, "AShooterPlayerController.DoFlushLevelStreaming"); }
	bool DoPingTrace(FReplicatePingData * NewPing, bool * bIsResponding) { return NativeCall<bool, FReplicatePingData *, bool *>(this, "AShooterPlayerController.DoPingTrace", NewPing, bIsResponding); }
	void DoPlayerCommand(FString TheCommand) { NativeCall<void, FString>(this, "AShooterPlayerController.DoPlayerCommand", TheCommand); }
	void DoServerCheckUnfreeze_Implementation() { NativeCall<void>(this, "AShooterPlayerController.DoServerCheckUnfreeze_Implementation"); }
	static bool DoesPlayerOwnPing(const AShooterPlayerController * PlayerPC, const unsigned int PingOwnerID) { return NativeCall<bool, const AShooterPlayerController *, const unsigned int>(nullptr, "AShooterPlayerController.DoesPlayerOwnPing", PlayerPC, PingOwnerID); }
	void DownloadTransferredPlayerCharacter() { NativeCall<void>(this, "AShooterPlayerController.DownloadTransferredPlayerCharacter"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterPlayerController.DrawHUD", HUD); }
	void EnableCheats(const FString Pass) { NativeCall<void, const FString>(this, "AShooterPlayerController.EnableCheats", Pass); }
	void EnableSpectator() { NativeCall<void>(this, "AShooterPlayerController.EnableSpectator"); }
	void EndAArkGamepadDpadUp() { NativeCall<void>(this, "AShooterPlayerController.EndAArkGamepadDpadUp"); }
	void EndArkGamepadBackButton() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadBackButton"); }
	void EndArkGamepadDpadDown() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadDpadDown"); }
	void EndArkGamepadDpadLeft() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadDpadLeft"); }
	void EndArkGamepadDpadRight() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadDpadRight"); }
	void EndArkGamepadFaceButtonBottom() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonBottom"); }
	void EndArkGamepadFaceButtonLeft() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonLeft"); }
	void EndArkGamepadFaceButtonRight() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonRight"); }
	void EndArkGamepadFaceButtonTop() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadFaceButtonTop"); }
	void EndArkGamepadLeftShoulder() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadLeftShoulder"); }
	void EndArkGamepadRightShoulder() { NativeCall<void>(this, "AShooterPlayerController.EndArkGamepadRightShoulder"); }
	void EndEmoteSelection() { NativeCall<void>(this, "AShooterPlayerController.EndEmoteSelection"); }
	void EndInventoryRadialSelector() { NativeCall<void>(this, "AShooterPlayerController.EndInventoryRadialSelector"); }
	void EndPlayerActionRadialSelector() { NativeCall<void>(this, "AShooterPlayerController.EndPlayerActionRadialSelector"); }
	void EndSurfaceCamera() { NativeCall<void>(this, "AShooterPlayerController.EndSurfaceCamera"); }
	void EndWhistleSelection() { NativeCall<void>(this, "AShooterPlayerController.EndWhistleSelection"); }
	void EnemyInVisible(bool Invisible) { NativeCall<void, bool>(this, "AShooterPlayerController.EnemyInVisible", Invisible); }
	void EnforcementHighlight(bool bEnable) { NativeCall<void, bool>(this, "AShooterPlayerController.EnforcementHighlight", bEnable); }
	void EnvQA() { NativeCall<void>(this, "AShooterPlayerController.EnvQA"); }
	void ExportDinoData(APrimalDinoCharacter * DinoToExport) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.ExportDinoData", DinoToExport); }
	void FadeOutLoadingMusic() { NativeCall<void>(this, "AShooterPlayerController.FadeOutLoadingMusic"); }
	void FailedToSpawnPawn() { NativeCall<void>(this, "AShooterPlayerController.FailedToSpawnPawn"); }
	void FinalFlushLevelStreaming() { NativeCall<void>(this, "AShooterPlayerController.FinalFlushLevelStreaming"); }
	void FlushLevelStreaming() { NativeCall<void>(this, "AShooterPlayerController.FlushLevelStreaming"); }
	void FlushPressedKeys() { NativeCall<void>(this, "AShooterPlayerController.FlushPressedKeys"); }
	void FlushPrimalStats() { NativeCall<void>(this, "AShooterPlayerController.FlushPrimalStats"); }
	void ForceCraftPressed() { NativeCall<void>(this, "AShooterPlayerController.ForceCraftPressed"); }
	void ForceCraftReleased() { NativeCall<void>(this, "AShooterPlayerController.ForceCraftReleased"); }
	void ForceTame(bool bCheatTame, APrimalDinoCharacter * Dino) { NativeCall<void, bool, APrimalDinoCharacter *>(this, "AShooterPlayerController.ForceTame", bCheatTame, Dino); }
	void ForceTribes(const FString * PlayerName1, const FString * PlayerName2, const FString * NewTribeName) { NativeCall<void, const FString *, const FString *, const FString *>(this, "AShooterPlayerController.ForceTribes", PlayerName1, PlayerName2, NewTribeName); }
	void ForceUnstasisAtLocation(FVector AtLocation) { NativeCall<void, FVector>(this, "AShooterPlayerController.ForceUnstasisAtLocation", AtLocation); }
	FString * FormatTextWithKeyBindings(FString * result, FString InText, bool bIgnoreMarkup) { return NativeCall<FString *, FString *, FString, bool>(this, "AShooterPlayerController.FormatTextWithKeyBindings", result, InText, bIgnoreMarkup); }
	bool Get3DValuesAreDirty() { return NativeCall<bool>(this, "AShooterPlayerController.Get3DValuesAreDirty"); }
	bool GetAllAimedHarvestActors(float MaxDistance, TArray<AActor *> * OutHarvestActors, TArray<UActorComponent *> * OutHarvestComponents, TArray<int> * OutHitBodyIndices) { return NativeCall<bool, float, TArray<AActor *> *, TArray<UActorComponent *> *, TArray<int> *>(this, "AShooterPlayerController.GetAllAimedHarvestActors", MaxDistance, OutHarvestActors, OutHarvestComponents, OutHitBodyIndices); }
	void GetAllMatinees() { NativeCall<void>(this, "AShooterPlayerController.GetAllMatinees"); }
	void GetAudioListenerPosition(FVector * OutLocation, FVector * OutFrontDir, FVector * OutRightDir) { NativeCall<void, FVector *, FVector *, FVector *>(this, "AShooterPlayerController.GetAudioListenerPosition", OutLocation, OutFrontDir, OutRightDir); }
	FLeaderboardRow * GetBestScoreForMission(FLeaderboardRow * result, FName MissionTag) { return NativeCall<FLeaderboardRow *, FLeaderboardRow *, FName>(this, "AShooterPlayerController.GetBestScoreForMission", result, MissionTag); }
	float GetChatProximityRadius() { return NativeCall<float>(this, "AShooterPlayerController.GetChatProximityRadius"); }
	TArray<FString> * GetCheatsCommands(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "AShooterPlayerController.GetCheatsCommands", result); }
	AShooterCharacter * GetControllerPlayer() { return NativeCall<AShooterCharacter *>(this, "AShooterPlayerController.GetControllerPlayer"); }
	int GetCurrentMultiUseWheelCategory() { return NativeCall<int>(this, "AShooterPlayerController.GetCurrentMultiUseWheelCategory"); }
	FExplorerNoteEntry * GetExplorerNoteEntry(FExplorerNoteEntry * result, int ExplorerNoteIndex) { return NativeCall<FExplorerNoteEntry *, FExplorerNoteEntry *, int>(this, "AShooterPlayerController.GetExplorerNoteEntry", result, ExplorerNoteIndex); }
	FVector * GetFocalLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterPlayerController.GetFocalLocation", result); }
	TArray<unsigned char> * GetHeldItemSlots(TArray<unsigned char> * result) { return NativeCall<TArray<unsigned char> *, TArray<unsigned char> *>(this, "AShooterPlayerController.GetHeldItemSlots", result); }
	bool GetIsMissionWaypointActive() { return NativeCall<bool>(this, "AShooterPlayerController.GetIsMissionWaypointActive"); }
	TKeyValuePair<bool,FLeaderboardRow> * GetLatestScoreForMission(TKeyValuePair<bool,FLeaderboardRow> * result, FName MissionTag) { return NativeCall<TKeyValuePair<bool,FLeaderboardRow> *, TKeyValuePair<bool,FLeaderboardRow> *, FName>(this, "AShooterPlayerController.GetLatestScoreForMission", result, MissionTag); }
	FVector * GetLevelStreamingPawnViewLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterPlayerController.GetLevelStreamingPawnViewLocation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterPlayerController.GetLifetimeReplicatedProps", OutLifetimeProps); }
	unsigned __int64 GetLinkedPlayerID64() { return NativeCall<unsigned __int64>(this, "AShooterPlayerController.GetLinkedPlayerID64"); }
	int GetLinkedPlayerID() { return NativeCall<int>(this, "AShooterPlayerController.GetLinkedPlayerID"); }
	FName * GetMissionWaypointID(FName * result) { return NativeCall<FName *, FName *>(this, "AShooterPlayerController.GetMissionWaypointID", result); }
	TArray<FPointOfInterestData_ForCompanion> * GetNearbyPOIs(TArray<FPointOfInterestData_ForCompanion> * result) { return NativeCall<TArray<FPointOfInterestData_ForCompanion> *, TArray<FPointOfInterestData_ForCompanion> *>(this, "AShooterPlayerController.GetNearbyPOIs", result); }
	UShooterPersistentUser * GetPersistentUser() { return NativeCall<UShooterPersistentUser *>(this, "AShooterPlayerController.GetPersistentUser"); }
	FString * GetPersonalTameLimitString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerController.GetPersonalTameLimitString", result); }
	static FString * GetPingTitleForActor(FString * result, AActor * ForActor) { return NativeCall<FString *, FString *, AActor *>(nullptr, "AShooterPlayerController.GetPingTitleForActor", result, ForActor); }
	AShooterCharacter * GetPlayerCharacter() { return NativeCall<AShooterCharacter *>(this, "AShooterPlayerController.GetPlayerCharacter"); }
	FString * GetPlayerCharacterName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerController.GetPlayerCharacterName", result); }
	void GetPlayerViewPoint(FVector * out_Location, FRotator * out_Rotation) { NativeCall<void, FVector *, FRotator *>(this, "AShooterPlayerController.GetPlayerViewPoint", out_Location, out_Rotation); }
	void GetPlayerViewPoint(FVector * out_Location, FRotator * out_Rotation, bool ForAiming) { NativeCall<void, FVector *, FRotator *, bool>(this, "AShooterPlayerController.GetPlayerViewPoint", out_Location, out_Rotation, ForAiming); }
	void GetPlayerViewPointNoModifiers(FVector * out_Location, FRotator * out_Rotation, bool ForAiming, bool bNoTPVAim) { NativeCall<void, FVector *, FRotator *, bool, bool>(this, "AShooterPlayerController.GetPlayerViewPointNoModifiers", out_Location, out_Rotation, ForAiming, bNoTPVAim); }
	TArray<unsigned int> * GetRadioFrequencies(TArray<unsigned int> * result) { return NativeCall<TArray<unsigned int> *, TArray<unsigned int> *>(this, "AShooterPlayerController.GetRadioFrequencies", result); }
	AShooterHUD * GetShooterHUD() { return NativeCall<AShooterHUD *>(this, "AShooterPlayerController.GetShooterHUD"); }
	AShooterPlayerState * GetShooterPlayerState() { return NativeCall<AShooterPlayerState *>(this, "AShooterPlayerController.GetShooterPlayerState"); }
	int GetSubscribedAppIds() { return NativeCall<int>(this, "AShooterPlayerController.GetSubscribedAppIds"); }
	void GetTamedDinosNearBy(TArray<TWeakObjectPtr<APrimalDinoCharacter>> * Dinos) { NativeCall<void, TArray<TWeakObjectPtr<APrimalDinoCharacter>> *>(this, "AShooterPlayerController.GetTamedDinosNearBy", Dinos); }
	void GetTamedDinosNearBy(TArray<TWeakObjectPtr<APrimalDinoCharacter>> * Dinos, float RangeRadius, FVector NearLocation) { NativeCall<void, TArray<TWeakObjectPtr<APrimalDinoCharacter>> *, float, FVector>(this, "AShooterPlayerController.GetTamedDinosNearBy", Dinos, RangeRadius, NearLocation); }
	FString * GetUniqueNetIdAsString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerController.GetUniqueNetIdAsString", result); }
	unsigned __int64 GetUniqueNetIdAsUINT64() { return NativeCall<unsigned __int64>(this, "AShooterPlayerController.GetUniqueNetIdAsUINT64"); }
	FVector * GetViewLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterPlayerController.GetViewLocation", result); }
	void GiveActorToMe(AActor * anAct, bool bNotifyNetwork) { NativeCall<void, AActor *, bool>(this, "AShooterPlayerController.GiveActorToMe", anAct, bNotifyNetwork); }
	void GiveColors(int quantity) { NativeCall<void, int>(this, "AShooterPlayerController.GiveColors", quantity); }
	void GiveCryoItemAndCaptureDino(APrimalDinoCharacter * targetDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.GiveCryoItemAndCaptureDino", targetDino); }
	void GiveEngrams(bool bForceAllEngrams, bool bTekEngramsOnly) { NativeCall<void, bool, bool>(this, "AShooterPlayerController.GiveEngrams", bForceAllEngrams, bTekEngramsOnly); }
	bool GiveFast(const FName * blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint, float MinRandomQuality) { return NativeCall<bool, const FName *, int, float, bool, float>(this, "AShooterPlayerController.GiveFast", blueprintPath, quantityOverride, qualityOverride, bForceBlueprint, MinRandomQuality); }
	bool GiveItem(TArray<UPrimalItem *> * outItems, const FString * blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint, bool bAutoEquip, float MinRandomQuality) { return NativeCall<bool, TArray<UPrimalItem *> *, const FString *, int, float, bool, bool, float>(this, "AShooterPlayerController.GiveItem", outItems, blueprintPath, quantityOverride, qualityOverride, bForceBlueprint, bAutoEquip, MinRandomQuality); }
	bool GiveItem(const FString * blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint, bool bAutoEquip, float MinRandomQuality) { return NativeCall<bool, const FString *, int, float, bool, bool, float>(this, "AShooterPlayerController.GiveItem", blueprintPath, quantityOverride, qualityOverride, bForceBlueprint, bAutoEquip, MinRandomQuality); }
	bool GiveItemNum(int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint) { return NativeCall<bool, int, int, float, bool>(this, "AShooterPlayerController.GiveItemNum", masterIndexNum, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveResources() { NativeCall<void>(this, "AShooterPlayerController.GiveResources"); }
	bool GiveSlotItem(const FString * blueprintPath, int slotNum, int quantityOverride) { return NativeCall<bool, const FString *, int, int>(this, "AShooterPlayerController.GiveSlotItem", blueprintPath, slotNum, quantityOverride); }
	bool GiveSlotItemNum(int masterIndexNum, int slotNum, int quantityOverride) { return NativeCall<bool, int, int, int>(this, "AShooterPlayerController.GiveSlotItemNum", masterIndexNum, slotNum, quantityOverride); }
	void GiveToMe() { NativeCall<void>(this, "AShooterPlayerController.GiveToMe"); }
	void GlobalCommand(const FString * Msg) { NativeCall<void, const FString *>(this, "AShooterPlayerController.GlobalCommand", Msg); }
	void HandleRespawned_Implementation(APawn * NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn *, bool>(this, "AShooterPlayerController.HandleRespawned_Implementation", NewPawn, IsFirstSpawn); }
	bool HasBestScoreForMission(FName MissionTag) { return NativeCall<bool, FName>(this, "AShooterPlayerController.HasBestScoreForMission", MissionTag); }
	bool HasGodMode() { return NativeCall<bool>(this, "AShooterPlayerController.HasGodMode"); }
	bool HasInstantHarvest() { return NativeCall<bool>(this, "AShooterPlayerController.HasInstantHarvest"); }
	bool HasRadio() { return NativeCall<bool>(this, "AShooterPlayerController.HasRadio"); }
	bool HasSameRadioFrequency(AShooterPlayerController * OtherPC, unsigned int * SharedFrequency) { return NativeCall<bool, AShooterPlayerController *, unsigned int *>(this, "AShooterPlayerController.HasSameRadioFrequency", OtherPC, SharedFrequency); }
	void HiWarp(const FString * ClassName, int Index) { NativeCall<void, const FString *, int>(this, "AShooterPlayerController.HiWarp", ClassName, Index); }
	void HibernationReport(const FString * ClassName) { NativeCall<void, const FString *>(this, "AShooterPlayerController.HibernationReport", ClassName); }
	void HideRiders(bool bDoHide) { NativeCall<void, bool>(this, "AShooterPlayerController.HideRiders", bDoHide); }
	void HideTutorial(int TutorialIndex) { NativeCall<void, int>(this, "AShooterPlayerController.HideTutorial", TutorialIndex); }
	void IncrementPrimalStats(EPrimalStatsValueTypes::Type statsValueType) { NativeCall<void, EPrimalStatsValueTypes::Type>(this, "AShooterPlayerController.IncrementPrimalStats", statsValueType); }
	void InfiniteStats() { NativeCall<void>(this, "AShooterPlayerController.InfiniteStats"); }
	void InitCharacterPainting_Implementation(APrimalCharacter * Char) { NativeCall<void, APrimalCharacter *>(this, "AShooterPlayerController.InitCharacterPainting_Implementation", Char); }
	void InitHUD(bool bForceReinitUI) { NativeCall<void, bool>(this, "AShooterPlayerController.InitHUD", bForceReinitUI); }
	void InitInputSystem() { NativeCall<void>(this, "AShooterPlayerController.InitInputSystem"); }
	bool InitPing(FPingData * ForPingData, const FReplicatePingData * InitFromData) { return NativeCall<bool, FPingData *, const FReplicatePingData *>(this, "AShooterPlayerController.InitPing", ForPingData, InitFromData); }
	bool IsAltFireInputPressed() { return NativeCall<bool>(this, "AShooterPlayerController.IsAltFireInputPressed"); }
	bool IsAtPersonalTameLimit(bool bIsForStructure) { return NativeCall<bool, bool>(this, "AShooterPlayerController.IsAtPersonalTameLimit", bIsForStructure); }
	bool IsEmoteUnlocked(FName EmoteName) { return NativeCall<bool, FName>(this, "AShooterPlayerController.IsEmoteUnlocked", EmoteName); }
	bool IsFirstLocalPlayer() { return NativeCall<bool>(this, "AShooterPlayerController.IsFirstLocalPlayer"); }
	bool IsFirstLocalPlayerOrLivingLocalPlayer() { return NativeCall<bool>(this, "AShooterPlayerController.IsFirstLocalPlayerOrLivingLocalPlayer"); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "AShooterPlayerController.IsGameInputAllowed"); }
	bool IsHudVisible() { return NativeCall<bool>(this, "AShooterPlayerController.IsHudVisible"); }
	bool IsInTribe() { return NativeCall<bool>(this, "AShooterPlayerController.IsInTribe"); }
	bool IsInputPressed(const FName InputName, const FName GamepadInputName) { return NativeCall<bool, const FName, const FName>(this, "AShooterPlayerController.IsInputPressed", InputName, GamepadInputName); }
	bool IsJumpInputPressed() { return NativeCall<bool>(this, "AShooterPlayerController.IsJumpInputPressed"); }
	bool IsOnSeatingStructure() { return NativeCall<bool>(this, "AShooterPlayerController.IsOnSeatingStructure"); }
	bool IsPOINearCenterOfScreen(FVector2D POIPosition) { return NativeCall<bool, FVector2D>(this, "AShooterPlayerController.IsPOINearCenterOfScreen", POIPosition); }
	bool IsPawnAcknowledged() { return NativeCall<bool>(this, "AShooterPlayerController.IsPawnAcknowledged"); }
	static bool IsPingedItem(UPrimitiveComponent * PingComponent) { return NativeCall<bool, UPrimitiveComponent *>(nullptr, "AShooterPlayerController.IsPingedItem", PingComponent); }
	static bool IsPlayerViewingPing(const AShooterPlayerController * ForPC, const FPingData * CheckPingData) { return NativeCall<bool, const AShooterPlayerController *, const FPingData *>(nullptr, "AShooterPlayerController.IsPlayerViewingPing", ForPC, CheckPingData); }
	bool IsRemoteControlling() { return NativeCall<bool>(this, "AShooterPlayerController.IsRemoteControlling"); }
	bool IsRidingDino() { return NativeCall<bool>(this, "AShooterPlayerController.IsRidingDino"); }
	bool IsSavingData() { return NativeCall<bool>(this, "AShooterPlayerController.IsSavingData"); }
	bool IsSpectator() { return NativeCall<bool>(this, "AShooterPlayerController.IsSpectator"); }
	bool IsTamedDinoNearBy(APrimalDinoCharacter * Dino, float RangeRadius) { return NativeCall<bool, APrimalDinoCharacter *, float>(this, "AShooterPlayerController.IsTamedDinoNearBy", Dino, RangeRadius); }
	bool IsTribeAdmin() { return NativeCall<bool>(this, "AShooterPlayerController.IsTribeAdmin"); }
	bool IsValidArkTributePlayerDownloadForThisServer(const FArkTributePlayerData * PlayerData) { return NativeCall<bool, const FArkTributePlayerData *>(this, "AShooterPlayerController.IsValidArkTributePlayerDownloadForThisServer", PlayerData); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "AShooterPlayerController.IsValidUnStasisCaster"); }
	bool IsViewingInventoryUI() { return NativeCall<bool>(this, "AShooterPlayerController.IsViewingInventoryUI"); }
	void KickPlayer(FString PlayerSteamName) { NativeCall<void, FString>(this, "AShooterPlayerController.KickPlayer", PlayerSteamName); }
	void LeaveMeAlone() { NativeCall<void>(this, "AShooterPlayerController.LeaveMeAlone"); }
	void LevelView() { NativeCall<void>(this, "AShooterPlayerController.LevelView"); }
	FString * LinkedPlayerIDString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterPlayerController.LinkedPlayerIDString", result); }
	void LoadLocalPlayerArkData() { NativeCall<void>(this, "AShooterPlayerController.LoadLocalPlayerArkData"); }
	void LoadProfile(bool ForceReload) { NativeCall<void, bool>(this, "AShooterPlayerController.LoadProfile", ForceReload); }
	void LoadSpectatorPos(int Index) { NativeCall<void, int>(this, "AShooterPlayerController.LoadSpectatorPos", Index); }
	void LockEmote(FName EmoteName) { NativeCall<void, FName>(this, "AShooterPlayerController.LockEmote", EmoteName); }
	void LogChatMessage(const FChatMessage * Msg) { NativeCall<void, const FChatMessage *>(this, "AShooterPlayerController.LogChatMessage", Msg); }
	void LookInput(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.LookInput", Val); }
	void LookUpAtRate(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.LookUpAtRate", Val); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.MoveRight", Val); }
	void MulticastCharacterVivoxUsername() { NativeCall<void>(this, "AShooterPlayerController.MulticastCharacterVivoxUsername"); }
	void NotifyDealDamageSuccess(APrimalCharacter * HitCharacter, bool bHitFriendlyTarget, float PreDamageHealth, float DamageAmount, const FDamageEvent * DamageEvent) { NativeCall<void, APrimalCharacter *, bool, float, float, const FDamageEvent *>(this, "AShooterPlayerController.NotifyDealDamageSuccess", HitCharacter, bHitFriendlyTarget, PreDamageHealth, DamageAmount, DamageEvent); }
	void NotifyPawnBuffsOfDamageEvent(AActor * DamagedActor, float DamageAmount, const FDamageEvent * DamageEvent) { NativeCall<void, AActor *, float, const FDamageEvent *>(this, "AShooterPlayerController.NotifyPawnBuffsOfDamageEvent", DamagedActor, DamageAmount, DamageEvent); }
	void NotifyTribeWarStatus_Implementation(const FString * EnemyTribeString, int StatusType) { NativeCall<void, const FString *, int>(this, "AShooterPlayerController.NotifyTribeWarStatus_Implementation", EnemyTribeString, StatusType); }
	void OnAddItemFinished(bool bSuccess, TArray<unsigned __int64> SteamItemUserIds, unsigned __int64 SteamID) { NativeCall<void, bool, TArray<unsigned __int64>, unsigned __int64>(this, "AShooterPlayerController.OnAddItemFinished", bSuccess, SteamItemUserIds, SteamID); }
	void OnAddedItemsToAllClustersInventory(bool Success, const FString * UserId, const TArray<int> * MasterIndexNum) { NativeCall<void, bool, const FString *, const TArray<int> *>(this, "AShooterPlayerController.OnAddedItemsToAllClustersInventory", Success, UserId, MasterIndexNum); }
	void OnArkTributeAllClustersInventoryItemsLoaded(const TArray<FItemNetInfo> * Items, bool bAllowForcedItemDownload) { NativeCall<void, const TArray<FItemNetInfo> *, bool>(this, "AShooterPlayerController.OnArkTributeAllClustersInventoryItemsLoaded", Items, bAllowForcedItemDownload); }
	void OnArkTributeSaved(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.OnArkTributeSaved", Success); }
	void OnConsumeItemFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>(this, "AShooterPlayerController.OnConsumeItemFinished", bSuccess, SteamID); }
	void OnCurrentCharacterAndItemsUploaded(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.OnCurrentCharacterAndItemsUploaded", Success); }
	void OnDisableSpectator_Implementation() { NativeCall<void>(this, "AShooterPlayerController.OnDisableSpectator_Implementation"); }
	void OnEmoteKey1Press() { NativeCall<void>(this, "AShooterPlayerController.OnEmoteKey1Press"); }
	void OnEmoteKey1Release() { NativeCall<void>(this, "AShooterPlayerController.OnEmoteKey1Release"); }
	void OnEmoteKey2Press() { NativeCall<void>(this, "AShooterPlayerController.OnEmoteKey2Press"); }
	void OnEmoteKey2Release() { NativeCall<void>(this, "AShooterPlayerController.OnEmoteKey2Release"); }
	void OnExtendedInfoPress() { NativeCall<void>(this, "AShooterPlayerController.OnExtendedInfoPress"); }
	void OnExtendedInfoRelease() { NativeCall<void>(this, "AShooterPlayerController.OnExtendedInfoRelease"); }
	void OnFirstSaveAfterCharacterDownloadFinished(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.OnFirstSaveAfterCharacterDownloadFinished", Success); }
	void OnGamepadUsePress() { NativeCall<void>(this, "AShooterPlayerController.OnGamepadUsePress"); }
	void OnGamepadUseRelease() { NativeCall<void>(this, "AShooterPlayerController.OnGamepadUseRelease"); }
	void OnKeyboardUsePress() { NativeCall<void>(this, "AShooterPlayerController.OnKeyboardUsePress"); }
	void OnKeyboardUseRelease() { NativeCall<void>(this, "AShooterPlayerController.OnKeyboardUseRelease"); }
	void OnLevelView() { NativeCall<void>(this, "AShooterPlayerController.OnLevelView"); }
	void OnLoadArkTributePlayersDataFinished(bool Success, const TArray<FArkTributePlayerData> * ArkUploadedCharsData, int FailureResponseCode) { NativeCall<void, bool, const TArray<FArkTributePlayerData> *, int>(this, "AShooterPlayerController.OnLoadArkTributePlayersDataFinished", Success, ArkUploadedCharsData, FailureResponseCode); }
	void OnPingDown() { NativeCall<void>(this, "AShooterPlayerController.OnPingDown"); }
	void OnPingUp() { NativeCall<void>(this, "AShooterPlayerController.OnPingUp"); }
	void OnPressGroupAddOrRemoveTame() { NativeCall<void>(this, "AShooterPlayerController.OnPressGroupAddOrRemoveTame"); }
	void OnRefreshSteamInventoryFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>(this, "AShooterPlayerController.OnRefreshSteamInventoryFinished", bSuccess, SteamID); }
	void OnRefreshSteamInventoryToCheckConsumeFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>(this, "AShooterPlayerController.OnRefreshSteamInventoryToCheckConsumeFinished", bSuccess, SteamID); }
	void OnRepeatUseHeldTimer() { NativeCall<void>(this, "AShooterPlayerController.OnRepeatUseHeldTimer"); }
	void OnServerRefreshSteamInventoryFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>(this, "AShooterPlayerController.OnServerRefreshSteamInventoryFinished", bSuccess, SteamID); }
	void OnStartFire() { NativeCall<void>(this, "AShooterPlayerController.OnStartFire"); }
	void OnStartGamepadLeftFire() { NativeCall<void>(this, "AShooterPlayerController.OnStartGamepadLeftFire"); }
	void OnStartGamepadRightFire() { NativeCall<void>(this, "AShooterPlayerController.OnStartGamepadRightFire"); }
	void OnStartTargeting() { NativeCall<void>(this, "AShooterPlayerController.OnStartTargeting"); }
	void OnStopFire() { NativeCall<void>(this, "AShooterPlayerController.OnStopFire"); }
	void OnStopGamepadLeftFire() { NativeCall<void>(this, "AShooterPlayerController.OnStopGamepadLeftFire"); }
	void OnStopGamepadRightFire() { NativeCall<void>(this, "AShooterPlayerController.OnStopGamepadRightFire"); }
	void OnStopTargeting() { NativeCall<void>(this, "AShooterPlayerController.OnStopTargeting"); }
	void OnToggleDoFMenu() { NativeCall<void>(this, "AShooterPlayerController.OnToggleDoFMenu"); }
	void OnToggleInGameMenu() { NativeCall<void>(this, "AShooterPlayerController.OnToggleInGameMenu"); }
	void OnTransferCharacterConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "AShooterPlayerController.OnTransferCharacterConfirmationDialogClosed", bAccept); }
	void OnUseHeldTimer() { NativeCall<void>(this, "AShooterPlayerController.OnUseHeldTimer"); }
	void OnUseItemSlotForStructure(int ItemSlotNumber) { NativeCall<void, int>(this, "AShooterPlayerController.OnUseItemSlotForStructure", ItemSlotNumber); }
	void OnUsePress(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterPlayerController.OnUsePress", bFromGamepad); }
	void OnUseRelease(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterPlayerController.OnUseRelease", bFromGamepad); }
	void OnWhistlePress() { NativeCall<void>(this, "AShooterPlayerController.OnWhistlePress"); }
	void OpenMapMarkers() { NativeCall<void>(this, "AShooterPlayerController.OpenMapMarkers"); }
	void OrganizeSOTFQueue(TEnumAsByte<enum ESTOFNotificationType::Type> NotificationType, TArray<FString> PlayerNames, FString DeathReason, FString TribeName, TArray<FPrimalPlayerCharacterConfigStructReplicated> DeadPlayersData, bool bLastPlayer, bool bForcePlay, float DisplayInterval, FString CustomString) { NativeCall<void, TEnumAsByte<enum ESTOFNotificationType::Type>, TArray<FString>, FString, FString, TArray<FPrimalPlayerCharacterConfigStructReplicated>, bool, bool, float, FString>(this, "AShooterPlayerController.OrganizeSOTFQueue", NotificationType, PlayerNames, DeathReason, TribeName, DeadPlayersData, bLastPlayer, bForcePlay, DisplayInterval, CustomString); }
	void PawnLeavingGame() { NativeCall<void>(this, "AShooterPlayerController.PawnLeavingGame"); }
	void PawnPendingDestroy(APawn * inPawn) { NativeCall<void, APawn *>(this, "AShooterPlayerController.PawnPendingDestroy", inPawn); }
	void PingNearbyPlayers(const FReplicatePingData * WithPingData) { NativeCall<void, const FReplicatePingData *>(this, "AShooterPlayerController.PingNearbyPlayers", WithPingData); }
	void PlayHitMarkerCharacter_Implementation(bool bHitFriendlyTarget, const FHitMarkerSettings HitMarkerSettings) { NativeCall<void, bool, const FHitMarkerSettings>(this, "AShooterPlayerController.PlayHitMarkerCharacter_Implementation", bHitFriendlyTarget, HitMarkerSettings); }
	void PlayHitMarkerStructureAlly_Implementation() { NativeCall<void>(this, "AShooterPlayerController.PlayHitMarkerStructureAlly_Implementation"); }
	void PlayHitMarkerStructure_Implementation() { NativeCall<void>(this, "AShooterPlayerController.PlayHitMarkerStructure_Implementation"); }
	FString * PlayerCommand_Implementation(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "AShooterPlayerController.PlayerCommand_Implementation", result, TheCommand); }
	void Possess(APawn * inPawn) { NativeCall<void, APawn *>(this, "AShooterPlayerController.Possess", inPawn); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterPlayerController.PostInitializeComponents"); }
	void PrintColors() { NativeCall<void>(this, "AShooterPlayerController.PrintColors"); }
	void ProcessedSyncTamingDinoWaypoints(const TMap<unsigned int,FTamingDinoInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,FTamingDinoInfo,0> > * TamingList) { NativeCall<void, const TMap<unsigned int,FTamingDinoInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<unsigned int,FTamingDinoInfo,0> > *>(this, "AShooterPlayerController.ProcessedSyncTamingDinoWaypoints", TamingList); }
	void PurchaseEngramPoint(int NumPointsToPurchase) { NativeCall<void, int>(this, "AShooterPlayerController.PurchaseEngramPoint", NumPointsToPurchase); }
	void QueueRequestEquippedItems(UPrimalInventoryComponent * invComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.QueueRequestEquippedItems", invComp); }
	void QuitToMainMenu() { NativeCall<void>(this, "AShooterPlayerController.QuitToMainMenu"); }
	void RPCStayAlive_Implementation() { NativeCall<void>(this, "AShooterPlayerController.RPCStayAlive_Implementation"); }
	void RawSyncTamingDinoWaypoints(const TArray<FTamingDinoInfo> * TamingList) { NativeCall<void, const TArray<FTamingDinoInfo> *>(this, "AShooterPlayerController.RawSyncTamingDinoWaypoints", TamingList); }
	void ReceivedPlayerState() { NativeCall<void>(this, "AShooterPlayerController.ReceivedPlayerState"); }
	void RefreshSteamInventory() { NativeCall<void>(this, "AShooterPlayerController.RefreshSteamInventory"); }
	void RemoveDinoFromMap(APrimalDinoCharacter * Dino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.RemoveDinoFromMap", Dino); }
	void RemoveInvetoryItem(unsigned int ItemID) { NativeCall<void, unsigned int>(this, "AShooterPlayerController.RemoveInvetoryItem", ItemID); }
	void RemoveItemSucceeded() { NativeCall<void>(this, "AShooterPlayerController.RemoveItemSucceeded"); }
	void ReportLeastSpawnManagers() { NativeCall<void>(this, "AShooterPlayerController.ReportLeastSpawnManagers"); }
	void ReportSpawnManagers() { NativeCall<void>(this, "AShooterPlayerController.ReportSpawnManagers"); }
	void RequestCreateNewPlayerWithArkData(TArray<unsigned char> PlayerArkDataBytes, unsigned __int64 TribeID) { NativeCall<void, TArray<unsigned char>, unsigned __int64>(this, "AShooterPlayerController.RequestCreateNewPlayerWithArkData", PlayerArkDataBytes, TribeID); }
	void RequestCreateNewPlayerWithArkDataPossibleItems(const FArkTributePlayerData * PlayerData, unsigned __int64 TribeID) { NativeCall<void, const FArkTributePlayerData *, unsigned __int64>(this, "AShooterPlayerController.RequestCreateNewPlayerWithArkDataPossibleItems", PlayerData, TribeID); }
	void RequestSpectator(const FString InSpectatorPass) { NativeCall<void, const FString>(this, "AShooterPlayerController.RequestSpectator", InSpectatorPass); }
	void Reset() { NativeCall<void>(this, "AShooterPlayerController.Reset"); }
	void ResetSpawnTime() { NativeCall<void>(this, "AShooterPlayerController.ResetSpawnTime"); }
	void RespondToPing(const FReplicatePingData * RespondToPingData) { NativeCall<void, const FReplicatePingData *>(this, "AShooterPlayerController.RespondToPing", RespondToPingData); }
	void RetryJoinVivoxChannel() { NativeCall<void>(this, "AShooterPlayerController.RetryJoinVivoxChannel"); }
	void RetryLoginToVivox() { NativeCall<void>(this, "AShooterPlayerController.RetryLoginToVivox"); }
	void SCP() { NativeCall<void>(this, "AShooterPlayerController.SCP"); }
	void SPI(float X, float Y, float Z, float Yaw, float Pitch) { NativeCall<void, float, float, float, float, float>(this, "AShooterPlayerController.SPI", X, Y, Z, Yaw, Pitch); }
	bool SameLinkedId(__int64 value) { return NativeCall<bool, __int64>(this, "AShooterPlayerController.SameLinkedId", value); }
	void SaveProfile() { NativeCall<void>(this, "AShooterPlayerController.SaveProfile"); }
	void SaveSpectatorPos(int Index) { NativeCall<void, int>(this, "AShooterPlayerController.SaveSpectatorPos", Index); }
	void ScheduleTryLoadProfile() { NativeCall<void>(this, "AShooterPlayerController.ScheduleTryLoadProfile"); }
	void ScrollChatDown() { NativeCall<void>(this, "AShooterPlayerController.ScrollChatDown"); }
	void ScrollChatUp() { NativeCall<void>(this, "AShooterPlayerController.ScrollChatUp"); }
	void SendAlarmNotification(FString SteamID, FString Title, FString Message) { NativeCall<void, FString, FString, FString>(this, "AShooterPlayerController.SendAlarmNotification", SteamID, Title, Message); }
	void SendArKPayload(bool bClient, FARKTributeData ArKDataPayload) { NativeCall<void, bool, FARKTributeData>(this, "AShooterPlayerController.SendArKPayload", bClient, ArKDataPayload); }
	void SendDinoToServer(FARKTributeDino DownloadedDino) { NativeCall<void, FARKTributeDino>(this, "AShooterPlayerController.SendDinoToServer", DownloadedDino); }
	bool SendUseItemSlotToStructure() { return NativeCall<bool>(this, "AShooterPlayerController.SendUseItemSlotToStructure"); }
	void ServerActorCloseRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerActorCloseRemoteInventory_Implementation", inventoryComp); }
	void ServerActorViewRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerActorViewRemoteInventory_Implementation", inventoryComp); }
	void ServerAddAchievementID_Implementation(const FString * AchievementID, bool bIsOnSpawn) { NativeCall<void, const FString *, bool>(this, "AShooterPlayerController.ServerAddAchievementID_Implementation", AchievementID, bIsOnSpawn); }
	void ServerAddItemFromArkInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ServerAddItemFromArkInventory_Implementation", inventoryComp, itemID, requestedQuantity); }
	void ServerAddItemToArkInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ServerAddItemToArkInventory_Implementation", inventoryComp, itemID, requestedQuantity); }
	void ServerAddItemToCustomFolder_Implementation(UPrimalInventoryComponent * forInventory, const FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int, FItemNetID>(this, "AShooterPlayerController.ServerAddItemToCustomFolder_Implementation", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerAddItemToSteamInventory(int ItemSteamDefID, int Quantity) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerAddItemToSteamInventory", ItemSteamDefID, Quantity); }
	void ServerAllowPlayerToJoinNoCheck_Implementation(const FString * PlayerId) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerAllowPlayerToJoinNoCheck_Implementation", PlayerId); }
	void ServerAsyncLoadArkInventoryItems_Implementation(const TArray<FItemNetInfo> * ArkInventoryItemsInfo, bool bFinalBatch) { NativeCall<void, const TArray<FItemNetInfo> *, bool>(this, "AShooterPlayerController.ServerAsyncLoadArkInventoryItems_Implementation", ArkInventoryItemsInfo, bFinalBatch); }
	void ServerBanPlayer_Implementation(const FString * PlayerSteamName, const FString * PlayerSteamID) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerBanPlayer_Implementation", PlayerSteamName, PlayerSteamID); }
	void ServerCharacterUploadWithItems_CharaterPayload_Implementation(unsigned __int64 PlayerDataId, const TArray<unsigned char> * PlayerDataChunk) { NativeCall<void, unsigned __int64, const TArray<unsigned char> *>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_CharaterPayload_Implementation", PlayerDataId, PlayerDataChunk); }
	void ServerCharacterUploadWithItems_FinishAndCreateCharacter_Implementation(unsigned __int64 PlayerDataId) { NativeCall<void, unsigned __int64>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter_Implementation", PlayerDataId); }
	void ServerCharacterUploadWithItems_Start_Implementation(unsigned __int64 PlayerDataId, FArkTributePlayerData PlayerData) { NativeCall<void, unsigned __int64, FArkTributePlayerData>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_Start_Implementation", PlayerDataId, PlayerData); }
	void ServerCharacterUploadWithItems_UploadItem_Implementation(unsigned __int64 PlayerDataId, FItemNetInfo InvItem) { NativeCall<void, unsigned __int64, FItemNetInfo>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_UploadItem_Implementation", PlayerDataId, InvItem); }
	void ServerCheckIsValidPlayerToDownload_Implementation(const FArkTributePlayerData PlayerData) { NativeCall<void, const FArkTributePlayerData>(this, "AShooterPlayerController.ServerCheckIsValidPlayerToDownload_Implementation", PlayerData); }
	void ServerCheckUnfreeze_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerCheckUnfreeze_Implementation"); }
	void ServerCraftItem_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerCraftItem_Implementation", inventoryComp, itemID); }
	void ServerCycleSpectator_Implementation(bool bNext) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerCycleSpectator_Implementation", bNext); }
	void ServerDPC_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerDPC_Implementation"); }
	void ServerDataSetRPC_Implementation(const TArray<FDataSet> * dataSets) { NativeCall<void, const TArray<FDataSet> *>(this, "AShooterPlayerController.ServerDataSetRPC_Implementation", dataSets); }
	void ServerDeleteCustomFolder_Implementation(UPrimalInventoryComponent * forInventory, const FString * CFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int>(this, "AShooterPlayerController.ServerDeleteCustomFolder_Implementation", forInventory, CFolderName, InventoryCompType); }
	void ServerDeleteItemFromCustomFolder_Implementation(UPrimalInventoryComponent * forInventory, const FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int, FItemNetID>(this, "AShooterPlayerController.ServerDeleteItemFromCustomFolder_Implementation", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerDisallowPlayerToJoinNoCheck_Implementation(const FString * PlayerId) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerDisallowPlayerToJoinNoCheck_Implementation", PlayerId); }
	bool ServerDownloadDino(FARKTributeDino DownloadedDino) { return NativeCall<bool, FARKTributeDino>(this, "AShooterPlayerController.ServerDownloadDino", DownloadedDino); }
	void ServerDownloadTransferredPlayer_Implementation(int spawnPointID, int spawnPointRegionIndex) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerDownloadTransferredPlayer_Implementation", spawnPointID, spawnPointRegionIndex); }
	void ServerDropAllNotReadyForUploadItems_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerDropAllNotReadyForUploadItems_Implementation"); }
	void ServerDropFromRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerDropFromRemoteInventory_Implementation", inventoryComp, itemID); }
	void ServerEquipPawnItem_Implementation(FItemNetID itemID) { NativeCall<void, FItemNetID>(this, "AShooterPlayerController.ServerEquipPawnItem_Implementation", itemID); }
	void ServerEquipToRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerEquipToRemoteInventory_Implementation", inventoryComp, itemID); }
	void ServerGetMessageOfTheDay_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerGetMessageOfTheDay_Implementation"); }
	void ServerGetOriginalHairColor_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerGetOriginalHairColor_Implementation"); }
	void ServerGlobalCommand_Implementation(const FString * Msg) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerGlobalCommand_Implementation", Msg); }
	void ServerGrindItemInRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, bool grindStack) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool>(this, "AShooterPlayerController.ServerGrindItemInRemoteInventory_Implementation", inventoryComp, itemID, grindStack); }
	void ServerInventoryClearCraftQueue_Implementation(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerInventoryClearCraftQueue_Implementation", inventoryComp); }
	void ServerKickPlayer_Implementation(const FString * PlayerSteamName, const FString * PlayerSteamID) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerKickPlayer_Implementation", PlayerSteamName, PlayerSteamID); }
	void ServerListPlayers_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerListPlayers_Implementation"); }
	void ServerLoadArkInventoryItems_Implementation(const TArray<FItemNetInfo> * ArkInventoryItemsInfo, bool bFinalBatch) { NativeCall<void, const TArray<FItemNetInfo> *, bool>(this, "AShooterPlayerController.ServerLoadArkInventoryItems_Implementation", ArkInventoryItemsInfo, bFinalBatch); }
	void ServerLoadUploadedCharacters_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedCharacters_Implementation"); }
	void ServerLoadUploadedDinos_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedDinos_Implementation"); }
	void ServerLoginToVivox_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerLoginToVivox_Implementation"); }
	void ServerMultiUse_Implementation(UObject * ForObject, int useIndex) { NativeCall<void, UObject *, int>(this, "AShooterPlayerController.ServerMultiUse_Implementation", ForObject, useIndex); }
	void ServerNotifyEditText_Implementation(const FString * TextToUse, bool checkedBox, TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject * ForObject) { NativeCall<void, const FString *, bool, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>(this, "AShooterPlayerController.ServerNotifyEditText_Implementation", TextToUse, checkedBox, ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ServerPaint_Implementation(UStructurePaintingComponent * Structure, const TArray<FPaintItem> * Paints, bool bLastBatch, bool bFromLoadFile) { NativeCall<void, UStructurePaintingComponent *, const TArray<FPaintItem> *, bool, bool>(this, "AShooterPlayerController.ServerPaint_Implementation", Structure, Paints, bLastBatch, bFromLoadFile); }
	void ServerProcessItemNetExecCommandBP_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ServerProcessItemNetExecCommandBP_Implementation", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ServerProcessItemNetExecCommandUnreliableBP_Implementation(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ServerProcessItemNetExecCommandUnreliableBP_Implementation", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ServerReadMessageOFTheDay_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerReadMessageOFTheDay_Implementation"); }
	void ServerRecieveSpectatorLocationAndRotation_Implementation(const FVector spectatorLocation, const FRotator spectatorRotation) { NativeCall<void, const FVector, const FRotator>(this, "AShooterPlayerController.ServerRecieveSpectatorLocationAndRotation_Implementation", spectatorLocation, spectatorRotation); }
	void ServerRefreshSteamInventoryForRemove() { NativeCall<void>(this, "AShooterPlayerController.ServerRefreshSteamInventoryForRemove"); }
	void ServerRefreshSteamInventoryToCheckConsume() { NativeCall<void>(this, "AShooterPlayerController.ServerRefreshSteamInventoryToCheckConsume"); }
	void ServerRefreshSteamInventory_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRefreshSteamInventory_Implementation"); }
	void ServerReleaseSeatingStructure_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerReleaseSeatingStructure_Implementation"); }
	void ServerRemovePassenger_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRemovePassenger_Implementation"); }
	void ServerRemovePawnItem_Implementation(FItemNetID itemID, bool bSecondryAction) { NativeCall<void, FItemNetID, bool>(this, "AShooterPlayerController.ServerRemovePawnItem_Implementation", itemID, bSecondryAction); }
	void ServerRemoveSteamItemSucceeded_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRemoveSteamItemSucceeded_Implementation"); }
	void ServerRemoveSteamItem_Implementation(unsigned int ItemdDefId) { NativeCall<void, unsigned int>(this, "AShooterPlayerController.ServerRemoveSteamItem_Implementation", ItemdDefId); }
	void ServerRepairItem_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRepairItem_Implementation", inventoryComp, itemID); }
	void ServerRepeatMultiUse_Implementation(UObject * ForObject, int useIndex) { NativeCall<void, UObject *, int>(this, "AShooterPlayerController.ServerRepeatMultiUse_Implementation", ForObject, useIndex); }
	void ServerRequestActorItems_Implementation(UPrimalInventoryComponent * forInventory, bool bInventoryItems, bool bIsFirstSpawn) { NativeCall<void, UPrimalInventoryComponent *, bool, bool>(this, "AShooterPlayerController.ServerRequestActorItems_Implementation", forInventory, bInventoryItems, bIsFirstSpawn); }
	void ServerRequestCreateMissionDataBuff_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestCreateMissionDataBuff_Implementation"); }
	void ServerRequestCreateNewPlayerWithArkData(const TArray<unsigned char> * PlayerArkDataBytes, unsigned __int64 TribeID) { NativeCall<void, const TArray<unsigned char> *, unsigned __int64>(this, "AShooterPlayerController.ServerRequestCreateNewPlayerWithArkData", PlayerArkDataBytes, TribeID); }
	void ServerRequestDinoAncestors_Implementation(APrimalDinoCharacter * ForDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.ServerRequestDinoAncestors_Implementation", ForDino); }
	void ServerRequestDinoCharStats_Implementation(APrimalDinoCharacter * theDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.ServerRequestDinoCharStats_Implementation", theDinoChar); }
	void ServerRequestDownloadDino_Implementation(FARKTributeDino DownloadedDino) { NativeCall<void, FARKTributeDino>(this, "AShooterPlayerController.ServerRequestDownloadDino_Implementation", DownloadedDino); }
	void ServerRequestDownloadPlayerCharacter_Implementation(FArkTributePlayerData DownloadedCharacter, int spawnPointID, int spawnRegionIndex) { NativeCall<void, FArkTributePlayerData, int, int>(this, "AShooterPlayerController.ServerRequestDownloadPlayerCharacter_Implementation", DownloadedCharacter, spawnPointID, spawnRegionIndex); }
	void ServerRequestDropAllItems_Implementation(const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerRequestDropAllItems_Implementation", CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerRequestFastTravelToPoint_Implementation(int fromSpawnPointID, int spawnPointID) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestFastTravelToPoint_Implementation", fromSpawnPointID, spawnPointID); }
	void ServerRequestInventorySwapItems_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>(this, "AShooterPlayerController.ServerRequestInventorySwapItems_Implementation", inventoryComp, itemID1, itemID2); }
	void ServerRequestInventoryUseItemWithActor_Implementation(AActor * anActor, UPrimalInventoryComponent * inventoryComp, FItemNetID itemID1, int AdditionalData) { NativeCall<void, AActor *, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithActor_Implementation", anActor, inventoryComp, itemID1, AdditionalData); }
	void ServerRequestInventoryUseItemWithItem_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID1, FItemNetID itemID2, int AdditionalData) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithItem_Implementation", inventoryComp, itemID1, itemID2, AdditionalData); }
	void ServerRequestInventoryUseItem_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestInventoryUseItem_Implementation", inventoryComp, itemID); }
	void ServerRequestLevelUp_Implementation(UPrimalCharacterStatusComponent * forStatusComp, EPrimalCharacterStatusValue::Type ValueType) { NativeCall<void, UPrimalCharacterStatusComponent *, EPrimalCharacterStatusValue::Type>(this, "AShooterPlayerController.ServerRequestLevelUp_Implementation", forStatusComp, ValueType); }
	void ServerRequestMyTribeOnlineList_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestMyTribeOnlineList_Implementation"); }
	void ServerRequestPlaceStructure_Implementation(int StructureIndex, FVector BuildLocation, FRotator BuildRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, APrimalDinoCharacter * DinoCharacter, FName BoneName, FItemNetID PlaceUsingItemID, bool bSnapped, bool bIsCheat, bool bIsFlipped, int SnapPointCycle) { NativeCall<void, int, FVector, FRotator, FRotator, APawn *, APrimalDinoCharacter *, FName, FItemNetID, bool, bool, bool, int>(this, "AShooterPlayerController.ServerRequestPlaceStructure_Implementation", StructureIndex, BuildLocation, BuildRotation, PlayerViewRotation, AttachToPawn, DinoCharacter, BoneName, PlaceUsingItemID, bSnapped, bIsCheat, bIsFlipped, SnapPointCycle); }
	void ServerRequestRemoteDropAllItems_Implementation(UPrimalInventoryComponent * inventoryComp, const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter) { NativeCall<void, UPrimalInventoryComponent *, const FString *, const FString *>(this, "AShooterPlayerController.ServerRequestRemoteDropAllItems_Implementation", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerRequestRemoveDinoFromTamingListByID_Implementation(int InID1, int InID2) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRemoveDinoFromTamingListByID_Implementation", InID1, InID2); }
	void ServerRequestRemoveItemSkinOnly_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveItemSkinOnly_Implementation", inventoryComp, itemID); }
	void ServerRequestRemoveItemSkin_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveItemSkin_Implementation", inventoryComp, itemID); }
	void ServerRequestRemoveWeaponAccessoryOnly_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveWeaponAccessoryOnly_Implementation", inventoryComp, itemID); }
	void ServerRequestRemoveWeaponClipAmmo_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveWeaponClipAmmo_Implementation", inventoryComp, itemID); }
	void ServerRequestRespawnAtPoint_Implementation(int spawnPointID, int spawnRegionIndex) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRespawnAtPoint_Implementation", spawnPointID, spawnRegionIndex); }
	void ServerRequestSetPin_Implementation(UObject * forTarget, int PinValue, bool bIsSetting, int TheCustomIndex) { NativeCall<void, UObject *, int, bool, int>(this, "AShooterPlayerController.ServerRequestSetPin_Implementation", forTarget, PinValue, bIsSetting, TheCustomIndex); }
	void ServerRequestShowLeaderboards_Implementation(TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag) { NativeCall<void, TSubclassOf<ULeaderboard>, FName>(this, "AShooterPlayerController.ServerRequestShowLeaderboards_Implementation", LeaderboardType, MissionTag); }
	void ServerRequestStructuresPlacedOnFloor_Implementation(const TArray<APrimalStructure *> * OnStructures) { NativeCall<void, const TArray<APrimalStructure *> *>(this, "AShooterPlayerController.ServerRequestStructuresPlacedOnFloor_Implementation", OnStructures); }
	void ServerRequestTamingInfoList_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestTamingInfoList_Implementation"); }
	void ServerRequestTribeLog_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestTribeLog_Implementation"); }
	void ServerRequestUpdateActiveMissionTags_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestUpdateActiveMissionTags_Implementation"); }
	void ServerSelectedCustomItemAction_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, FName SelectedOption) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FName>(this, "AShooterPlayerController.ServerSelectedCustomItemAction_Implementation", inventoryComp, itemID, SelectedOption); }
	void ServerSendArkDataPayloadBegin_Implementation(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const FString * DataClass, const FString * TagName, const FString * Name, const TArray<FString> * DataStats, unsigned int ID1, unsigned int ID2) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const FString *, const FString *, const FString *, const TArray<FString> *, unsigned int, unsigned int>(this, "AShooterPlayerController.ServerSendArkDataPayloadBegin_Implementation", ID, ArkDataType, DataClass, TagName, Name, DataStats, ID1, ID2); }
	void ServerSendArkDataPayloadEnd_Implementation(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type>(this, "AShooterPlayerController.ServerSendArkDataPayloadEnd_Implementation", ID, ArkDataType); }
	void ServerSendArkDataPayload_Implementation(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const TArray<unsigned char> * DataBytes) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const TArray<unsigned char> *>(this, "AShooterPlayerController.ServerSendArkDataPayload_Implementation", ID, ArkDataType, DataBytes); }
	void ServerSendChatMessage_Implementation(const FString * ChatMessage, EChatSendMode::Type SendMode) { NativeCall<void, const FString *, EChatSendMode::Type>(this, "AShooterPlayerController.ServerSendChatMessage_Implementation", ChatMessage, SendMode); }
	void ServerSendDirectMessage_Implementation(const FString * PlayerSteamID, const FString * MessageText) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerSendDirectMessage_Implementation", PlayerSteamID, MessageText); }
	void ServerSetItemBalloonLocation_Implementation(APrimalStructureMovingContainer * ItemBalloon, FPrimalMapMarkerEntryData MapMarker) { NativeCall<void, APrimalStructureMovingContainer *, FPrimalMapMarkerEntryData>(this, "AShooterPlayerController.ServerSetItemBalloonLocation_Implementation", ItemBalloon, MapMarker); }
	void ServerSetMessageOfTheDay_Implementation(const FString * Message) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerSetMessageOfTheDay_Implementation", Message); }
	void ServerSetSpectatorLocation_Implementation(FVector NewLoc) { NativeCall<void, FVector>(this, "AShooterPlayerController.ServerSetSpectatorLocation_Implementation", NewLoc); }
	void ServerSetSubscribedApp_Implementation(int AppID, bool bPreventDefaultItems) { NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetSubscribedApp_Implementation", AppID, bPreventDefaultItems); }
	void ServerSetSupressAdminIcon_Implementation(bool bSuppress) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetSupressAdminIcon_Implementation", bSuppress); }
	void ServerSetVRPlayer_Implementation(bool bSetVRPlayer) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetVRPlayer_Implementation", bSetVRPlayer); }
	void ServerShowMessageOfTheDay_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerShowMessageOfTheDay_Implementation"); }
	void ServerSpectateToPlayerByID_Implementation(unsigned __int64 PlayerID) { NativeCall<void, unsigned __int64>(this, "AShooterPlayerController.ServerSpectateToPlayerByID_Implementation", PlayerID); }
	void ServerStartWeaponAltFire_Implementation(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStartWeaponAltFire_Implementation", weapon); }
	void ServerStartWeaponFire_Implementation(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStartWeaponFire_Implementation", weapon); }
	void ServerStopSpectating_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerStopSpectating_Implementation"); }
	void ServerStopWeaponAltFire_Implementation(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStopWeaponAltFire_Implementation", weapon); }
	void ServerStopWeaponFire_Implementation(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStopWeaponFire_Implementation", weapon); }
	void ServerSuccessfullyLoggedIntoVivox_Implementation() { NativeCall<void>(this, "AShooterPlayerController.ServerSuccessfullyLoggedIntoVivox_Implementation"); }
	void ServerTakeItemFromArkInventoryAfterRefresh() { NativeCall<void>(this, "AShooterPlayerController.ServerTakeItemFromArkInventoryAfterRefresh"); }
	void ServerTransferAllFromRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter, const FString * CurrentDestinationFolder, bool bNoFolderView) { NativeCall<void, UPrimalInventoryComponent *, const FString *, const FString *, const FString *, bool>(this, "AShooterPlayerController.ServerTransferAllFromRemoteInventory_Implementation", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter, CurrentDestinationFolder, bNoFolderView); }
	void ServerTransferAllToRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter, const FString * CurrentDestinationFolder, bool bNoFolderView) { NativeCall<void, UPrimalInventoryComponent *, const FString *, const FString *, const FString *, bool>(this, "AShooterPlayerController.ServerTransferAllToRemoteInventory_Implementation", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter, CurrentDestinationFolder, bNoFolderView); }
	void ServerTransferFromRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, int requestedQuantity, int ToSlotIndex, bool bEquipItem) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int, int, bool>(this, "AShooterPlayerController.ServerTransferFromRemoteInventory_Implementation", inventoryComp, itemID, requestedQuantity, ToSlotIndex, bEquipItem); }
	void ServerTransferToRemoteInventory_Implementation(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, bool bAlsoTryToEqup, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, int>(this, "AShooterPlayerController.ServerTransferToRemoteInventory_Implementation", inventoryComp, itemID, bAlsoTryToEqup, requestedQuantity); }
	void ServerTransferredPlayerConfirmationResult_Implementation(bool bAccpet) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerTransferredPlayerConfirmationResult_Implementation", bAccpet); }
	void ServerUnbanPlayer_Implementation(const FString * PlayerSteamName, const FString * PlayerSteamID) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerUnbanPlayer_Implementation", PlayerSteamName, PlayerSteamID); }
	void ServerUnlockPerMapExplorerNote_Implementation(int ExplorerNoteIndex, bool bAvoidBuff) { NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerUnlockPerMapExplorerNote_Implementation", ExplorerNoteIndex, bAvoidBuff); }
	void ServerUploadCharaterDataToArk_Implementation(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerUploadCharaterDataToArk_Implementation", inventoryComp); }
	void ServerUploadCurrentCharacterAndItems_Implementation(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerUploadCurrentCharacterAndItems_Implementation", inventoryComp); }
	void ServerUploadDino_Implementation(APrimalDinoCharacter * DownloadedDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.ServerUploadDino_Implementation", DownloadedDino); }
	void ServerVerifyStructurePlacementItemData_Implementation(FItemNetID PlaceUsingItemID) { NativeCall<void, FItemNetID>(this, "AShooterPlayerController.ServerVerifyStructurePlacementItemData_Implementation", PlaceUsingItemID); }
	void Server_Ping_Implementation(const FReplicatePingData WithPingData) { NativeCall<void, const FReplicatePingData>(this, "AShooterPlayerController.Server_Ping_Implementation", WithPingData); }
	void Server_RespondToPing_Implementation(const FReplicatePingData RespondToPingData) { NativeCall<void, const FReplicatePingData>(this, "AShooterPlayerController.Server_RespondToPing_Implementation", RespondToPingData); }
	void SetAdminIcon(bool bAdminIcon) { NativeCall<void, bool>(this, "AShooterPlayerController.SetAdminIcon", bAdminIcon); }
	void SetAutoPlayer(bool bEnable) { NativeCall<void, bool>(this, "AShooterPlayerController.SetAutoPlayer", bEnable); }
	void SetCharacterVivoxUsername(const FString * InVivoxUsername) { NativeCall<void, const FString *>(this, "AShooterPlayerController.SetCharacterVivoxUsername", InVivoxUsername); }
	void SetCheatPlayer(bool bEnable) { NativeCall<void, bool>(this, "AShooterPlayerController.SetCheatPlayer", bEnable); }
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>(this, "AShooterPlayerController.SetCinematicMode", bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void SetCinematicModeAdvanced(bool bInCinematicMode, bool bPreventCameraAnimFPV, bool bSetHUDHidden, bool bDisableKeymappings, const TArray<FName> KeyActionNames, bool bDisableChat) { NativeCall<void, bool, bool, bool, bool, const TArray<FName>, bool>(this, "AShooterPlayerController.SetCinematicModeAdvanced", bInCinematicMode, bPreventCameraAnimFPV, bSetHUDHidden, bDisableKeymappings, KeyActionNames, bDisableChat); }
	void SetControlRotation(const FRotator * NewRotation) { NativeCall<void, const FRotator *>(this, "AShooterPlayerController.SetControlRotation", NewRotation); }
	void SetControllerGamepadActive(bool bIsActive) { NativeCall<void, bool>(this, "AShooterPlayerController.SetControllerGamepadActive", bIsActive); }
	void SetDoFInterpTime(float InterpTime) { NativeCall<void, float>(this, "AShooterPlayerController.SetDoFInterpTime", InterpTime); }
	void SetGamma1() { NativeCall<void>(this, "AShooterPlayerController.SetGamma1"); }
	void SetGamma2() { NativeCall<void>(this, "AShooterPlayerController.SetGamma2"); }
	void SetGodMode(bool bEnable) { NativeCall<void, bool>(this, "AShooterPlayerController.SetGodMode", bEnable); }
	void SetGraphicsQuality(int val) { NativeCall<void, int>(this, "AShooterPlayerController.SetGraphicsQuality", val); }
	void SetImprintQuality(float ImprintingQuality) { NativeCall<void, float>(this, "AShooterPlayerController.SetImprintQuality", ImprintingQuality); }
	void SetInfiniteStats(const bool bInfinite) { NativeCall<void, const bool>(this, "AShooterPlayerController.SetInfiniteStats", bInfinite); }
	void SetInstantHarvest(bool bEnable) { NativeCall<void, bool>(this, "AShooterPlayerController.SetInstantHarvest", bEnable); }
	void SetKickedNotification(FString KickReason) { NativeCall<void, FString>(this, "AShooterPlayerController.SetKickedNotification", KickReason); }
	void SetMissionWaypointInfo(FString InWaypointTitle, FVector InWaypointDestination, FName InWaypointID) { NativeCall<void, FString, FVector, FName>(this, "AShooterPlayerController.SetMissionWaypointInfo", InWaypointTitle, InWaypointDestination, InWaypointID); }
	void SetMissionWaypointVisible(bool bInIsVisible) { NativeCall<void, bool>(this, "AShooterPlayerController.SetMissionWaypointVisible", bInIsVisible); }
	void SetMultiUseWheelCategory(int Category, APrimalBuff * OptionalBuff) { NativeCall<void, int, APrimalBuff *>(this, "AShooterPlayerController.SetMultiUseWheelCategory", Category, OptionalBuff); }
	void SetPawn(APawn * InPawn) { NativeCall<void, APawn *>(this, "AShooterPlayerController.SetPawn", InPawn); }
	void SetPlayer(UPlayer * InPlayer) { NativeCall<void, UPlayer *>(this, "AShooterPlayerController.SetPlayer", InPlayer); }
	void SetPlayerPos(float X, float Y, float Z) { NativeCall<void, float, float, float>(this, "AShooterPlayerController.SetPlayerPos", X, Y, Z); }
	void SetSyncTamingDinosWithoutUI(bool bShouldSync) { NativeCall<void, bool>(this, "AShooterPlayerController.SetSyncTamingDinosWithoutUI", bShouldSync); }
	APrimalDinoCharacter * SetTamingEffectivenessModifier(float TamingEffectiveness) { return NativeCall<APrimalDinoCharacter *, float>(this, "AShooterPlayerController.SetTamingEffectivenessModifier", TamingEffectiveness); }
	void SetTamingWaypoints(TArray<FTamingWaypointInfo> InWaypoints) { NativeCall<void, TArray<FTamingWaypointInfo>>(this, "AShooterPlayerController.SetTamingWaypoints", InWaypoints); }
	void SetupInputComponent() { NativeCall<void>(this, "AShooterPlayerController.SetupInputComponent"); }
	bool ShouldHideGameplayUI() { return NativeCall<bool>(this, "AShooterPlayerController.ShouldHideGameplayUI"); }
	bool ShouldReplicateVoicePacketFrom(const FUniqueNetId * Sender, char ShouldUseSuperRange, char * PlaybackFlags) { return NativeCall<bool, const FUniqueNetId *, char, char *>(this, "AShooterPlayerController.ShouldReplicateVoicePacketFrom", Sender, ShouldUseSuperRange, PlaybackFlags); }
	void ShowAllPlayersListToFollow() { NativeCall<void>(this, "AShooterPlayerController.ShowAllPlayersListToFollow"); }
	void ShowAllianceChat() { NativeCall<void>(this, "AShooterPlayerController.ShowAllianceChat"); }
	void ShowBattleGameModeHUD() { NativeCall<void>(this, "AShooterPlayerController.ShowBattleGameModeHUD"); }
	void ShowGlobalChat() { NativeCall<void>(this, "AShooterPlayerController.ShowGlobalChat"); }
	void Menu() { NativeCall<void>(this, "AShooterPlayerController.Menu"); }
	void ShowLocalChat() { NativeCall<void>(this, "AShooterPlayerController.ShowLocalChat"); }
	void ShowMyAdminManager() { NativeCall<void>(this, "AShooterPlayerController.ShowMyAdminManager"); }
	void ShowMyCraftables() { NativeCall<void>(this, "AShooterPlayerController.ShowMyCraftables"); }
	void ShowMyInventory() { NativeCall<void>(this, "AShooterPlayerController.ShowMyInventory"); }
	void ShowTransferCharacterConfirmationDialog() { NativeCall<void>(this, "AShooterPlayerController.ShowTransferCharacterConfirmationDialog"); }
	void ShowTribeChat() { NativeCall<void>(this, "AShooterPlayerController.ShowTribeChat"); }
	void ShowTribeManager() { NativeCall<void>(this, "AShooterPlayerController.ShowTribeManager"); }
	void ShowTutorial(int TutorialIndex, bool bForceDisplay) { NativeCall<void, int, bool>(this, "AShooterPlayerController.ShowTutorial", TutorialIndex, bForceDisplay); }
	void SpawnActorSpread(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, const FString *, float, float, float, int, float>(this, "AShooterPlayerController.SpawnActorSpread", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void SpawnActorSpreadTamed(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, const FString *, float, float, float, int, float>(this, "AShooterPlayerController.SpawnActorSpreadTamed", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void SpawnPlayerCameraManager() { NativeCall<void>(this, "AShooterPlayerController.SpawnPlayerCameraManager"); }
	void SpectatorDetachOrbitCamera() { NativeCall<void>(this, "AShooterPlayerController.SpectatorDetachOrbitCamera"); }
	void SpectatorNextPlayer() { NativeCall<void>(this, "AShooterPlayerController.SpectatorNextPlayer"); }
	void SpectatorPreviousPlayer() { NativeCall<void>(this, "AShooterPlayerController.SpectatorPreviousPlayer"); }
	void SpectatorTurn(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.SpectatorTurn", Val); }
	void SpectatorUseItem(int Index) { NativeCall<void, int>(this, "AShooterPlayerController.SpectatorUseItem", Index); }
	void StartArkGamepadBackButton() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadBackButton"); }
	void StartArkGamepadDpadDown() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadDown"); }
	void StartArkGamepadDpadLeft() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadLeft"); }
	void StartArkGamepadDpadRight() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadRight"); }
	void StartArkGamepadDpadUp() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadDpadUp"); }
	void StartArkGamepadFaceButtonBottom() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonBottom"); }
	void StartArkGamepadFaceButtonLeft() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonLeft"); }
	void StartArkGamepadFaceButtonRight() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonRight"); }
	void StartArkGamepadFaceButtonTop() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadFaceButtonTop"); }
	void StartArkGamepadLeftShoulder() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadLeftShoulder"); }
	void StartArkGamepadRightShoulder() { NativeCall<void>(this, "AShooterPlayerController.StartArkGamepadRightShoulder"); }
	void StartEmoteSelection() { NativeCall<void>(this, "AShooterPlayerController.StartEmoteSelection"); }
	void StartInventoryRadialSelector() { NativeCall<void>(this, "AShooterPlayerController.StartInventoryRadialSelector"); }
	void StartPlacingStructrue(TSubclassOf<APrimalStructure> BuildingStructure) { NativeCall<void, TSubclassOf<APrimalStructure>>(this, "AShooterPlayerController.StartPlacingStructrue", BuildingStructure); }
	void StartPlayerActionRadialSelector() { NativeCall<void>(this, "AShooterPlayerController.StartPlayerActionRadialSelector"); }
	void StartSurfaceCamera(float OnSurfaceTargetYaw, float OnSurfaceTargetPitch, float OnSurfaceTargetRoll, float OnSurfaceCameraInterpolationSpeed, bool UseSurfaceCameraInterpolation, const FVector * CameraOffset) { NativeCall<void, float, float, float, float, bool, const FVector *>(this, "AShooterPlayerController.StartSurfaceCamera", OnSurfaceTargetYaw, OnSurfaceTargetPitch, OnSurfaceTargetRoll, OnSurfaceCameraInterpolationSpeed, UseSurfaceCameraInterpolation, CameraOffset); }
	void StartSurfaceCameraForPassenger(float OnSurfaceTargetYaw, float OnSurfaceTargetPitch, float OnSurfaceTargetRoll) { NativeCall<void, float, float, float>(this, "AShooterPlayerController.StartSurfaceCameraForPassenger", OnSurfaceTargetYaw, OnSurfaceTargetPitch, OnSurfaceTargetRoll); }
	void StartTalkingInVoiceMode(EVoiceMode TargetVoiceMode, bool ForceToggleToTalk) { NativeCall<void, EVoiceMode, bool>(this, "AShooterPlayerController.StartTalkingInVoiceMode", TargetVoiceMode, ForceToggleToTalk); }
	void StartTalkingWrapper() { NativeCall<void>(this, "AShooterPlayerController.StartTalkingWrapper"); }
	void StartWhispering() { NativeCall<void>(this, "AShooterPlayerController.StartWhispering"); }
	void StartWhistleSelection() { NativeCall<void>(this, "AShooterPlayerController.StartWhistleSelection"); }
	void StartYelling() { NativeCall<void>(this, "AShooterPlayerController.StartYelling"); }
	void StopLoadingMusic() { NativeCall<void>(this, "AShooterPlayerController.StopLoadingMusic"); }
	void StopSpectating() { NativeCall<void>(this, "AShooterPlayerController.StopSpectating"); }
	void StopTalkingWrapper() { NativeCall<void>(this, "AShooterPlayerController.StopTalkingWrapper"); }
	void TestAlarmNotification(FString Title, FString Message) { NativeCall<void, FString, FString>(this, "AShooterPlayerController.TestAlarmNotification", Title, Message); }
	void TestNotification() { NativeCall<void>(this, "AShooterPlayerController.TestNotification"); }
	void TestPhysxPerf(int RayCount, float DistanceOfRays) { NativeCall<void, int, float>(this, "AShooterPlayerController.TestPhysxPerf", RayCount, DistanceOfRays); }
	void TestPurchaseEP() { NativeCall<void>(this, "AShooterPlayerController.TestPurchaseEP"); }
	void TestSteamRefreshItems() { NativeCall<void>(this, "AShooterPlayerController.TestSteamRefreshItems"); }
	static void TickStasisForCharacter(UWorld * theWorld, APrimalCharacter * Character, FVector ActorLocation) { NativeCall<void, UWorld *, APrimalCharacter *, FVector>(nullptr, "AShooterPlayerController.TickStasisForCharacter", theWorld, Character, ActorLocation); }
	void Tick_SearchForPOIs(float DeltaTime) { NativeCall<void, float>(this, "AShooterPlayerController.Tick_SearchForPOIs", DeltaTime); }
	void Tick_UpdatePings(const float DeltaTime) { NativeCall<void, const float>(this, "AShooterPlayerController.Tick_UpdatePings", DeltaTime); }
	void ToggleAutoChat() { NativeCall<void>(this, "AShooterPlayerController.ToggleAutoChat"); }
	void ToggleDinoNameTags() { NativeCall<void>(this, "AShooterPlayerController.ToggleDinoNameTags"); }
	void ToggleGun() { NativeCall<void>(this, "AShooterPlayerController.ToggleGun"); }
	void ToggleHUDHidden() { NativeCall<void>(this, "AShooterPlayerController.ToggleHUDHidden"); }
	void ToggleHud() { NativeCall<void>(this, "AShooterPlayerController.ToggleHud"); }
	void ToggleMap() { NativeCall<void>(this, "AShooterPlayerController.ToggleMap"); }
	void ToggleShowAllPlayersWhenSpectating() { NativeCall<void>(this, "AShooterPlayerController.ToggleShowAllPlayersWhenSpectating"); }
	void ToggleShowAllPlayersWhenSpectatingLocal() { NativeCall<void>(this, "AShooterPlayerController.ToggleShowAllPlayersWhenSpectatingLocal"); }
	void ToggleSpeaking(bool bSpeaking, bool UseSuperRange) { NativeCall<void, bool, bool>(this, "AShooterPlayerController.ToggleSpeaking", bSpeaking, UseSuperRange); }
	void ToggleWeaponAccessory() { NativeCall<void>(this, "AShooterPlayerController.ToggleWeaponAccessory"); }
	void TriggerPlayerAction(int ActionIndex) { NativeCall<void, int>(this, "AShooterPlayerController.TriggerPlayerAction", ActionIndex); }
	void TryLoadProfile() { NativeCall<void>(this, "AShooterPlayerController.TryLoadProfile"); }
	void TryToForceUploadCharacter_Implementation() { NativeCall<void>(this, "AShooterPlayerController.TryToForceUploadCharacter_Implementation"); }
	void TurnAtRate(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.TurnAtRate", Val); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "AShooterPlayerController.TurnInput", Val); }
	void TurnOnGmBuffAndTekArmorAndStatFpsAndAlsoStatUnitBecauseThisIsEasierToTypeOnXbox() { NativeCall<void>(this, "AShooterPlayerController.TurnOnGmBuffAndTekArmorAndStatFpsAndAlsoStatUnitBecauseThisIsEasierToTypeOnXbox"); }
	void UnFreeze() { NativeCall<void>(this, "AShooterPlayerController.UnFreeze"); }
	void UnPossess() { NativeCall<void>(this, "AShooterPlayerController.UnPossess"); }
	void UnbanPlayer(FString PlayerSteamName) { NativeCall<void, FString>(this, "AShooterPlayerController.UnbanPlayer", PlayerSteamName); }
	void UndermeshSphere(const int radius) { NativeCall<void, const int>(this, "AShooterPlayerController.UndermeshSphere", radius); }
	void UnlockEmote(FName EmoteName) { NativeCall<void, FName>(this, "AShooterPlayerController.UnlockEmote", EmoteName); }
	void UnlockExplorerNote(int ExplorerNoteIndex, const bool forceShowExplorerNoteUI) { NativeCall<void, int, const bool>(this, "AShooterPlayerController.UnlockExplorerNote", ExplorerNoteIndex, forceShowExplorerNoteUI); }
	void Update3DPosition(bool ForceUpdate) { NativeCall<void, bool>(this, "AShooterPlayerController.Update3DPosition", ForceUpdate); }
	void UpdatePostProcessVolumes() { NativeCall<void>(this, "AShooterPlayerController.UpdatePostProcessVolumes"); }
	void UpdateRequestEquippedItemsQueue() { NativeCall<void>(this, "AShooterPlayerController.UpdateRequestEquippedItemsQueue"); }
	void UpdateRotation(float DeltaTime) { NativeCall<void, float>(this, "AShooterPlayerController.UpdateRotation", DeltaTime); }
	void UploadCharacterPlayerDataToArk(const TArray<unsigned char> * PlayerDataBytes, FString PlayerName, TArray<FString> PlayerStats, unsigned __int64 PlayerDataId, bool WithItems, unsigned int ItemCount) { NativeCall<void, const TArray<unsigned char> *, FString, TArray<FString>, unsigned __int64, bool, unsigned int>(this, "AShooterPlayerController.UploadCharacterPlayerDataToArk", PlayerDataBytes, PlayerName, PlayerStats, PlayerDataId, WithItems, ItemCount); }
	void UploadCharaterDataToArk(UPrimalInventoryComponent * InvComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.UploadCharaterDataToArk", InvComp); }
	bool UseTribeGroupRanks() { return NativeCall<bool>(this, "AShooterPlayerController.UseTribeGroupRanks"); }
	bool ViewingAnUploadTerminal() { return NativeCall<bool>(this, "AShooterPlayerController.ViewingAnUploadTerminal"); }
	void VivoxLogout() { NativeCall<void>(this, "AShooterPlayerController.VivoxLogout"); }
	bool Vivox_IsLoggedIn() { return NativeCall<bool>(this, "AShooterPlayerController.Vivox_IsLoggedIn"); }
	bool Vivox_IsPlayerMuted(const FString * VivoxUsernameToMuteCheck) { return NativeCall<bool, const FString *>(this, "AShooterPlayerController.Vivox_IsPlayerMuted", VivoxUsernameToMuteCheck); }
	void Vivox_SetPlayerMuted(const FString * VivoxUsernameToMute, bool bMute) { NativeCall<void, const FString *, bool>(this, "AShooterPlayerController.Vivox_SetPlayerMuted", VivoxUsernameToMute, bMute); }
	void Vivox_TransmitToAllChannels() { NativeCall<void>(this, "AShooterPlayerController.Vivox_TransmitToAllChannels"); }
	void Vivox_TransmitToNoChannels() { NativeCall<void>(this, "AShooterPlayerController.Vivox_TransmitToNoChannels"); }
	FString * WritePNTScreenshot(FString * result, const FString * filename) { return NativeCall<FString *, FString *, const FString *>(this, "AShooterPlayerController.WritePNTScreenshot", result, filename); }
	UShooterGameUserSettings * GetUserSettings() { return NativeCall<UShooterGameUserSettings *>(this, "AShooterPlayerController.GetUserSettings"); }
	void BPActivatedMultiUseSelection() { NativeCall<void>(this, "AShooterPlayerController.BPActivatedMultiUseSelection"); }
	FVector * BPCheckCanDinoSpawnFromLocation(FVector * result, TSubclassOf<APrimalDinoCharacter> DinoClass, const FVector * CheckLocation) { return NativeCall<FVector *, FVector *, TSubclassOf<APrimalDinoCharacter>, const FVector *>(this, "AShooterPlayerController.BPCheckCanDinoSpawnFromLocation", result, DinoClass, CheckLocation); }
	void BPClientHandleDataSetRPC(const TArray<FDataSet> * dataSets) { NativeCall<void, const TArray<FDataSet> *>(this, "AShooterPlayerController.BPClientHandleDataSetRPC", dataSets); }
	void BPServerHandleDataSetRPC(const TArray<FDataSet> * dataSets) { NativeCall<void, const TArray<FDataSet> *>(this, "AShooterPlayerController.BPServerHandleDataSetRPC", dataSets); }
	void CheckCheatsPassword(const FString * pass) { NativeCall<void, const FString *>(this, "AShooterPlayerController.CheckCheatsPassword", pass); }
	void CheckRequestSpectator(const FString * InSpectatorPass) { NativeCall<void, const FString *>(this, "AShooterPlayerController.CheckRequestSpectator", InSpectatorPass); }
	void ClientAddActorItem(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, bool bEquipItem, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool, bool>(this, "AShooterPlayerController.ClientAddActorItem", forInventory, itemInfo, bEquipItem, ShowHUDNotification); }
	void ClientAddActorItemToFolder(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, bool bEquipItem, bool ShowHUDNotification, const FString * ToFolder) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool, bool, const FString *>(this, "AShooterPlayerController.ClientAddActorItemToFolder", forInventory, itemInfo, bEquipItem, ShowHUDNotification, ToFolder); }
	void ClientAddFloatingDamageText(FVector_NetQuantize AtLocation, int DamageAmount, int FromTeamID) { NativeCall<void, FVector_NetQuantize, int, int>(this, "AShooterPlayerController.ClientAddFloatingDamageText", AtLocation, DamageAmount, FromTeamID); }
	void ClientAddFloatingText(FVector_NetQuantize AtLocation, const FString * FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, FVector_NetQuantize, const FString *, FColor, float, float, float, FVector, float, float, float>(this, "AShooterPlayerController.ClientAddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	void ClientAddFolderToInventoryComponent(UPrimalInventoryComponent * forInventory, const FString * NewCustomFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int>(this, "AShooterPlayerController.ClientAddFolderToInventoryComponent", forInventory, NewCustomFolderName, InventoryCompType); }
	void ClientAddItemToArk(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool>(this, "AShooterPlayerController.ClientAddItemToArk", forInventory, itemInfo, bFromLoad); }
	void ClientChatMessage(FChatMessage Chat) { NativeCall<void, FChatMessage>(this, "AShooterPlayerController.ClientChatMessage", Chat); }
	void ClientCollectedAchievementItem(TSubclassOf<UPrimalItem> ItemClass) { NativeCall<void, TSubclassOf<UPrimalItem>>(this, "AShooterPlayerController.ClientCollectedAchievementItem", ItemClass); }
	void ClientDoMultiUse(UObject * ForObject, int useIndex) { NativeCall<void, UObject *, int>(this, "AShooterPlayerController.ClientDoMultiUse", ForObject, useIndex); }
	void ClientDownloadDinoRequestFinished(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadDinoRequestFinished", Success); }
	void ClientDownloadPlayerCharacterRequestFinished(bool Success) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientDownloadPlayerCharacterRequestFinished", Success); }
	void ClientDrawBrushComponentInGame(UBrushComponent * BrushComponent, float Duration, bool bDrawSolidBox) { NativeCall<void, UBrushComponent *, float, bool>(this, "AShooterPlayerController.ClientDrawBrushComponentInGame", BrushComponent, Duration, bDrawSolidBox); }
	void ClientDrawUndermeshSphere(const int radius) { NativeCall<void, const int>(this, "AShooterPlayerController.ClientDrawUndermeshSphere", radius); }
	void ClientEndReceivingTribeLog() { NativeCall<void>(this, "AShooterPlayerController.ClientEndReceivingTribeLog"); }
	void ClientFailedRemoveSaddle() { NativeCall<void>(this, "AShooterPlayerController.ClientFailedRemoveSaddle"); }
	void ClientFailedToAddItemFromArkInventory() { NativeCall<void>(this, "AShooterPlayerController.ClientFailedToAddItemFromArkInventory"); }
	void ClientFinishedLoadArkItems(UPrimalInventoryComponent * forInventory) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ClientFinishedLoadArkItems", forInventory); }
	void ClientFinishedReceivingActorItems(UPrimalInventoryComponent * forInventory, bool bEquippedItems) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "AShooterPlayerController.ClientFinishedReceivingActorItems", forInventory, bEquippedItems); }
	void ClientGetMessageOfTheDay(const FString * Message) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientGetMessageOfTheDay", Message); }
	void ClientHUDNotificationTypeParams(int MessageType, int MessageType1, int MessageParam2, UObject * ObjectParam1) { NativeCall<void, int, int, int, UObject *>(this, "AShooterPlayerController.ClientHUDNotificationTypeParams", MessageType, MessageType1, MessageParam2, ObjectParam1); }
	void ClientInsertActorItem(UPrimalInventoryComponent * forInventory, FItemNetInfo itemInfo, FItemNetID InsertAfterItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, FItemNetID>(this, "AShooterPlayerController.ClientInsertActorItem", forInventory, itemInfo, InsertAfterItemID); }
	void ClientJoinVivoxChannel(const FString * ChannelName, int AtlasChannelTypeAsInt, int AttenuationModelAsInt32, int MaxDistance, int MinDistance, long double Rolloff) { NativeCall<void, const FString *, int, int, int, int, long double>(this, "AShooterPlayerController.ClientJoinVivoxChannel", ChannelName, AtlasChannelTypeAsInt, AttenuationModelAsInt32, MaxDistance, MinDistance, Rolloff); }
	void ClientLoadArkItems(UPrimalInventoryComponent * forInventory, const TArray<FItemNetInfo> * itemInfos, bool bClear, bool bFinalBatch) { NativeCall<void, UPrimalInventoryComponent *, const TArray<FItemNetInfo> *, bool, bool>(this, "AShooterPlayerController.ClientLoadArkItems", forInventory, itemInfos, bClear, bFinalBatch); }
	void ClientLoginToVivox(const FString * VivoxUsername) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientLoginToVivox", VivoxUsername); }
	void ClientNotifyAdmin() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyAdmin"); }
	void ClientNotifyCantHarvest() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyCantHarvest"); }
	void ClientNotifyCantHitHarvest() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyCantHitHarvest"); }
	void ClientNotifyDefeatedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerController.ClientNotifyDefeatedDino", DinoClass); }
	void ClientNotifyDinoDeath(const FString * DinoName, const FString * AttackerName, bool bIsVehicle) { NativeCall<void, const FString *, const FString *, bool>(this, "AShooterPlayerController.ClientNotifyDinoDeath", DinoName, AttackerName, bIsVehicle); }
	void ClientNotifyDinoKill(APrimalDinoCharacter * InstigatingPawn, APawn * VictimPawn) { NativeCall<void, APrimalDinoCharacter *, APawn *>(this, "AShooterPlayerController.ClientNotifyDinoKill", InstigatingPawn, VictimPawn); }
	void ClientNotifyEditText(TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject * ForObject) { NativeCall<void, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>(this, "AShooterPlayerController.ClientNotifyEditText", ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ClientNotifyHitHarvest() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyHitHarvest"); }
	void ClientNotifyLevelUp(APrimalCharacter * ForChar, int NewLevel) { NativeCall<void, APrimalCharacter *, int>(this, "AShooterPlayerController.ClientNotifyLevelUp", ForChar, NewLevel); }
	void ClientNotifyListenServerOutOfRange() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyListenServerOutOfRange"); }
	void ClientNotifyMessageOfTheDay(const FString * Message, float timeToDisplay) { NativeCall<void, const FString *, float>(this, "AShooterPlayerController.ClientNotifyMessageOfTheDay", Message, timeToDisplay); }
	void ClientNotifyPaintFinished(bool bSuccess) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientNotifyPaintFinished", bSuccess); }
	void ClientNotifyPlayerDeath(APawn * InstigatingPawn) { NativeCall<void, APawn *>(this, "AShooterPlayerController.ClientNotifyPlayerDeath", InstigatingPawn); }
	void ClientNotifyPlayerDeathReason(const FString * ReasonString) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientNotifyPlayerDeathReason", ReasonString); }
	void ClientNotifyPlayerKill(AActor * PlayerPawn, APawn * VictimPawn) { NativeCall<void, AActor *, APawn *>(this, "AShooterPlayerController.ClientNotifyPlayerKill", PlayerPawn, VictimPawn); }
	void ClientNotifyRemotePlayerDeath(const FString * PlayerName, const FString * AttackerName) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ClientNotifyRemotePlayerDeath", PlayerName, AttackerName); }
	void ClientNotifySummonedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerController.ClientNotifySummonedDino", DinoClass); }
	void ClientNotifyTamedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterPlayerController.ClientNotifyTamedDino", DinoClass); }
	void ClientNotifyTorpidityIncrease() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyTorpidityIncrease"); }
	void ClientNotifyTribeXP(float HowMuch) { NativeCall<void, float>(this, "AShooterPlayerController.ClientNotifyTribeXP", HowMuch); }
	void ClientNotifyUnlockHairStyleOrEmote(FName HairstyleOrEmoteName) { NativeCall<void, FName>(this, "AShooterPlayerController.ClientNotifyUnlockHairStyleOrEmote", HairstyleOrEmoteName); }
	void ClientNotifyUnlockedAllExplorerNotes() { NativeCall<void>(this, "AShooterPlayerController.ClientNotifyUnlockedAllExplorerNotes"); }
	void ClientNotifyUnlockedEngram(TSubclassOf<UPrimalItem> ItemClass, bool bTekGram) { NativeCall<void, TSubclassOf<UPrimalItem>, bool>(this, "AShooterPlayerController.ClientNotifyUnlockedEngram", ItemClass, bTekGram); }
	void ClientOnAddedItemsToAllClustersInventory(bool Success, const FString * UserId, const TArray<int> * MasterIndexNum) { NativeCall<void, bool, const FString *, const TArray<int> *>(this, "AShooterPlayerController.ClientOnAddedItemsToAllClustersInventory", Success, UserId, MasterIndexNum); }
	void ClientOnCurrentCharacterAndItemsUploaded(unsigned __int64 TransferringPlayerDataId) { NativeCall<void, unsigned __int64>(this, "AShooterPlayerController.ClientOnCurrentCharacterAndItemsUploaded", TransferringPlayerDataId); }
	void ClientOnDropAllNotReadyForUploadItemsFinished() { NativeCall<void>(this, "AShooterPlayerController.ClientOnDropAllNotReadyForUploadItemsFinished"); }
	void ClientOnEndDownloadTransferredPlayerCharacter(bool Success, int FailureResponseCode, const FString * FailureResponseMessage) { NativeCall<void, bool, int, const FString *>(this, "AShooterPlayerController.ClientOnEndDownloadTransferredPlayerCharacter", Success, FailureResponseCode, FailureResponseMessage); }
	void ClientOnStartDownloadTransferredPlayerCharacter() { NativeCall<void>(this, "AShooterPlayerController.ClientOnStartDownloadTransferredPlayerCharacter"); }
	void ClientPlayLocalSound(USoundBase * aSound, bool bAttach) { NativeCall<void, USoundBase *, bool>(this, "AShooterPlayerController.ClientPlayLocalSound", aSound, bAttach); }
	void ClientPlayerIsValidToDownload(bool bIsValid, const FArkTributePlayerData PlayerData) { NativeCall<void, bool, const FArkTributePlayerData>(this, "AShooterPlayerController.ClientPlayerIsValidToDownload", bIsValid, PlayerData); }
	void ClientProcessItemNetExecCommandBP(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandBP", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ClientProcessItemNetExecCommandUnreliableBP(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ClientProcessItemNetExecCommandUnreliableBP", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ClientReceiveActiveMissionTags(const TArray<FName> * MissionTags) { NativeCall<void, const TArray<FName> *>(this, "AShooterPlayerController.ClientReceiveActiveMissionTags", MissionTags); }
	void ClientReceiveDinoAncestors(APrimalDinoCharacter * ForDino, const TArray<FDinoAncestorsEntry> * DinoAncestors, const TArray<FDinoAncestorsEntry> * DinoAncestorsMale, int RandomMutationsFemale, int RandomMutationsMale) { NativeCall<void, APrimalDinoCharacter *, const TArray<FDinoAncestorsEntry> *, const TArray<FDinoAncestorsEntry> *, int, int>(this, "AShooterPlayerController.ClientReceiveDinoAncestors", ForDino, DinoAncestors, DinoAncestorsMale, RandomMutationsFemale, RandomMutationsMale); }
	void ClientReceiveDinoCharStats(APrimalDinoCharacter * theDinoChar, const TArray<float> * CurValues, const TArray<float> * MaxValues) { NativeCall<void, APrimalDinoCharacter *, const TArray<float> *, const TArray<float> *>(this, "AShooterPlayerController.ClientReceiveDinoCharStats", theDinoChar, CurValues, MaxValues); }
	void ClientReceiveMyTribeOnlineList(const TArray<unsigned int> * OnlinePlayerIDs) { NativeCall<void, const TArray<unsigned int> *>(this, "AShooterPlayerController.ClientReceiveMyTribeOnlineList", OnlinePlayerIDs); }
	void ClientReceiveOriginalHairColor(FLinearColor HairColor) { NativeCall<void, FLinearColor>(this, "AShooterPlayerController.ClientReceiveOriginalHairColor", HairColor); }
	void ClientReceiveStructuresPlacedOnFloor(const TArray<FStructuresOnFloor> * Structures) { NativeCall<void, const TArray<FStructuresOnFloor> *>(this, "AShooterPlayerController.ClientReceiveStructuresPlacedOnFloor", Structures); }
	void ClientReceiveTamingInfoList(const TArray<FTamingDinoInfo> * InfoList) { NativeCall<void, const TArray<FTamingDinoInfo> *>(this, "AShooterPlayerController.ClientReceiveTamingInfoList", InfoList); }
	void ClientReceiveTribeLog(const FString * LogString) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientReceiveTribeLog", LogString); }
	void ClientRefreshSteamInventoryFinished(bool bSuccess) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientRefreshSteamInventoryFinished", bSuccess); }
	void ClientRemoveActorItem(UPrimalInventoryComponent * forInventory, FItemNetID itemID, bool showHUDMessage) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool>(this, "AShooterPlayerController.ClientRemoveActorItem", forInventory, itemID, showHUDMessage); }
	void ClientRemoveItemFromArk(UPrimalInventoryComponent * forInventory, FItemNetID RemovedItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ClientRemoveItemFromArk", forInventory, RemovedItemID); }
	void ClientRemoveItemFromSteamInventory(const TArray<unsigned __int64> * ItemSteamUserID, int Quantity) { NativeCall<void, const TArray<unsigned __int64> *, int>(this, "AShooterPlayerController.ClientRemoveItemFromSteamInventory", ItemSteamUserID, Quantity); }
	void ClientRequestSpectatorLocationAndRotation() { NativeCall<void>(this, "AShooterPlayerController.ClientRequestSpectatorLocationAndRotation"); }
	void ClientResetRespawningFlag() { NativeCall<void>(this, "AShooterPlayerController.ClientResetRespawningFlag"); }
	void ClientRunLocalConsoleCommand(const FString * Command, bool bWriteToLog) { NativeCall<void, const FString *, bool>(this, "AShooterPlayerController.ClientRunLocalConsoleCommand", Command, bWriteToLog); }
	void ClientSendArkDataPayload(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const TArray<unsigned char> * DataBytes) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const TArray<unsigned char> *>(this, "AShooterPlayerController.ClientSendArkDataPayload", ID, ArkDataType, DataBytes); }
	void ClientSendArkDataPayloadBegin(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const FString * DataClass, const FString * TagName, const FString * Name, const TArray<FString> * DataStats, unsigned int ID1, unsigned int ID2) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const FString *, const FString *, const FString *, const TArray<FString> *, unsigned int, unsigned int>(this, "AShooterPlayerController.ClientSendArkDataPayloadBegin", ID, ArkDataType, DataClass, TagName, Name, DataStats, ID1, ID2); }
	void ClientSendArkDataPayloadEnd(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, unsigned __int64 PlayerDataID) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, unsigned __int64>(this, "AShooterPlayerController.ClientSendArkDataPayloadEnd", ID, ArkDataType, PlayerDataID); }
	void ClientSendFolderData(UPrimalInventoryComponent * forInventory, const TArray<FServerCustomFolder> * ServerCustomFolder) { NativeCall<void, UPrimalInventoryComponent *, const TArray<FServerCustomFolder> *>(this, "AShooterPlayerController.ClientSendFolderData", forInventory, ServerCustomFolder); }
	void ClientServerChatDirectMessage(const FString * MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, const FString *, FLinearColor, bool>(this, "AShooterPlayerController.ClientServerChatDirectMessage", MessageText, MessageColor, bIsBold); }
	void ClientServerChatMessage(const FString * MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, const FString *, FLinearColor, bool>(this, "AShooterPlayerController.ClientServerChatMessage", MessageText, MessageColor, bIsBold); }
	void ClientServerNotification(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>(this, "AShooterPlayerController.ClientServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientServerNotificationSingle(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay, int MessageTypeID) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *, int>(this, "AShooterPlayerController.ClientServerNotificationSingle", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, MessageTypeID); }
	void ClientServerSOTFNotificationCustom(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>(this, "AShooterPlayerController.ClientServerSOTFNotificationCustom", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientSetArkTributeLimits(bool LimitItems, bool LimitDinos, bool LimitCharacters, int MaxItems, int MaxDinos, int MaxCharacters) { NativeCall<void, bool, bool, bool, int, int, int>(this, "AShooterPlayerController.ClientSetArkTributeLimits", LimitItems, LimitDinos, LimitCharacters, MaxItems, MaxDinos, MaxCharacters); }
	void ClientSetControlRotation(FRotator NewRotation) { NativeCall<void, FRotator>(this, "AShooterPlayerController.ClientSetControlRotation", NewRotation); }
	void ClientSetHUDAndInitUIScenes(TSubclassOf<AHUD> NewHUDClass) { NativeCall<void, TSubclassOf<AHUD>>(this, "AShooterPlayerController.ClientSetHUDAndInitUIScenes", NewHUDClass); }
	void ClientSetPersonalDinoTameCount(int NewPersonalDinoTameCount) { NativeCall<void, int>(this, "AShooterPlayerController.ClientSetPersonalDinoTameCount", NewPersonalDinoTameCount); }
	void ClientSetSpectatorLocation(FVector NewLocation) { NativeCall<void, FVector>(this, "AShooterPlayerController.ClientSetSpectatorLocation", NewLocation); }
	void ClientShowCharacterCreationUI(bool bShowDownloadCharacter) { NativeCall<void, bool>(this, "AShooterPlayerController.ClientShowCharacterCreationUI", bShowDownloadCharacter); }
	void ClientShowLeaderboard(TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag, const TArray<FLeaderboardRow> * LeaderboardRows, bool bPlayerHasValidLatestScore, FLeaderboardRow LatestPlayerScore) { NativeCall<void, TSubclassOf<ULeaderboard>, FName, const TArray<FLeaderboardRow> *, bool, FLeaderboardRow>(this, "AShooterPlayerController.ClientShowLeaderboard", LeaderboardType, MissionTag, LeaderboardRows, bPlayerHasValidLatestScore, LatestPlayerScore); }
	void ClientShowPaintingUI(UObject * ObjectToPaint) { NativeCall<void, UObject *>(this, "AShooterPlayerController.ClientShowPaintingUI", ObjectToPaint); }
	void ClientShowSpawnUI(float Delay) { NativeCall<void, float>(this, "AShooterPlayerController.ClientShowSpawnUI", Delay); }
	void ClientShowSpawnUIForTransferringPlayer(TSubclassOf<AHUD> NewHUDClass, unsigned __int64 TransferingPlayerID, bool bUseTimer) { NativeCall<void, TSubclassOf<AHUD>, unsigned __int64, bool>(this, "AShooterPlayerController.ClientShowSpawnUIForTransferringPlayer", NewHUDClass, TransferingPlayerID, bUseTimer); }
	void ClientShowTransferredPlayerConfirmationDialog() { NativeCall<void>(this, "AShooterPlayerController.ClientShowTransferredPlayerConfirmationDialog"); }
	void ClientStartReceivingActorItems(UPrimalInventoryComponent * forInventory, bool bEquippedItems) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "AShooterPlayerController.ClientStartReceivingActorItems", forInventory, bEquippedItems); }
	void ClientStartReceivingTribeLog() { NativeCall<void>(this, "AShooterPlayerController.ClientStartReceivingTribeLog"); }
	void ClientStartSurfaceCameraForPassenger(float yaw, float pitch, float roll, bool bInvertTurnInput) { NativeCall<void, float, float, float, bool>(this, "AShooterPlayerController.ClientStartSurfaceCameraForPassenger", yaw, pitch, roll, bInvertTurnInput); }
	void ClientStopLocalSound(USoundBase * aSound) { NativeCall<void, USoundBase *>(this, "AShooterPlayerController.ClientStopLocalSound", aSound); }
	void ClientSwapActorItems(UPrimalInventoryComponent * forInventory, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>(this, "AShooterPlayerController.ClientSwapActorItems", forInventory, itemID1, itemID2); }
	void ClientTeleportSpectator(FVector Location, unsigned __int64 PlayerID) { NativeCall<void, FVector, unsigned __int64>(this, "AShooterPlayerController.ClientTeleportSpectator", Location, PlayerID); }
	void ClientUnlockAchievement(const FString * AchievementID) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ClientUnlockAchievement", AchievementID); }
	void ClientUnlockExplorerNote(int ExplorerNoteIndex, const bool forceShowExplorerNoteUI) { NativeCall<void, int, const bool>(this, "AShooterPlayerController.ClientUnlockExplorerNote", ExplorerNoteIndex, forceShowExplorerNoteUI); }
	void ClientUpdateInventoryCraftQueue(UPrimalInventoryComponent * forInventory, const TArray<FItemCraftQueueEntry> * CraftQueueEntries) { NativeCall<void, UPrimalInventoryComponent *, const TArray<FItemCraftQueueEntry> *>(this, "AShooterPlayerController.ClientUpdateInventoryCraftQueue", forInventory, CraftQueueEntries); }
	void ClientUpdateItemCustomData(UPrimalInventoryComponent * forInventory, FItemNetID itemID, FCustomItemData InData) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FCustomItemData>(this, "AShooterPlayerController.ClientUpdateItemCustomData", forInventory, itemID, InData); }
	void ClientUpdateItemDurability(UPrimalInventoryComponent * forInventory, FItemNetID itemID, float ItemDurability) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, float>(this, "AShooterPlayerController.ClientUpdateItemDurability", forInventory, itemID, ItemDurability); }
	void ClientUpdateItemQuantity(UPrimalInventoryComponent * forInventory, FItemNetID itemID, int ItemQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ClientUpdateItemQuantity", forInventory, itemID, ItemQuantity); }
	void ClientUpdateItemWeaponClipAmmo(UPrimalInventoryComponent * forInventory, FItemNetID itemID, int Ammo) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ClientUpdateItemWeaponClipAmmo", forInventory, itemID, Ammo); }
	void ClientUploadedCharactersLoaded(bool Success, const TArray<FArkTributePlayerDataListing> * UploadedCharactersDataListings) { NativeCall<void, bool, const TArray<FArkTributePlayerDataListing> *>(this, "AShooterPlayerController.ClientUploadedCharactersLoaded", Success, UploadedCharactersDataListings); }
	void ClientUploadedDinosLoaded(const TArray<FARKTributeDinoListing> * UploadedDinosDataListings) { NativeCall<void, const TArray<FARKTributeDinoListing> *>(this, "AShooterPlayerController.ClientUploadedDinosLoaded", UploadedDinosDataListings); }
	void ClientUsedActorItem(UPrimalInventoryComponent * forInventory, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ClientUsedActorItem", forInventory, itemID); }
	void Client_ReceiveBuffFromDayCycle(TSubclassOf<APrimalBuff> GiveBuffClass, ADayCycleManager * FromDayCycle) { NativeCall<void, TSubclassOf<APrimalBuff>, ADayCycleManager *>(this, "AShooterPlayerController.Client_ReceiveBuffFromDayCycle", GiveBuffClass, FromDayCycle); }
	void Client_ReceivePing(const FReplicatePingData ReceivedPingData) { NativeCall<void, const FReplicatePingData>(this, "AShooterPlayerController.Client_ReceivePing", ReceivedPingData); }
	void Client_ReceivePingResponse(const FReplicatePingData ResponseData, AShooterCharacter * RespondingPlayer) { NativeCall<void, const FReplicatePingData, AShooterCharacter *>(this, "AShooterPlayerController.Client_ReceivePingResponse", ResponseData, RespondingPlayer); }
	void DoServerCheckUnfreeze() { NativeCall<void>(this, "AShooterPlayerController.DoServerCheckUnfreeze"); }
	void InitCharacterPainting(APrimalCharacter * Char) { NativeCall<void, APrimalCharacter *>(this, "AShooterPlayerController.InitCharacterPainting", Char); }
	void NotifyTribeWarStatus(const FString * EnemyTribeString, int StatusType) { NativeCall<void, const FString *, int>(this, "AShooterPlayerController.NotifyTribeWarStatus", EnemyTribeString, StatusType); }
	void OnDisableSpectator() { NativeCall<void>(this, "AShooterPlayerController.OnDisableSpectator"); }
	void PlayHitMarkerCharacter(bool bHitFriendlyTarget, const FHitMarkerSettings HitMarkerSettings) { NativeCall<void, bool, const FHitMarkerSettings>(this, "AShooterPlayerController.PlayHitMarkerCharacter", bHitFriendlyTarget, HitMarkerSettings); }
	void PlayHitMarkerStructure() { NativeCall<void>(this, "AShooterPlayerController.PlayHitMarkerStructure"); }
	void PlayHitMarkerStructureAlly() { NativeCall<void>(this, "AShooterPlayerController.PlayHitMarkerStructureAlly"); }
	FString * PlayerCommand(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "AShooterPlayerController.PlayerCommand", result, TheCommand); }
	void RPCStayAlive() { NativeCall<void>(this, "AShooterPlayerController.RPCStayAlive"); }
	void ServerActorCloseRemoteInventory(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerActorCloseRemoteInventory", inventoryComp); }
	void ServerActorViewRemoteInventory(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerActorViewRemoteInventory", inventoryComp); }
	void ServerAddAchievementID(const FString * AchievementID, bool bIsOnSpawn) { NativeCall<void, const FString *, bool>(this, "AShooterPlayerController.ServerAddAchievementID", AchievementID, bIsOnSpawn); }
	void ServerAddItemFromArkInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ServerAddItemFromArkInventory", inventoryComp, itemID, requestedQuantity); }
	void ServerAddItemToArkInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ServerAddItemToArkInventory", inventoryComp, itemID, requestedQuantity); }
	void ServerAddItemToCustomFolder(UPrimalInventoryComponent * forInventory, const FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int, FItemNetID>(this, "AShooterPlayerController.ServerAddItemToCustomFolder", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerAllowPlayerToJoinNoCheck(const FString * PlayerId) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerAllowPlayerToJoinNoCheck", PlayerId); }
	void ServerAsyncLoadArkInventoryItems(const TArray<FItemNetInfo> * ArkInventoryItems, bool bFinalBatch) { NativeCall<void, const TArray<FItemNetInfo> *, bool>(this, "AShooterPlayerController.ServerAsyncLoadArkInventoryItems", ArkInventoryItems, bFinalBatch); }
	void ServerBanPlayer(const FString * PlayerSteamName, const FString * PlayerSteamID) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerBanPlayer", PlayerSteamName, PlayerSteamID); }
	void ServerCharacterUploadWithItems_CharaterPayload(unsigned __int64 PlayerDataId, const TArray<unsigned char> * PlayerDataChunk) { NativeCall<void, unsigned __int64, const TArray<unsigned char> *>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_CharaterPayload", PlayerDataId, PlayerDataChunk); }
	void ServerCharacterUploadWithItems_FinishAndCreateCharacter(unsigned __int64 PlayerDataId) { NativeCall<void, unsigned __int64>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter", PlayerDataId); }
	void ServerCharacterUploadWithItems_Start(unsigned __int64 PlayerDataId, FArkTributePlayerData PlayerData) { NativeCall<void, unsigned __int64, FArkTributePlayerData>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_Start", PlayerDataId, PlayerData); }
	void ServerCharacterUploadWithItems_UploadItem(unsigned __int64 PlayerDataId, FItemNetInfo InvItem) { NativeCall<void, unsigned __int64, FItemNetInfo>(this, "AShooterPlayerController.ServerCharacterUploadWithItems_UploadItem", PlayerDataId, InvItem); }
	void ServerCheckUnfreeze() { NativeCall<void>(this, "AShooterPlayerController.ServerCheckUnfreeze"); }
	void ServerCraftItem(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerCraftItem", inventoryComp, itemID); }
	void ServerCycleSpectator(bool bNext) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerCycleSpectator", bNext); }
	void ServerDPC() { NativeCall<void>(this, "AShooterPlayerController.ServerDPC"); }
	void ServerDeleteCustomFolder(UPrimalInventoryComponent * forInventory, const FString * CFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int>(this, "AShooterPlayerController.ServerDeleteCustomFolder", forInventory, CFolderName, InventoryCompType); }
	void ServerDeleteItemFromCustomFolder(UPrimalInventoryComponent * forInventory, const FString * CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, const FString *, int, FItemNetID>(this, "AShooterPlayerController.ServerDeleteItemFromCustomFolder", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerDisallowPlayerToJoinNoCheck(const FString * PlayerId) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerDisallowPlayerToJoinNoCheck", PlayerId); }
	void ServerDownloadTransferredPlayer(int spawnPointID, int spawnPointRegionIndex) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerDownloadTransferredPlayer", spawnPointID, spawnPointRegionIndex); }
	void ServerDropAllNotReadyForUploadItems() { NativeCall<void>(this, "AShooterPlayerController.ServerDropAllNotReadyForUploadItems"); }
	void ServerDropFromRemoteInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerDropFromRemoteInventory", inventoryComp, itemID); }
	void ServerEquipPawnItem(FItemNetID itemID) { NativeCall<void, FItemNetID>(this, "AShooterPlayerController.ServerEquipPawnItem", itemID); }
	void ServerEquipToRemoteInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerEquipToRemoteInventory", inventoryComp, itemID); }
	void ServerGetMessageOfTheDay() { NativeCall<void>(this, "AShooterPlayerController.ServerGetMessageOfTheDay"); }
	void ServerGetOriginalHairColor() { NativeCall<void>(this, "AShooterPlayerController.ServerGetOriginalHairColor"); }
	void ServerGlobalCommand(const FString * Msg) { NativeCall<void, const FString *>(this, "AShooterPlayerController.ServerGlobalCommand", Msg); }
	void ServerGrindItemInRemoteInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, bool grindStack) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool>(this, "AShooterPlayerController.ServerGrindItemInRemoteInventory", inventoryComp, itemID, grindStack); }
	void ServerInventoryClearCraftQueue(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerInventoryClearCraftQueue", inventoryComp); }
	void ServerKickPlayer(const FString * PlayerSteamName, const FString * PlayerSteamID) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerKickPlayer", PlayerSteamName, PlayerSteamID); }
	void ServerLoadArkInventoryItems(const TArray<FItemNetInfo> * ArkInventoryItems, bool bFinalBatch) { NativeCall<void, const TArray<FItemNetInfo> *, bool>(this, "AShooterPlayerController.ServerLoadArkInventoryItems", ArkInventoryItems, bFinalBatch); }
	void ServerLoadUploadedCharacters() { NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedCharacters"); }
	void ServerLoadUploadedDinos() { NativeCall<void>(this, "AShooterPlayerController.ServerLoadUploadedDinos"); }
	void ServerLoginToVivox() { NativeCall<void>(this, "AShooterPlayerController.ServerLoginToVivox"); }
	void ServerMultiUse(UObject * ForObject, int useIndex) { NativeCall<void, UObject *, int>(this, "AShooterPlayerController.ServerMultiUse", ForObject, useIndex); }
	void ServerNotifyEditText(const FString * TextToUse, bool checkedBox, TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject * ForObject) { NativeCall<void, const FString *, bool, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>(this, "AShooterPlayerController.ServerNotifyEditText", TextToUse, checkedBox, ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ServerPaint(UStructurePaintingComponent * Structure, const TArray<FPaintItem> * Paints, bool bLastBatch, bool bFromLoadFile) { NativeCall<void, UStructurePaintingComponent *, const TArray<FPaintItem> *, bool, bool>(this, "AShooterPlayerController.ServerPaint", Structure, Paints, bLastBatch, bFromLoadFile); }
	void ServerProcessItemNetExecCommandBP(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ServerProcessItemNetExecCommandBP", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ServerProcessItemNetExecCommandUnreliableBP(UPrimalInventoryComponent * forInventory, FItemNetID ForItemID, bool bIsEquippedItem, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, FName, FBPNetExecParams>(this, "AShooterPlayerController.ServerProcessItemNetExecCommandUnreliableBP", forInventory, ForItemID, bIsEquippedItem, CommandName, ExecParams); }
	void ServerReadMessageOFTheDay() { NativeCall<void>(this, "AShooterPlayerController.ServerReadMessageOFTheDay"); }
	void ServerRecieveSpectatorLocationAndRotation(const FVector spectatorLocation, const FRotator spectatorRotation) { NativeCall<void, const FVector, const FRotator>(this, "AShooterPlayerController.ServerRecieveSpectatorLocationAndRotation", spectatorLocation, spectatorRotation); }
	void ServerRefreshSteamInventory() { NativeCall<void>(this, "AShooterPlayerController.ServerRefreshSteamInventory"); }
	void ServerReleaseSeatingStructure() { NativeCall<void>(this, "AShooterPlayerController.ServerReleaseSeatingStructure"); }
	void ServerRemovePassenger() { NativeCall<void>(this, "AShooterPlayerController.ServerRemovePassenger"); }
	void ServerRemovePawnItem(FItemNetID itemID, bool bSecondryAction) { NativeCall<void, FItemNetID, bool>(this, "AShooterPlayerController.ServerRemovePawnItem", itemID, bSecondryAction); }
	void ServerRemoveSteamItemSucceeded() { NativeCall<void>(this, "AShooterPlayerController.ServerRemoveSteamItemSucceeded"); }
	void ServerRepairItem(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRepairItem", inventoryComp, itemID); }
	void ServerRepeatMultiUse(UObject * ForObject, int useIndex) { NativeCall<void, UObject *, int>(this, "AShooterPlayerController.ServerRepeatMultiUse", ForObject, useIndex); }
	void ServerRequestActorItems(UPrimalInventoryComponent * forInventory, bool bInventoryItems, bool bIsFirstSpawn) { NativeCall<void, UPrimalInventoryComponent *, bool, bool>(this, "AShooterPlayerController.ServerRequestActorItems", forInventory, bInventoryItems, bIsFirstSpawn); }
	void ServerRequestCreateMissionDataBuff() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestCreateMissionDataBuff"); }
	void ServerRequestDinoAncestors(APrimalDinoCharacter * ForDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.ServerRequestDinoAncestors", ForDino); }
	void ServerRequestDownloadDino(FARKTributeDino DownloadedDino) { NativeCall<void, FARKTributeDino>(this, "AShooterPlayerController.ServerRequestDownloadDino", DownloadedDino); }
	void ServerRequestDownloadPlayerCharacter(FArkTributePlayerData DownloadedCharacter, int spawnPointID, int spawnRegionIndex) { NativeCall<void, FArkTributePlayerData, int, int>(this, "AShooterPlayerController.ServerRequestDownloadPlayerCharacter", DownloadedCharacter, spawnPointID, spawnRegionIndex); }
	void ServerRequestDropAllItems(const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerRequestDropAllItems", CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerRequestFastTravelToPoint(int fromSpawnPointID, int spawnPointID) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestFastTravelToPoint", fromSpawnPointID, spawnPointID); }
	void ServerRequestInventorySwapItems(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>(this, "AShooterPlayerController.ServerRequestInventorySwapItems", inventoryComp, itemID1, itemID2); }
	void ServerRequestInventoryUseItem(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestInventoryUseItem", inventoryComp, itemID); }
	void ServerRequestInventoryUseItemWithActor(AActor * anActor, UPrimalInventoryComponent * inventoryComp, FItemNetID itemID1, int AdditionalData) { NativeCall<void, AActor *, UPrimalInventoryComponent *, FItemNetID, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithActor", anActor, inventoryComp, itemID1, AdditionalData); }
	void ServerRequestInventoryUseItemWithItem(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID1, FItemNetID itemID2, int AdditionalData) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID, int>(this, "AShooterPlayerController.ServerRequestInventoryUseItemWithItem", inventoryComp, itemID1, itemID2, AdditionalData); }
	void ServerRequestLevelUp(UPrimalCharacterStatusComponent * forStatusComp, EPrimalCharacterStatusValue::Type ValueType) { NativeCall<void, UPrimalCharacterStatusComponent *, EPrimalCharacterStatusValue::Type>(this, "AShooterPlayerController.ServerRequestLevelUp", forStatusComp, ValueType); }
	void ServerRequestMyTribeOnlineList() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestMyTribeOnlineList"); }
	void ServerRequestPlaceStructure(int StructureIndex, FVector BuildLocation, FRotator BuildRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, APrimalDinoCharacter * DinoCharacter, FName BoneName, FItemNetID PlaceUsingItemID, bool bSnapped, bool bIsCheat, bool bIsFlipped, int SnapPointCycle) { NativeCall<void, int, FVector, FRotator, FRotator, APawn *, APrimalDinoCharacter *, FName, FItemNetID, bool, bool, bool, int>(this, "AShooterPlayerController.ServerRequestPlaceStructure", StructureIndex, BuildLocation, BuildRotation, PlayerViewRotation, AttachToPawn, DinoCharacter, BoneName, PlaceUsingItemID, bSnapped, bIsCheat, bIsFlipped, SnapPointCycle); }
	void ServerRequestRemoteDropAllItems(UPrimalInventoryComponent * inventoryComp, const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter) { NativeCall<void, UPrimalInventoryComponent *, const FString *, const FString *>(this, "AShooterPlayerController.ServerRequestRemoteDropAllItems", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerRequestRemoveDinoFromTamingListByID(int InID1, int InID2) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRemoveDinoFromTamingListByID", InID1, InID2); }
	void ServerRequestRemoveItemSkin(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveItemSkin", inventoryComp, itemID); }
	void ServerRequestRemoveItemSkinOnly(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveItemSkinOnly", inventoryComp, itemID); }
	void ServerRequestRemoveWeaponAccessoryOnly(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveWeaponAccessoryOnly", inventoryComp, itemID); }
	void ServerRequestRemoveWeaponClipAmmo(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>(this, "AShooterPlayerController.ServerRequestRemoveWeaponClipAmmo", inventoryComp, itemID); }
	void ServerRequestRespawnAtPoint(int spawnPointID, int spawnRegionIndex) { NativeCall<void, int, int>(this, "AShooterPlayerController.ServerRequestRespawnAtPoint", spawnPointID, spawnRegionIndex); }
	void ServerRequestSetPin(UObject * forTarget, int PinValue, bool bIsSetting, int TheCustomIndex) { NativeCall<void, UObject *, int, bool, int>(this, "AShooterPlayerController.ServerRequestSetPin", forTarget, PinValue, bIsSetting, TheCustomIndex); }
	void ServerRequestShowLeaderboards(TSubclassOf<ULeaderboard> LeaderboardType, FName MissionTag) { NativeCall<void, TSubclassOf<ULeaderboard>, FName>(this, "AShooterPlayerController.ServerRequestShowLeaderboards", LeaderboardType, MissionTag); }
	void ServerRequestTamingInfoList() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestTamingInfoList"); }
	void ServerRequestTribeLog() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestTribeLog"); }
	void ServerRequestUpdateActiveMissionTags() { NativeCall<void>(this, "AShooterPlayerController.ServerRequestUpdateActiveMissionTags"); }
	void ServerSelectedCustomItemAction(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, FName SelectedOption) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FName>(this, "AShooterPlayerController.ServerSelectedCustomItemAction", inventoryComp, itemID, SelectedOption); }
	void ServerSendArkDataPayload(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const TArray<unsigned char> * DataBytes) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const TArray<unsigned char> *>(this, "AShooterPlayerController.ServerSendArkDataPayload", ID, ArkDataType, DataBytes); }
	void ServerSendArkDataPayloadBegin(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType, const FString * DataClass, const FString * TagName, const FString * Name, const TArray<FString> * DataStats, unsigned int ID1, unsigned int ID2) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type, const FString *, const FString *, const FString *, const TArray<FString> *, unsigned int, unsigned int>(this, "AShooterPlayerController.ServerSendArkDataPayloadBegin", ID, ArkDataType, DataClass, TagName, Name, DataStats, ID1, ID2); }
	void ServerSendArkDataPayloadEnd(FGuid ID, EPrimalARKTributeDataType::Type ArkDataType) { NativeCall<void, FGuid, EPrimalARKTributeDataType::Type>(this, "AShooterPlayerController.ServerSendArkDataPayloadEnd", ID, ArkDataType); }
	void ServerSendChatMessage(const FString * ChatMessage, EChatSendMode::Type SendMode) { NativeCall<void, const FString *, EChatSendMode::Type>(this, "AShooterPlayerController.ServerSendChatMessage", ChatMessage, SendMode); }
	void ServerSendDirectMessage(const FString * PlayerSteamID, const FString * Message) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerSendDirectMessage", PlayerSteamID, Message); }
	void ServerSetSubscribedApp(int AppID, bool bPreventDefaultItems) { NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerSetSubscribedApp", AppID, bPreventDefaultItems); }
	void ServerSetSupressAdminIcon(bool bSuppress) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetSupressAdminIcon", bSuppress); }
	void ServerSetVRPlayer(bool bSetVRPlayer) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerSetVRPlayer", bSetVRPlayer); }
	void ServerSpectateToPlayerByID(unsigned __int64 PlayerID) { NativeCall<void, unsigned __int64>(this, "AShooterPlayerController.ServerSpectateToPlayerByID", PlayerID); }
	void ServerStartWeaponAltFire(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStartWeaponAltFire", weapon); }
	void ServerStartWeaponFire(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStartWeaponFire", weapon); }
	void ServerStayAlive() { NativeCall<void>(this, "AShooterPlayerController.ServerStayAlive"); }
	void ServerStopSpectating() { NativeCall<void>(this, "AShooterPlayerController.ServerStopSpectating"); }
	void ServerStopWeaponAltFire(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStopWeaponAltFire", weapon); }
	void ServerStopWeaponFire(AShooterWeapon * weapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterPlayerController.ServerStopWeaponFire", weapon); }
	void ServerSuccessfullyLoggedIntoVivox() { NativeCall<void>(this, "AShooterPlayerController.ServerSuccessfullyLoggedIntoVivox"); }
	void ServerTransferAllFromRemoteInventory(UPrimalInventoryComponent * inventoryComp, const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter, const FString * CurrentDestinationFolder, bool bNoFolderView) { NativeCall<void, UPrimalInventoryComponent *, const FString *, const FString *, const FString *, bool>(this, "AShooterPlayerController.ServerTransferAllFromRemoteInventory", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter, CurrentDestinationFolder, bNoFolderView); }
	void ServerTransferAllToRemoteInventory(UPrimalInventoryComponent * inventoryComp, const FString * CurrentCustomFolderFilter, const FString * CurrentNameFilter, const FString * CurrentDestinationFolder, bool bNoFolderView) { NativeCall<void, UPrimalInventoryComponent *, const FString *, const FString *, const FString *, bool>(this, "AShooterPlayerController.ServerTransferAllToRemoteInventory", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter, CurrentDestinationFolder, bNoFolderView); }
	void ServerTransferFromRemoteInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, int requestedQuantity, int ToSlotIndex, bool bEquipItem) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int, int, bool>(this, "AShooterPlayerController.ServerTransferFromRemoteInventory", inventoryComp, itemID, requestedQuantity, ToSlotIndex, bEquipItem); }
	void ServerTransferToRemoteInventory(UPrimalInventoryComponent * inventoryComp, FItemNetID itemID, bool bAlsoTryToEqup, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, int>(this, "AShooterPlayerController.ServerTransferToRemoteInventory", inventoryComp, itemID, bAlsoTryToEqup, requestedQuantity); }
	void ServerTransferredPlayerConfirmationResult(bool bAccept) { NativeCall<void, bool>(this, "AShooterPlayerController.ServerTransferredPlayerConfirmationResult", bAccept); }
	void ServerUnbanPlayer(const FString * PlayerSteamName, const FString * PlayerSteamID) { NativeCall<void, const FString *, const FString *>(this, "AShooterPlayerController.ServerUnbanPlayer", PlayerSteamName, PlayerSteamID); }
	void ServerUnlockPerMapExplorerNote(int ExplorerNoteIndex, bool bAvoidBuff) { NativeCall<void, int, bool>(this, "AShooterPlayerController.ServerUnlockPerMapExplorerNote", ExplorerNoteIndex, bAvoidBuff); }
	void ServerUploadCharaterDataToArk(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerUploadCharaterDataToArk", inventoryComp); }
	void ServerUploadCurrentCharacterAndItems(UPrimalInventoryComponent * inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>(this, "AShooterPlayerController.ServerUploadCurrentCharacterAndItems", inventoryComp); }
	void ServerUploadDino(APrimalDinoCharacter * DownloadedDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterPlayerController.ServerUploadDino", DownloadedDino); }
	void Server_Ping(const FReplicatePingData WithPingData) { NativeCall<void, const FReplicatePingData>(this, "AShooterPlayerController.Server_Ping", WithPingData); }
	void Server_RespondToPing(const FReplicatePingData RespondToPingData) { NativeCall<void, const FReplicatePingData>(this, "AShooterPlayerController.Server_RespondToPing", RespondToPingData); }
};

