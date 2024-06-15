#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UPrimalAIState : UObject
{
	char __padding[0x30L];
	APrimalDinoCharacter * PawnField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "UPrimalAIState.Pawn"); }
	FName& AnimationCustomNameField() { return *GetNativePointerField<FName*>(this, "UPrimalAIState.AnimationCustomName"); }
	bool& bUseBPCanAttackField() { return *GetNativePointerField<bool*>(this, "UPrimalAIState.bUseBPCanAttack"); }
	bool& bUseBPOverrideAttackWeightField() { return *GetNativePointerField<bool*>(this, "UPrimalAIState.bUseBPOverrideAttackWeight"); }

	// Functions

	bool BPIsChildState() { return NativeCall<bool>(this, "UPrimalAIState.BPIsChildState"); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIState.CanUseState"); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.EndAnimationState", CustomEventName, Role); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalAIState.GetDebugInfoString", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UPrimalAIState.GetWorld"); }
	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIState.OnBegin", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIState.OnEnd"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIState.OnTick", DeltaSeconds); }
	void SetInAnimationStateActive(bool Value) { NativeCall<void, bool>(this, "UPrimalAIState.SetInAnimationStateActive", Value); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.StartAnimationState", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIState.TickAnimationState", DeltaTime, CustomEventName, Role); }
	void OnChildStateEnded(UPrimalAIState * PrimalAIState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIState.OnChildStateEnded", PrimalAIState); }
	bool ShouldSkipIntervalCheck() { return NativeCall<bool>(this, "UPrimalAIState.ShouldSkipIntervalCheck"); }
	bool ShouldSkipRangeCheck() { return NativeCall<bool>(this, "UPrimalAIState.ShouldSkipRangeCheck"); }
	void SetLastAttackTime() { NativeCall<void>(this, "UPrimalAIState.SetLastAttackTime"); }
	bool BPCanAttack(float distance, float attackRangeOffset, AActor * OtherTarget) { return NativeCall<bool, float, float, AActor *>(this, "UPrimalAIState.BPCanAttack", distance, attackRangeOffset, OtherTarget); }
	FString * BPGetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalAIState.BPGetDebugInfoString", result); }
	float BPOverrideAttackWeight(float inputWeight, float distance, float attackRangeOffset, AActor * OtherTarget) { return NativeCall<float, float, float, float, AActor *>(this, "UPrimalAIState.BPOverrideAttackWeight", inputWeight, distance, attackRangeOffset, OtherTarget); }
	void EndAnimationStateEvent(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.EndAnimationStateEvent", CustomEventName, Role); }
	void OnBeginEvent(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIState.OnBeginEvent", InParentState); }
	bool OnCanUseStateEvent() { return NativeCall<bool>(this, "UPrimalAIState.OnCanUseStateEvent"); }
	void OnChildStateEndedEvent(UPrimalAIState * PrimalAIState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIState.OnChildStateEndedEvent", PrimalAIState); }
	void OnEndEvent() { NativeCall<void>(this, "UPrimalAIState.OnEndEvent"); }
	void OnTickEvent(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIState.OnTickEvent", DeltaSeconds); }
	bool ShouldSkipIntervalCheckEvent() { return NativeCall<bool>(this, "UPrimalAIState.ShouldSkipIntervalCheckEvent"); }
	bool ShouldSkipRangeCheckEvent() { return NativeCall<bool>(this, "UPrimalAIState.ShouldSkipRangeCheckEvent"); }
	void StartAnimationStateEvent(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIState.StartAnimationStateEvent", CustomEventName, Role); }
	void TickAnimationStateEvent(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIState.TickAnimationStateEvent", DeltaTime, CustomEventName, Role); }
	void SetPawn(APrimalDinoCharacter * MyPawn) { NativeCall<void, APrimalDinoCharacter *>(this, "UPrimalAIState.SetPawn", MyPawn); }
};

