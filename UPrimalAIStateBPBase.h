#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UDamageType.h"
#include "AShooterProjectile.h"

struct UPrimalAIStateBPBase : UPrimalAIState
{
	char __padding[0x48L];
	float& MinTickEventTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MinTickEventTime"); }
	float& MaxTickEventTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MaxTickEventTime"); }
	float& MinAttackTickTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MinAttackTickTime"); }
	float& MaxAttackTickTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.MaxAttackTickTime"); }
	bool& bUpdatedLastAttackTimeField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateBPBase.bUpdatedLastAttackTime"); }
	long double& StateStartTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalAIStateBPBase.StateStartTime"); }
	long double& LastManagedTickEventTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalAIStateBPBase.LastManagedTickEventTime"); }
	float& CurrentManagedTickEventIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.CurrentManagedTickEventInterval"); }
	long double& LastManagedAttackTickTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalAIStateBPBase.LastManagedAttackTickTime"); }
	float& CurrentManagedAttackTickIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateBPBase.CurrentManagedAttackTickInterval"); }

	// Functions

	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.CanUseState"); }
	void DealMeleeDamage(AActor * HitActor, const FHitResult * FromHitResult) { NativeCall<void, AActor *, const FHitResult *>(this, "UPrimalAIStateBPBase.DealMeleeDamage", HitActor, FromHitResult); }
	void DealMeleeDamageDirect(AActor * TargetActor, FVector DamageSourceWorldLocation, float DamageAmount, float DamageImpulse, TSubclassOf<UDamageType> DamageTypeClass, bool bUseBlueprintAdjustOutputDamage, bool bInstantlyHarvestCorpse) { NativeCall<void, AActor *, FVector, float, float, TSubclassOf<UDamageType>, bool, bool>(this, "UPrimalAIStateBPBase.DealMeleeDamageDirect", TargetActor, DamageSourceWorldLocation, DamageAmount, DamageImpulse, DamageTypeClass, bUseBlueprintAdjustOutputDamage, bInstantlyHarvestCorpse); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateBPBase.EndAnimationState", CustomEventName, Role); }
	void FinishState() { NativeCall<void>(this, "UPrimalAIStateBPBase.FinishState"); }
	FDinoAttackInfo * GetAttackInfo(char * OutAttackIndex) { return NativeCall<FDinoAttackInfo *, char *>(this, "UPrimalAIStateBPBase.GetAttackInfo", OutAttackIndex); }
	void GetLastAttackTimeAndInterval(long double * OutLastAttackTime, float * OutAttackInterval) { NativeCall<void, long double *, float *>(this, "UPrimalAIStateBPBase.GetLastAttackTimeAndInterval", OutLastAttackTime, OutAttackInterval); }
	long double GetStateBeginTime() { return NativeCall<long double>(this, "UPrimalAIStateBPBase.GetStateBeginTime"); }
	float GetTimeSinceStateBegin() { return NativeCall<float>(this, "UPrimalAIStateBPBase.GetTimeSinceStateBegin"); }
	bool IsChildState() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.IsChildState"); }
	bool IsTimeSinceStateBegin(float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, float, bool>(this, "UPrimalAIStateBPBase.IsTimeSinceStateBegin", CheckTimeSince, bForceTrueAtZeroTime); }
	void OnAnimNotifyCustomEvent(FName CustomEventName, UAnimSequenceBase * Animation, ENetRole Role) { NativeCall<void, FName, UAnimSequenceBase *, ENetRole>(this, "UPrimalAIStateBPBase.OnAnimNotifyCustomEvent", CustomEventName, Animation, Role); }
	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIStateBPBase.OnBegin", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateBPBase.OnEnd"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateBPBase.OnTick", DeltaSeconds); }
	void SetLastAttackTime() { NativeCall<void>(this, "UPrimalAIStateBPBase.SetLastAttackTime"); }
	void SetLastAttackTimeToNow(float Offset) { NativeCall<void, float>(this, "UPrimalAIStateBPBase.SetLastAttackTimeToNow", Offset); }
	bool SpawnAndFireProjectile(TSubclassOf<AShooterProjectile> ProjectileClass, FName ProjectileSocket, float ProjectileInterval, bool bOverrideProjectileSpawn, const FVector * OverrideSpawnLoc, const FRotator * OverrideSpawnRot) { return NativeCall<bool, TSubclassOf<AShooterProjectile>, FName, float, bool, const FVector *, const FRotator *>(this, "UPrimalAIStateBPBase.SpawnAndFireProjectile", ProjectileClass, ProjectileSocket, ProjectileInterval, bOverrideProjectileSpawn, OverrideSpawnLoc, OverrideSpawnRot); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateBPBase.StartAnimationState", CustomEventName, Role); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateBPBase.TickAnimationState", DeltaTime, CustomEventName, Role); }
	void BPOnAnimNotifyCustomEvent(FName CustomEventName, UAnimSequenceBase * Animation, ENetRole Role) { NativeCall<void, FName, UAnimSequenceBase *, ENetRole>(this, "UPrimalAIStateBPBase.BPOnAnimNotifyCustomEvent", CustomEventName, Animation, Role); }
	void BPOnAttackEnd(int AttackIndex) { NativeCall<void, int>(this, "UPrimalAIStateBPBase.BPOnAttackEnd", AttackIndex); }
	void BPOnAttackStart(int AttackIndex) { NativeCall<void, int>(this, "UPrimalAIStateBPBase.BPOnAttackStart", AttackIndex); }
	void BPOnAttackTick(float DeltaTime) { NativeCall<void, float>(this, "UPrimalAIStateBPBase.BPOnAttackTick", DeltaTime); }
	void BPOnClearAttackState() { NativeCall<void>(this, "UPrimalAIStateBPBase.BPOnClearAttackState"); }
	bool BPShouldEndAttack() { return NativeCall<bool>(this, "UPrimalAIStateBPBase.BPShouldEndAttack"); }
};

