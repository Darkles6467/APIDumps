#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "AShooterCharacter.h"
#include "FUniqueNetId.h"
#include "UShooterLocalPlayer.h"

struct UGameInstance : UObject
{
	char __padding[0x30L];
	FWorldContext * WorldContextField() { return GetNativePointerField<FWorldContext *>(this, "UGameInstance.WorldContext"); }
	FString& PIEMapNameField() { return *GetNativePointerField<FString*>(this, "UGameInstance.PIEMapName"); }

	// Functions

	const TTSDestination * GetLocalPlayers() { return NativeCall<const TTSDestination *>(this, "UGameInstance.GetLocalPlayers"); }
	int AddLocalPlayer(ULocalPlayer * NewLocalPlayer, int ControllerId) { return NativeCall<int, ULocalPlayer *, int>(this, "UGameInstance.AddLocalPlayer", NewLocalPlayer, ControllerId); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UGameInstance.AddReferencedObjects", InThis, Collector); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UGameInstance.Exec", InWorld, Cmd, Ar); }
	TArray<TEnumAsByte<enum ECollisionChannel>> * GetSkeletalPhysCustomBodyAdditionalIgnores() { return NativeCall<TArray<TEnumAsByte<enum ECollisionChannel>> *>(this, "UGameInstance.GetSkeletalPhysCustomBodyAdditionalIgnores"); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UGameInstance.GetWorld"); }
	bool HandleOpenCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UGameInstance.HandleOpenCommand", Cmd, Ar, InWorld); }
	void Init() { NativeCall<void>(this, "UGameInstance.Init"); }
	bool RemoveLocalPlayer(ULocalPlayer * ExistingPlayer) { return NativeCall<bool, ULocalPlayer *>(this, "UGameInstance.RemoveLocalPlayer", ExistingPlayer); }
	void StartGameInstance() { NativeCall<void>(this, "UGameInstance.StartGameInstance"); }
};

