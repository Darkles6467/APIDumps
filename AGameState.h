#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "FLifetimeProperty.h"

struct AGameState : AInfo
{
	char __padding[0xc8L];
	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.MatchState"); }
	FName& PreviousMatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.PreviousMatchState"); }
	int& ElapsedTimeField() { return *GetNativePointerField<int*>(this, "AGameState.ElapsedTime"); }

	// Functions

	bool TeleportTo(const FVector * DestLocation, const FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const FVector *, const FRotator *, bool, bool>(this, "AGameState.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void AddPlayerState(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AGameState.AddPlayerState", PlayerState); }
	void BPNetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector AtLocation, FRotator AtRotation, AActor * EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector, FRotator, AActor *, float, USceneComponent *, int, FName, bool>(this, "AGameState.BPNetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	void DefaultTimer() { NativeCall<void>(this, "AGameState.DefaultTimer"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameState.HandleMatchHasStarted"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameState.HasMatchEnded"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameState.HasMatchStarted"); }
	void InitializedGameState() { NativeCall<void>(this, "AGameState.InitializedGameState"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameState.IsMatchInProgress"); }
	void NetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize AtLocation, FRotator_NetQuantize AtRotation, AActor * EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize, FRotator_NetQuantize, AActor *, float, USceneComponent *, int, FName, bool>(this, "AGameState.NetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	void OnRep_GameModeClass() { NativeCall<void>(this, "AGameState.OnRep_GameModeClass"); }
	void OnRep_MatchState() { NativeCall<void>(this, "AGameState.OnRep_MatchState"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameState.PostInitializeComponents"); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameState.ReceivedGameModeClass"); }
	void ReceivedSpectatorClass() { NativeCall<void>(this, "AGameState.ReceivedSpectatorClass"); }
	void RemovePlayerState(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AGameState.RemovePlayerState", PlayerState); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>(this, "AGameState.SeamlessTravelTransitionCheckpoint", bToTransitionMap); }
	bool Semaphore_Release(FName SemaphoreName, AActor * InObject) { return NativeCall<bool, FName, AActor *>(this, "AGameState.Semaphore_Release", SemaphoreName, InObject); }
	bool Semaphore_TryGrab(FName SemaphoreName, AActor * InObject, float PriorityWeight, int MaxToAllocate) { return NativeCall<bool, FName, AActor *, float, int>(this, "AGameState.Semaphore_TryGrab", SemaphoreName, InObject, PriorityWeight, MaxToAllocate); }
};

