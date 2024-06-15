#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterWeapon_FlameThrower : AShooterWeapon
{
	char __padding[0x98L];
	int& InstantDamageAmountField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.InstantDamageAmount"); }
	float& DamageTestSphereRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestSphereRadius"); }
	float& DamageTestBoxExtentSideField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestBoxExtentSide"); }
	float& DamageTestMuzzleOffsetField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestMuzzleOffset"); }
	float& FlameHurtMaxDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.FlameHurtMaxDistance"); }
	TArray<FVector>& DamageImpactPointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "AShooterWeapon_FlameThrower.DamageImpactPoints"); }
	FVector& MuzzleDirectionOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_FlameThrower.MuzzleDirectionOffset"); }
	TEnumAsByte<enum ETickingGroup>& MuzzlePSCTickGroupOverrideField() { return *GetNativePointerField<TEnumAsByte<enum ETickingGroup>*>(this, "AShooterWeapon_FlameThrower.MuzzlePSCTickGroupOverride"); }
	FColor& FlameThrowerFXDefaultColorField() { return *GetNativePointerField<FColor*>(this, "AShooterWeapon_FlameThrower.FlameThrowerFXDefaultColor"); }
	UParticleSystem * FlameThrowerFXField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon_FlameThrower.FlameThrowerFX"); }
	UParticleSystem * FlameThrowerFX_FPVField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon_FlameThrower.FlameThrowerFX_FPV"); }
	UParticleSystem * OnFireFXField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon_FlameThrower.OnFireFX"); }
	UParticleSystem * HarvestFXField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon_FlameThrower.HarvestFX"); }
	TArray<double>& CachedShotsField() { return *GetNativePointerField<TArray<double>*>(this, "AShooterWeapon_FlameThrower.CachedShots"); }
	float& ShotDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.ShotDelay"); }
	bool& bAllowLocalExecutionField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_FlameThrower.bAllowLocalExecution"); }
	float& FXDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.FXDelay"); }
	bool& FXDelayCompletedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_FlameThrower.FXDelayCompleted"); }
	int& LastFrameServerTickShootFXCounterField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.LastFrameServerTickShootFXCounter"); }
	int& ServerTickShootFXCallsThisFrameField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.ServerTickShootFXCallsThisFrame"); }

	// Functions

	void BeginShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.BeginShootFX_Implementation"); }
	void ClientSpawnHarvestFX_Implementation(const TArray<FVector> * Impacts) { NativeCall<void, const TArray<FVector> *>(this, "AShooterWeapon_FlameThrower.ClientSpawnHarvestFX_Implementation", Impacts); }
	void EndFXDelay() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.EndFXDelay"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.FireWeapon"); }
	void GetFirePosition(FVector * Origin, FVector * ShootDir) { NativeCall<void, FVector *, FVector *>(this, "AShooterWeapon_FlameThrower.GetFirePosition", Origin, ShootDir); }
	bool IsPointInCone(FVector Point, FVector Origin, FVector Direction) { return NativeCall<bool, FVector, FVector, FVector>(this, "AShooterWeapon_FlameThrower.IsPointInCone", Point, Origin, Direction); }
	void ResetFXDelay() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ResetFXDelay"); }
	void ServerBeginShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerBeginShootFX_Implementation"); }
	void ServerStopShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerStopShootFX_Implementation"); }
	void ServerTickShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerTickShootFX_Implementation"); }
	void SpawnImpactEffects() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.SpawnImpactEffects"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_FlameThrower.StartFire", bFromGamepad); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_FlameThrower.StartReload", bFromReplication); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopFire"); }
	void StopShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopShootFX_Implementation"); }
	void StopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopSimulatingWeaponFire"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_FlameThrower.Tick", DeltaSeconds); }
	void TickShootFX_Implementation() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.TickShootFX_Implementation"); }
	void BPSpawnHarvestEffects(const TArray<FVector> * Impacts) { NativeCall<void, const TArray<FVector> *>(this, "AShooterWeapon_FlameThrower.BPSpawnHarvestEffects", Impacts); }
	void BeginShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.BeginShootFX"); }
	void ClientSpawnHarvestFX(const TArray<FVector> * Impacts) { NativeCall<void, const TArray<FVector> *>(this, "AShooterWeapon_FlameThrower.ClientSpawnHarvestFX", Impacts); }
	void ServerBeginShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerBeginShootFX"); }
	void ServerStopShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerStopShootFX"); }
	void ServerTickShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerTickShootFX"); }
	void StopShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopShootFX"); }
	void TickShootFX() { NativeCall<void>(this, "AShooterWeapon_FlameThrower.TickShootFX"); }
};

struct AShooterWeapon_Activated : AShooterWeapon_FlameThrower
{
	char __padding[0xb8L];
	int& nLastActivationAnimField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Activated.nLastActivationAnim"); }
	TArray<FWeaponAnim>& ActivateAnimField() { return *GetNativePointerField<TArray<FWeaponAnim>*>(this, "AShooterWeapon_Activated.ActivateAnim"); }
	TArray<FWeaponAnim>& DeactivateAnimField() { return *GetNativePointerField<TArray<FWeaponAnim>*>(this, "AShooterWeapon_Activated.DeactivateAnim"); }
	FWeaponAnim& StopFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Activated.StopFireAnim"); }
	FWeaponAnim& MovementFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Activated.MovementFireAnim"); }
	bool& bDamagePawnsField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Activated.bDamagePawns"); }
	TSubclassOf<UCameraShake>& ActivateCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon_Activated.ActivateCameraShake"); }
	float& ActivateCameraShakeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Activated.ActivateCameraShakeSpeedScale"); }
	FVector& FireOriginField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Activated.FireOrigin"); }
	FVector& FireDirectionField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Activated.FireDirection"); }
	FVector& TargetLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Activated.TargetLocation"); }
	FName& BeamTargetParameterNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Activated.BeamTargetParameterName"); }
	USoundCue * FireLoopSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon_Activated.FireLoopSound"); }
	UAudioComponent * FireLoopACField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterWeapon_Activated.FireLoopAC"); }
	USoundCue * IdleSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon_Activated.IdleSound"); }
	UAudioComponent * IdleACField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterWeapon_Activated.IdleAC"); }
	USoundCue * EmptySoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon_Activated.EmptySound"); }