struct UShooterGameInstance : UGameInstance
{
	char __padding[0x318L];
	FName& CurrentStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.CurrentState"); }
	bool& bCanUseUserGeneratedContentField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bCanUseUserGeneratedContent"); }
	bool& bHasCommunicationPriviligeField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasCommunicationPrivilige"); }
	TArray<FAssetPathObjectPair>& AsyncLoadededAssetReferencesField() { return *GetNativePointerField<TArray<FAssetPathObjectPair>*>(this, "UShooterGameInstance.AsyncLoadededAssetReferences"); }
	UWorldModifiersContainer * WorldModifiersContainerField() { return GetNativePointerField<UWorldModifiersContainer *>(this, "UShooterGameInstance.WorldModifiersContainer"); }
	FString& WelcomeScreenMapField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WelcomeScreenMap"); }
	FString& MainMenuMapField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.MainMenuMap"); }
	int& AutoPgoSweepIntervalField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.AutoPgoSweepInterval"); }
	FName& PendingStateField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.PendingState"); }
	FShooterPendingMessage& PendingMessageField() { return *GetNativePointerField<FShooterPendingMessage*>(this, "UShooterGameInstance.PendingMessage"); }
	FShooterPendingInvite& PendingInviteField() { return *GetNativePointerField<FShooterPendingInvite*>(this, "UShooterGameInstance.PendingInvite"); }
	FString& TravelURLField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.TravelURL"); }
	bool& bIsOnlineField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsOnline"); }
	bool& bPendingEnableSplitscreenField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bPendingEnableSplitscreen"); }
	bool& bIsLicensedField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bIsLicensed"); }
	int& IgnorePairingChangeForControllerIdField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.IgnorePairingChangeForControllerId"); }
	EOnlineServerConnectionStatus::Type& CurrentConnectionStatusField() { return *GetNativePointerField<EOnlineServerConnectionStatus::Type*>(this, "UShooterGameInstance.CurrentConnectionStatus"); }
	long double& TimeTillNextSTSTokenRequestField() { return *GetNativePointerField<long double*>(this, "UShooterGameInstance.TimeTillNextSTSTokenRequest"); }
	int& CurrentSTS_RetryFailureCountField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.CurrentSTS_RetryFailureCount"); }
	TWeakObjectPtr<ADayCycleManager>& DayCycleManagerField() { return *GetNativePointerField<TWeakObjectPtr<ADayCycleManager>*>(this, "UShooterGameInstance.DayCycleManager"); }
	TWeakObjectPtr<ASOTFNotification>& SOTFNotificationManagerField() { return *GetNativePointerField<TWeakObjectPtr<ASOTFNotification>*>(this, "UShooterGameInstance.SOTFNotificationManager"); }
	int& bOnReturnToMainMenuNotificationField() { return *GetNativePointerField<int*>(this, "UShooterGameInstance.bOnReturnToMainMenuNotification"); }
	FString& OnReturnToMainMenuNotificationMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OnReturnToMainMenuNotificationMessage"); }
	FString& OnReturnToMainMenuNotificationTitleField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OnReturnToMainMenuNotificationTitle"); }
	FString& GlobalMainMenuMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMainMenuMessage"); }
	FString& GlobalMainMenuTitleField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.GlobalMainMenuTitle"); }
	bool& bHasReceivedNewsMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasReceivedNewsMessage"); }
	bool& bHasOfficialStatusMessageField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.bHasOfficialStatusMessage"); }
	FString& NewsMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.NewsMessage"); }
	FString& OfficialStatusMessageField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.OfficialStatusMessage"); }
	FWindowsCriticalSection& TerrainGenerationMutexField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "UShooterGameInstance.TerrainGenerationMutex"); }
	FString& TerrainGenerationProgressBarMsgField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.TerrainGenerationProgressBarMsg"); }
	float& SecondsSpentGeneratingTerrainField() { return *GetNativePointerField<float*>(this, "UShooterGameInstance.SecondsSpentGeneratingTerrain"); }
	bool& TerrainIsGeneratingField() { return *GetNativePointerField<bool*>(this, "UShooterGameInstance.TerrainIsGenerating"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.ActiveEvent"); }
	FString& WorldModifierConfigOverrideField() { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WorldModifierConfigOverride"); }

	// Functions

	bool GetIsOnline() { return NativeCall<bool>(this, "UShooterGameInstance.GetIsOnline"); }
	void AddNetworkFailureHandlers() { NativeCall<void>(this, "UShooterGameInstance.AddNetworkFailureHandlers"); }
	void AddVivoxMapping(const FString * VivoxUsername, const TWeakObjectPtr<AShooterCharacter> * Character) { NativeCall<void, const FString *, const TWeakObjectPtr<AShooterCharacter> *>(this, "UShooterGameInstance.AddVivoxMapping", VivoxUsername, Character); }
	void AsyncLoadAssetFromPath(const FString * AssetPath) { NativeCall<void, const FString *>(this, "UShooterGameInstance.AsyncLoadAssetFromPath", AssetPath); }
	void AsyncUnloadAssetFromObject(UObject * AssetToUnload, bool bForceGarbageCollection) { NativeCall<void, UObject *, bool>(this, "UShooterGameInstance.AsyncUnloadAssetFromObject", AssetToUnload, bForceGarbageCollection); }
	void AsyncUnloadAssetFromPath(const FString * AssetPathToUnload, bool bForceGarbageCollection) { NativeCall<void, const FString *, bool>(this, "UShooterGameInstance.AsyncUnloadAssetFromPath", AssetPathToUnload, bForceGarbageCollection); }
	void BeginMainMenuState() { NativeCall<void>(this, "UShooterGameInstance.BeginMainMenuState"); }
	void BeginMessageMenuState() { NativeCall<void>(this, "UShooterGameInstance.BeginMessageMenuState"); }
	void BeginNewState(FName NewState, FName PrevState) { NativeCall<void, FName, FName>(this, "UShooterGameInstance.BeginNewState", NewState, PrevState); }
	void BeginPendingInviteState() { NativeCall<void>(this, "UShooterGameInstance.BeginPendingInviteState"); }
	void BeginPlayingState() { NativeCall<void>(this, "UShooterGameInstance.BeginPlayingState"); }
	void BeginWelcomeScreenState() { NativeCall<void>(this, "UShooterGameInstance.BeginWelcomeScreenState"); }
	void CleanupSessionOnReturnToMenu() { NativeCall<void>(this, "UShooterGameInstance.CleanupSessionOnReturnToMenu"); }
	void ConditionalGoToMenuAndDisplayFailureNotification() { NativeCall<void>(this, "UShooterGameInstance.ConditionalGoToMenuAndDisplayFailureNotification"); }
	void DisplayGlobalMainMenuNotification() { NativeCall<void>(this, "UShooterGameInstance.DisplayGlobalMainMenuNotification"); }
	void DoPostLoadMap(bool bForceReinitUI) { NativeCall<void, bool>(this, "UShooterGameInstance.DoPostLoadMap", bForceReinitUI); }
	void EndCurrentState(FName NextState) { NativeCall<void, FName>(this, "UShooterGameInstance.EndCurrentState", NextState); }
	void EndPlayingState() { NativeCall<void>(this, "UShooterGameInstance.EndPlayingState"); }
	void FinishAsyncLoading() { NativeCall<void>(this, "UShooterGameInstance.FinishAsyncLoading"); }
	void FinishJoinSession(EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameInstance.FinishJoinSession", Result); }
	AShooterCharacter * GetCharacterFromVivoxUsername(const FString * VivoxUsername) { return NativeCall<AShooterCharacter *, const FString *>(this, "UShooterGameInstance.GetCharacterFromVivoxUsername", VivoxUsername); }
	int GetFirstPlatformUserId() { return NativeCall<int>(this, "UShooterGameInstance.GetFirstPlatformUserId"); }
	AShooterGameSession * GetGameSession() { return NativeCall<AShooterGameSession *>(this, "UShooterGameInstance.GetGameSession"); }
	FName * GetInitialState(FName * result) { return NativeCall<FName *, FName *>(this, "UShooterGameInstance.GetInitialState", result); }
	int GetPlatformUserIdFromUniqueID(TSharedPtr<FUniqueNetId,0> UniqueID) { return NativeCall<int, TSharedPtr<FUniqueNetId,0>>(this, "UShooterGameInstance.GetPlatformUserIdFromUniqueID", UniqueID); }
	TArray<TEnumAsByte<enum ECollisionChannel>> * GetSkeletalPhysCustomBodyAdditionalIgnores() { return NativeCall<TArray<TEnumAsByte<enum ECollisionChannel>> *>(this, "UShooterGameInstance.GetSkeletalPhysCustomBodyAdditionalIgnores"); }
	static FString * GetVivoxErrorAsString(FString * result, int ErrorCode) { return NativeCall<FString *, FString *, int>(nullptr, "UShooterGameInstance.GetVivoxErrorAsString", result, ErrorCode); }
	static FVivoxCoreModule * GetVivoxModule() { return NativeCall<FVivoxCoreModule *>(nullptr, "UShooterGameInstance.GetVivoxModule"); }
	void GotoInitialState() { NativeCall<void>(this, "UShooterGameInstance.GotoInitialState"); }
	void GotoState(FName NewState) { NativeCall<void, FName>(this, "UShooterGameInstance.GotoState", NewState); }
	void HandleAppLicenseUpdate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppLicenseUpdate"); }
	void HandleAppResume() { NativeCall<void>(this, "UShooterGameInstance.HandleAppResume"); }
	void HandleAppSuspend() { NativeCall<void>(this, "UShooterGameInstance.HandleAppSuspend"); }
	void HandleAppWillDeactivate() { NativeCall<void>(this, "UShooterGameInstance.HandleAppWillDeactivate"); }
	void HandleControllerConnectionChange(bool bIsConnection, int Unused, int InControllerId) { NativeCall<void, bool, int, int>(this, "UShooterGameInstance.HandleControllerConnectionChange", bIsConnection, Unused, InControllerId); }
	void HandleControllerPairingChanged(int GameUserIndex, const FUniqueNetId * PreviousUser, const FUniqueNetId * NewUser) { NativeCall<void, int, const FUniqueNetId *, const FUniqueNetId *>(this, "UShooterGameInstance.HandleControllerPairingChanged", GameUserIndex, PreviousUser, NewUser); }
	void HandleNetworkConnectionStatusChanged(EOnlineServerConnectionStatus::Type ConnectionStatus) { NativeCall<void, EOnlineServerConnectionStatus::Type>(this, "UShooterGameInstance.HandleNetworkConnectionStatusChanged", ConnectionStatus); }
	bool HandleOpenCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UShooterGameInstance.HandleOpenCommand", Cmd, Ar, InWorld); }
	void HandleSafeFrameChanged() { NativeCall<void>(this, "UShooterGameInstance.HandleSafeFrameChanged"); }
	void HandleSessionUserInviteAccepted(const bool bWasSuccess, const int ControllerId, TSharedPtr<FUniqueNetId,0> UserId, const FOnlineSessionSearchResult * InviteResult) { NativeCall<void, const bool, const int, TSharedPtr<FUniqueNetId,0>, const FOnlineSessionSearchResult *>(this, "UShooterGameInstance.HandleSessionUserInviteAccepted", bWasSuccess, ControllerId, UserId, InviteResult); }
	void HandleSignInChangeMessaging() { NativeCall<void>(this, "UShooterGameInstance.HandleSignInChangeMessaging"); }
	void HandleUserLoginChanged(int GameUserIndex, ELoginStatus::Type PreviousLoginStatus, ELoginStatus::Type LoginStatus, const FUniqueNetId * UserId) { NativeCall<void, int, ELoginStatus::Type, ELoginStatus::Type, const FUniqueNetId *>(this, "UShooterGameInstance.HandleUserLoginChanged", GameUserIndex, PreviousLoginStatus, LoginStatus, UserId); }
	void Init() { NativeCall<void>(this, "UShooterGameInstance.Init"); }
	void InternalTravelToSession(const FName * SessionName) { NativeCall<void, const FName *>(this, "UShooterGameInstance.InternalTravelToSession", SessionName); }
	bool IsLocalPlayerOnline(ULocalPlayer * LocalPlayer) { return NativeCall<bool, ULocalPlayer *>(this, "UShooterGameInstance.IsLocalPlayerOnline", LocalPlayer); }
	bool JoinSession(ULocalPlayer * LocalPlayer, const FOnlineSessionSearchResult * SearchResult) { return NativeCall<bool, ULocalPlayer *, const FOnlineSessionSearchResult *>(this, "UShooterGameInstance.JoinSession", LocalPlayer, SearchResult); }
	bool JoinSession(ULocalPlayer * LocalPlayer, int SessionIndexInSearchResults) { return NativeCall<bool, ULocalPlayer *, int>(this, "UShooterGameInstance.JoinSession", LocalPlayer, SessionIndexInSearchResults); }
	void LabelPlayerAsQuitter(ULocalPlayer * LocalPlayer) { NativeCall<void, ULocalPlayer *>(this, "UShooterGameInstance.LabelPlayerAsQuitter", LocalPlayer); }
	void LoadFrontEndMap(const FString * MapName) { NativeCall<void, const FString *>(this, "UShooterGameInstance.LoadFrontEndMap", MapName); }
	void LoadGameMedia() { NativeCall<void>(this, "UShooterGameInstance.LoadGameMedia"); }
	void LoadTheGameMedia() { NativeCall<void>(this, "UShooterGameInstance.LoadTheGameMedia"); }
	void MaybeChangeState() { NativeCall<void>(this, "UShooterGameInstance.MaybeChangeState"); }
	FReply * OnControllerReconnectConfirm(FReply * result) { return NativeCall<FReply *, FReply *>(this, "UShooterGameInstance.OnControllerReconnectConfirm", result); }
	void OnEndSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "UShooterGameInstance.OnEndSessionComplete", SessionName, bWasSuccessful); }
	void OnGenerateTerrainBegin() { NativeCall<void>(this, "UShooterGameInstance.OnGenerateTerrainBegin"); }
	void OnGenerateTerrainEnd() { NativeCall<void>(this, "UShooterGameInstance.OnGenerateTerrainEnd"); }
	void OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameInstance.OnJoinSessionComplete", Result); }
	void OnPostLoadMap() { NativeCall<void>(this, "UShooterGameInstance.OnPostLoadMap"); }
	void OnPreLoadMap() { NativeCall<void>(this, "UShooterGameInstance.OnPreLoadMap"); }
	void OnRegisterJoiningLocalPlayerComplete(const FUniqueNetId * PlayerId, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, const FUniqueNetId *, EOnJoinSessionCompleteResult::Type>(this, "UShooterGameInstance.OnRegisterJoiningLocalPlayerComplete", PlayerId, Result); }
	void RemoveExistingLocalPlayer(ULocalPlayer * ExistingPlayer) { NativeCall<void, ULocalPlayer *>(this, "UShooterGameInstance.RemoveExistingLocalPlayer", ExistingPlayer); }
	void RemoveNetworkFailureHandlers() { NativeCall<void>(this, "UShooterGameInstance.RemoveNetworkFailureHandlers"); }
	void RemovePlayersFromParty() { NativeCall<void>(this, "UShooterGameInstance.RemovePlayersFromParty"); }
	void RemoveSplitScreenPlayers() { NativeCall<void>(this, "UShooterGameInstance.RemoveSplitScreenPlayers"); }
	void RequestNewSTSToken(bool bNotifyPendingGame_InitialMessage) { NativeCall<void, bool>(this, "UShooterGameInstance.RequestNewSTSToken", bNotifyPendingGame_InitialMessage); }
	void SetGenerateTerrainProgressMsg(FString Msg) { NativeCall<void, FString>(this, "UShooterGameInstance.SetGenerateTerrainProgressMsg", Msg); }
	void SetIsOnline(bool bInIsOnline) { NativeCall<void, bool>(this, "UShooterGameInstance.SetIsOnline", bInIsOnline); }
	void SetPresenceForLocalPlayers(const FVariantData * PresenceData) { NativeCall<void, const FVariantData *>(this, "UShooterGameInstance.SetPresenceForLocalPlayers", PresenceData); }
	void SetupActiveEvent() { NativeCall<void>(this, "UShooterGameInstance.SetupActiveEvent"); }
	void SetupForMapLoad(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UShooterGameInstance.SetupForMapLoad", InWorld); }
	void ShowLoadingScreen() { NativeCall<void>(this, "UShooterGameInstance.ShowLoadingScreen"); }
	void ShowMessageThenGoMain(const FString * Message, const FString * OKButtonString, const FString * CancelButtonString) { NativeCall<void, const FString *, const FString *, const FString *>(this, "UShooterGameInstance.ShowMessageThenGoMain", Message, OKButtonString, CancelButtonString); }
	void ShowMessageThenGotoState(const FString * Message, const FString * OKButtonString, const FString * CancelButtonString, const FName * NewState, const bool OverrideExisting, TWeakObjectPtr<ULocalPlayer> PlayerOwner) { NativeCall<void, const FString *, const FString *, const FString *, const FName *, const bool, TWeakObjectPtr<ULocalPlayer>>(this, "UShooterGameInstance.ShowMessageThenGotoState", Message, OKButtonString, CancelButtonString, NewState, OverrideExisting, PlayerOwner); }
	void Shutdown() { NativeCall<void>(this, "UShooterGameInstance.Shutdown"); }
	void StartGameInstance() { NativeCall<void>(this, "UShooterGameInstance.StartGameInstance"); }
	bool Tick(float DeltaSeconds) { return NativeCall<bool, float>(this, "UShooterGameInstance.Tick", DeltaSeconds); }
	void TravelLocalSessionFailure(UWorld * World, ETravelFailure::Type FailureType, const FString * ReasonString) { NativeCall<void, UWorld *, ETravelFailure::Type, const FString *>(this, "UShooterGameInstance.TravelLocalSessionFailure", World, FailureType, ReasonString); }
	void UpdateCullingOfVivoxUsers(float DeltaSeconds, AShooterPlayerController * ListenerPC) { NativeCall<void, float, AShooterPlayerController *>(this, "UShooterGameInstance.UpdateCullingOfVivoxUsers", DeltaSeconds, ListenerPC); }
	void UpdateTerrainGenerationProgressBar(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterGameInstance.UpdateTerrainGenerationProgressBar", DeltaSeconds); }
	void VivoxInitialize() { NativeCall<void>(this, "UShooterGameInstance.VivoxInitialize"); }
	void VivoxUninitialize() { NativeCall<void>(this, "UShooterGameInstance.VivoxUninitialize"); }
	void WorldLoaded() { NativeCall<void>(this, "UShooterGameInstance.WorldLoaded"); }
};

