#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateDinoMeleeState : UPrimalAIState
{
	char __padding[0x38L];
	float& SpawnProjectileIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileInterval"); }
	FName& SpawnProjectileSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoMeleeState.SpawnProjectileSocket"); }
	float& SecondarySwingRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingRadius"); }
	FVector& SecondarySwingLocOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalAIStateDinoMeleeState.SecondarySwingLocOffset"); }

	// Functions

	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.IsChildState"); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIStateDinoMeleeState.CanUseState"); }
	void DoMeleeAttackTrace(float DeltaTime, bool bForceMeleeOverlapCheck) { NativeCall<void, float, bool>(this, "UPrimalAIStateDinoMeleeState.DoMeleeAttackTrace", DeltaTime, bForceMeleeOverlapCheck); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoMeleeState.EndAnimationState", CustomEventName, Role); }
	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIStateDinoMeleeState.OnBegin", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoMeleeState.OnEnd"); }
	void OnHitActor(const FHitResult * HitResult) { NativeCall<void, const FHitResult *>(this, "UPrimalAIStateDinoMeleeState.OnHitActor", HitResult); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoMeleeState.OnTick", DeltaSeconds); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoMeleeState.StartAnimationState", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoMeleeState.TickAnimationState", DeltaTime, CustomEventName, Role); }
	void BPGetSocketLocation(const FName * SocketName, FVector * SocketLocation) { NativeCall<void, const FName *, FVector *>(this, "UPrimalAIStateDinoMeleeState.BPGetSocketLocation", SocketName, SocketLocation); }
	void BPOnHitActor(const FHitResult * HitResult) { NativeCall<void, const FHitResult *>(this, "UPrimalAIStateDinoMeleeState.BPOnHitActor", HitResult); }
};