	// Functions

	void ActivateWeapon(bool bActivate, int nAnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ActivateWeapon", bActivate, nAnimIndex); }
	void ActivateWeapon_Internal(bool bActivate, int * nAnimIndex) { NativeCall<void, bool, int *>(this, "AShooterWeapon_Activated.ActivateWeapon_Internal", bActivate, nAnimIndex); }
	bool BeamTrace(FVector Origin, FVector ShootDir, FVector * OutImpact) { return NativeCall<bool, FVector, FVector, FVector *>(this, "AShooterWeapon_Activated.BeamTrace", Origin, ShootDir, OutImpact); }
	bool CanPlayFireEffects() { return NativeCall<bool>(this, "AShooterWeapon_Activated.CanPlayFireEffects"); }
	void CancelActivation_Internal() { NativeCall<void>(this, "AShooterWeapon_Activated.CancelActivation_Internal"); }
	void ClientActivateWeapon_Implementation(bool bActivate) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientActivateWeapon_Implementation", bActivate); }
	void ClientHandleActivation_Implementation(bool bActivate) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientHandleActivation_Implementation", bActivate); }
	void EndActivationAnim() { NativeCall<void>(this, "AShooterWeapon_Activated.EndActivationAnim"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Activated.FireWeapon"); }
	bool GetAimOffsets(float DeltaTime, FRotator * RootRotOffset, float * RootYawSpeed, float MaxYawAimClamp, FVector * RootLocOffset, FRotator * CurrentAimRot, FVector * CurrentRootLoc, FVector * TargetRootLoc, FRotator * TargetAimRot) { return NativeCall<bool, float, FRotator *, float *, float, FVector *, FRotator *, FVector *, FVector *, FRotator *>(this, "AShooterWeapon_Activated.GetAimOffsets", DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, CurrentAimRot, CurrentRootLoc, TargetRootLoc, TargetAimRot); }
	FVector * GetBeamTarget(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon_Activated.GetBeamTarget", result); }
	void GetFirePosition(FVector * Origin, FVector * ShootDir) { NativeCall<void, FVector *, FVector *>(this, "AShooterWeapon_Activated.GetFirePosition", Origin, ShootDir); }
	bool IsActivationAnimPlaying() { return NativeCall<bool>(this, "AShooterWeapon_Activated.IsActivationAnimPlaying"); }
	void MuzzlePSCSpawned() { NativeCall<void>(this, "AShooterWeapon_Activated.MuzzlePSCSpawned"); }
	void PlayFireAnimation() { NativeCall<void>(this, "AShooterWeapon_Activated.PlayFireAnimation"); }
	FWeaponAnim * SelectActivationAnim(FWeaponAnim * result, bool bActivate, int * nAnimIndex) { return NativeCall<FWeaponAnim *, FWeaponAnim *, bool, int *>(this, "AShooterWeapon_Activated.SelectActivationAnim", result, bActivate, nAnimIndex); }
	FWeaponAnim * SelectFireAnim(FWeaponAnim * result) { return NativeCall<FWeaponAnim *, FWeaponAnim *>(this, "AShooterWeapon_Activated.SelectFireAnim", result); }
	void ServerActivateWeapon_Implementation(bool bActivate, int nAnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ServerActivateWeapon_Implementation", bActivate, nAnimIndex); }
	void ServerCancelActivation_Implementation() { NativeCall<void>(this, "AShooterWeapon_Activated.ServerCancelActivation_Implementation"); }
	void ServerPreFire_Implementation(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon_Activated.ServerPreFire_Implementation", Origin, ShootDir); }
	bool ShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "AShooterWeapon_Activated.ShouldDealDamage", TestActor); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.StartFire", bFromGamepad); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.StartReload", bFromReplication); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Activated.StartSecondaryAction"); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_Activated.StopFire"); }
	void StopSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Activated.StopSecondaryAction"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Activated.Tick", DeltaSeconds); }
	void TickShootFX_Internal() { NativeCall<void>(this, "AShooterWeapon_Activated.TickShootFX_Internal"); }
	void BPPreFireEvent(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon_Activated.BPPreFireEvent", Origin, ShootDir); }
	void ClientActivateWeapon(bool bActivate) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientActivateWeapon", bActivate); }
	void ClientHandleActivation(bool bActivate) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientHandleActivation", bActivate); }
	void HandleActivation(bool bActive) { NativeCall<void, bool>(this, "AShooterWeapon_Activated.HandleActivation", bActive); }
	void ServerActivateWeapon(bool bActivate, int nAnimIndex) { NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ServerActivateWeapon", bActivate, nAnimIndex); }
	void ServerPreFire(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon_Activated.ServerPreFire", Origin, ShootDir); }
};

