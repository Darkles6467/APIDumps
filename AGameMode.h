#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "UEngineMessage.h"
#include "FUniqueNetId.h"

struct AGameMode : AInfo
{
	char __padding[0xf0L];
	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameMode.MatchState"); }
	FString& OptionsStringField() { return *GetNativePointerField<FString*>(this, "AGameMode.OptionsString"); }
	int& NumSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumSpectators"); }
	int& NumPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumPlayers"); }
	int& NumBotsField() { return *GetNativePointerField<int*>(this, "AGameMode.NumBots"); }
	float& MinRespawnDelayField() { return *GetNativePointerField<float*>(this, "AGameMode.MinRespawnDelay"); }
	int& NumTravellingPlayersField() { return *GetNativePointerField<int*>(this, "AGameMode.NumTravellingPlayers"); }
	int& CurrentIDField() { return *GetNativePointerField<int*>(this, "AGameMode.CurrentID"); }
	FString& DefaultPlayerNameField() { return *GetNativePointerField<FString*>(this, "AGameMode.DefaultPlayerName"); }
	UAntiDupeTransactionLog * AntiDupeTransactionLogField() { return GetNativePointerField<UAntiDupeTransactionLog *>(this, "AGameMode.AntiDupeTransactionLog"); }
	TArray<FGameClassShortName>& GameModeClassAliasesField() { return *GetNativePointerField<TArray<FGameClassShortName>*>(this, "AGameMode.GameModeClassAliases"); }
	float& InactivePlayerStateLifeSpanField() { return *GetNativePointerField<float*>(this, "AGameMode.InactivePlayerStateLifeSpan"); }

	// Functions

