#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateDinoRangedState : UPrimalAIState
{
	char __padding[0x48L];
	float& AccuracyWeightField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.AccuracyWeight"); }
	float& ClampAngleField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.ClampAngle"); }
	FVector& WorldGeometryTargetLocOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalAIStateDinoRangedState.WorldGeometryTargetLocOffset"); }
	FVector& CharacterTargetLocOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalAIStateDinoRangedState.CharacterTargetLocOffset"); }
	FName& AimSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoRangedState.AimSocket"); }
	TArray<FName>& RangedSocketsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalAIStateDinoRangedState.RangedSockets"); }
	float& SpreadOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoRangedState.SpreadOffset"); }

	// Functions

	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIStateDinoRangedState.IsChildState"); }
	void AimedShoot(const FVector * TargetLoc, const FName * RangedSocket) { NativeCall<void, const FVector *, const FName *>(this, "UPrimalAIStateDinoRangedState.AimedShoot", TargetLoc, RangedSocket); }
	FVector * ClampProjectileVectorInForwardDirection(FVector * result, const FVector * OriginalShootingDirection, const FName * RangedSocket) { return NativeCall<FVector *, FVector *, const FVector *, const FName *>(this, "UPrimalAIStateDinoRangedState.ClampProjectileVectorInForwardDirection", result, OriginalShootingDirection, RangedSocket); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoRangedState.EndAnimationState", CustomEventName, Role); }
	FVector * FindDirectionToLeadTarget(FVector * result, const FVector * VectorToHitTargetStandingStill, float extraTimeAllowed, const FVector * currentVelocityOfTarget) { return NativeCall<FVector *, FVector *, const FVector *, float, const FVector *>(this, "UPrimalAIStateDinoRangedState.FindDirectionToLeadTarget", result, VectorToHitTargetStandingStill, extraTimeAllowed, currentVelocityOfTarget); }
	float GetZGravityOffset(const FVector * ProjectileVelocity, const FVector * TargetLocation, const FVector * ProjectileFinalLocation) { return NativeCall<float, const FVector *, const FVector *, const FVector *>(this, "UPrimalAIStateDinoRangedState.GetZGravityOffset", ProjectileVelocity, TargetLocation, ProjectileFinalLocation); }
	FVector * OffsetVectorRandomlyReturnsAltered(FVector * result, const FVector * InVector, float minPercent, float maxPercent) { return NativeCall<FVector *, FVector *, const FVector *, float, float>(this, "UPrimalAIStateDinoRangedState.OffsetVectorRandomlyReturnsAltered", result, InVector, minPercent, maxPercent); }
	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIStateDinoRangedState.OnBegin", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoRangedState.OnEnd"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoRangedState.OnTick", DeltaSeconds); }
	void PreventAttackForTime(float time) { NativeCall<void, float>(this, "UPrimalAIStateDinoRangedState.PreventAttackForTime", time); }
	void SimpleShoot(const FName * RangedSocket) { NativeCall<void, const FName *>(this, "UPrimalAIStateDinoRangedState.SimpleShoot", RangedSocket); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoRangedState.TickAnimationState", DeltaTime, CustomEventName, Role); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoRangedState.StartAnimationState", CustomEventName, Role); }
	void BPRangedAttack(const FVector * TargetLocation, const FVector * TargetVelocity) { NativeCall<void, const FVector *, const FVector *>(this, "UPrimalAIStateDinoRangedState.BPRangedAttack", TargetLocation, TargetVelocity); }
	void BPRangedAttackOnBegin(const FVector * TargetLocation, const FVector * TargetVelocity) { NativeCall<void, const FVector *, const FVector *>(this, "UPrimalAIStateDinoRangedState.BPRangedAttackOnBegin", TargetLocation, TargetVelocity); }
};