	FName * GetMatchState(FName * result) { return NativeCall<FName *, FName *>(this, "AGameMode.GetMatchState", result); }
	static const wchar_t * StaticConfigName() { return NativeCall<const wchar_t *>(nullptr, "AGameMode.StaticConfigName"); }
	void AbortMatch() { NativeCall<void>(this, "AGameMode.AbortMatch"); }
	void AddInactivePlayer(APlayerState * PlayerState, APlayerController * PC) { NativeCall<void, APlayerState *, APlayerController *>(this, "AGameMode.AddInactivePlayer", PlayerState, PC); }
	void AddPlayerStart(APlayerStart * NewPlayerStart) { NativeCall<void, APlayerStart *>(this, "AGameMode.AddPlayerStart", NewPlayerStart); }
	bool AllowCheats(APlayerController * P) { return NativeCall<bool, APlayerController *>(this, "AGameMode.AllowCheats", P); }
	bool AllowPausing(APlayerController * PC) { return NativeCall<bool, APlayerController *>(this, "AGameMode.AllowPausing", PC); }
	void Broadcast(AActor * Sender, const FString * Msg, FName Type) { NativeCall<void, AActor *, const FString *, FName>(this, "AGameMode.Broadcast", Sender, Msg, Type); }
	void BroadcastLocalized(AActor * Sender, TSubclassOf<ULocalMessage> Message, int Switch, APlayerState * RelatedPlayerState_1, APlayerState * RelatedPlayerState_2, UObject * OptionalObject) { NativeCall<void, AActor *, TSubclassOf<ULocalMessage>, int, APlayerState *, APlayerState *, UObject *>(this, "AGameMode.BroadcastLocalized", Sender, Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject); }
	void ChangeName(AController * Other, const FString * S, bool bNameChange) { NativeCall<void, AController *, const FString *, bool>(this, "AGameMode.ChangeName", Other, S, bNameChange); }
	void ClearPause() { NativeCall<void>(this, "AGameMode.ClearPause"); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "AGameMode.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void EndMatch() { NativeCall<void>(this, "AGameMode.EndMatch"); }
	bool FindInactivePlayer(APlayerController * PC) { return NativeCall<bool, APlayerController *>(this, "AGameMode.FindInactivePlayer", PC); }
	void GenericPlayerInitialization(AController * C) { NativeCall<void, AController *>(this, "AGameMode.GenericPlayerInitialization", C); }
	FString * GetDefaultGameClassPath(FString * result, const FString * MapName, const FString * Options, const FString * Portal) { return NativeCall<FString *, FString *, const FString *, const FString *, const FString *>(this, "AGameMode.GetDefaultGameClassPath", result, MapName, Options, Portal); }
	int GetIntOption(const FString * Options, const FString * ParseString, int CurrentValue) { return NativeCall<int, const FString *, const FString *, int>(this, "AGameMode.GetIntOption", Options, ParseString, CurrentValue); }
	void GetKeyValue(const FString * Pair, FString * Key, FString * Value) { NativeCall<void, const FString *, FString *, FString *>(this, "AGameMode.GetKeyValue", Pair, Key, Value); }
	FString * GetNetworkNumber(FString * result) { return NativeCall<FString *, FString *>(this, "AGameMode.GetNetworkNumber", result); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameMode.GetNumPlayers"); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor *> * ActorList) { NativeCall<void, bool, TArray<AActor *> *>(this, "AGameMode.GetSeamlessTravelActorList", bToEntry, ActorList); }
	bool GrabOption(FString * Options, FString * Result) { return NativeCall<bool, FString *, FString *>(this, "AGameMode.GrabOption", Options, Result); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameMode.HandleMatchHasEnded"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameMode.HandleMatchHasStarted"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart"); }
	void HandleSeamlessTravelPlayer(AController ** C) { NativeCall<void, AController **>(this, "AGameMode.HandleSeamlessTravelPlayer", C); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameMode.HasMatchEnded"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameMode.HasMatchStarted"); }
	bool HasOption(const FString * Options, const FString * InKey) { return NativeCall<bool, const FString *, const FString *>(this, "AGameMode.HasOption", Options, InKey); }
	void InitGame(const FString * MapName, const FString * Options, FString * ErrorMessage) { NativeCall<void, const FString *, const FString *, FString *>(this, "AGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "AGameMode.InitGameState"); }
	FString * InitNewPlayer(FString * result, APlayerController * NewPlayerController, const TSharedPtr<FUniqueNetId,0> * UniqueId, const FString * Options, const FString * Portal) { return NativeCall<FString *, FString *, APlayerController *, const TSharedPtr<FUniqueNetId,0> *, const FString *, const FString *>(this, "AGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameMode.IsMatchInProgress"); }
	void Logout(AController * Exiting) { NativeCall<void, AController *>(this, "AGameMode.Logout", Exiting); }
	bool MustSpectate(APlayerController * NewPlayerController) { return NativeCall<bool, APlayerController *>(this, "AGameMode.MustSpectate", NewPlayerController); }
	void OverridePlayerState(APlayerController * PC, APlayerState * OldPlayerState) { NativeCall<void, APlayerController *, APlayerState *>(this, "AGameMode.OverridePlayerState", PC, OldPlayerState); }
	FString * ParseOption(FString * result, const FString * Options, const FString * InKey) { return NativeCall<FString *, FString *, const FString *, const FString *>(this, "AGameMode.ParseOption", result, Options, InKey); }
	bool PlayerCanRestart(APlayerController * Player) { return NativeCall<bool, APlayerController *>(this, "AGameMode.PlayerCanRestart", Player); }
	void PostLogin(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.PostLogin", NewPlayer); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameMode.PostSeamlessTravel"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AGameMode.PreInitializeComponents"); }
	void PreLogin(const FString * Options, const FString * Address, const TSharedPtr<FUniqueNetId,0> * UniqueId, const FString * authToken, FString * ErrorMessage, UNetConnection * Connection) { NativeCall<void, const FString *, const FString *, const TSharedPtr<FUniqueNetId,0> *, const FString *, FString *, UNetConnection *>(this, "AGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage, Connection); }
	void ProcessServerTravel(const FString * URL, bool bAbsolute) { NativeCall<void, const FString *, bool>(this, "AGameMode.ProcessServerTravel", URL, bAbsolute); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch"); }
	void RemoveConnectedPlayer(const TSharedPtr<FUniqueNetId,0> * UniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId,0> *>(this, "AGameMode.RemoveConnectedPlayer", UniqueNetId); }
	void RemovePlayerControllerFromPlayerCount(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameMode.RemovePlayerControllerFromPlayerCount", PC); }
	void RemovePlayerStart(APlayerStart * RemovedPlayerStart) { NativeCall<void, APlayerStart *>(this, "AGameMode.RemovePlayerStart", RemovedPlayerStart); }
	void Reset() { NativeCall<void>(this, "AGameMode.Reset"); }
	void ResetLevel() { NativeCall<void>(this, "AGameMode.ResetLevel"); }
	void RestartGame() { NativeCall<void>(this, "AGameMode.RestartGame"); }
	void RestartPlayer(AController * NewPlayer) { NativeCall<void, AController *>(this, "AGameMode.RestartPlayer", NewPlayer); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameMode.ReturnToMainMenuHost"); }
	void SendPlayer(APlayerController * aPlayer, const FString * FURL) { NativeCall<void, APlayerController *, const FString *>(this, "AGameMode.SendPlayer", aPlayer, FURL); }
	void SetBandwidthLimit(float AsyncIOBandwidthLimit) { NativeCall<void, float>(this, "AGameMode.SetBandwidthLimit", AsyncIOBandwidthLimit); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameMode.SetMatchState", NewState); }
	void SetPlayerDefaults(APawn * PlayerPawn) { NativeCall<void, APawn *>(this, "AGameMode.SetPlayerDefaults", PlayerPawn); }
	void SetSeamlessTravelViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameMode.SetSeamlessTravelViewTarget", PC); }
	bool ShouldSpawnAtStartSpot_Implementation(AController * Player) { return NativeCall<bool, AController *>(this, "AGameMode.ShouldSpawnAtStartSpot_Implementation", Player); }
	void StartMatch() { NativeCall<void>(this, "AGameMode.StartMatch"); }
	void StartNewPlayer(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.StartNewPlayer", NewPlayer); }
	void StartPlay() { NativeCall<void>(this, "AGameMode.StartPlay"); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameMode.StartToLeaveMap"); }
	static FString * StaticGetFullGameClassName(FString * result, const FString * Str) { return NativeCall<FString *, FString *, const FString *>(nullptr, "AGameMode.StaticGetFullGameClassName", result, Str); }
	void SwapPlayerControllers(APlayerController * OldPC, APlayerController * NewPC) { NativeCall<void, APlayerController *, APlayerController *>(this, "AGameMode.SwapPlayerControllers", OldPC, NewPC); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameMode.Tick", DeltaSeconds); }
	void UpdateGameplayMuteList(APlayerController * aPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.UpdateGameplayMuteList", aPlayer); }
	void K2_PostLogin(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.K2_PostLogin", NewPlayer); }
	bool ShouldSpawnAtStartSpot(AController * Player) { return NativeCall<bool, AController *>(this, "AGameMode.ShouldSpawnAtStartSpot", Player); }
};

