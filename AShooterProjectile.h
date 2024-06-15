#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FHitResult.h"
#include "FLifetimeProperty.h"

struct AShooterProjectile : AActor
{
	char __padding[0x1f8L];
	TSubobjectPtr<UProjectileMovementComponent>& MovementCompField() { return *GetNativePointerField<TSubobjectPtr<UProjectileMovementComponent>*>(this, "AShooterProjectile.MovementComp"); }
	bool& bFragmentateField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bFragmentate"); }
	float& FragmentOriginOffsetField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.FragmentOriginOffset"); }
	float& FragmentConeHalfAngleField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.FragmentConeHalfAngle"); }
	int& NumberOfFragmentProjectilesField() { return *GetNativePointerField<int*>(this, "AShooterProjectile.NumberOfFragmentProjectiles"); }
	bool& bUseOwnerProjectileLifeField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bUseOwnerProjectileLife"); }
	float& ClientSideCollisionRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ClientSideCollisionRadius"); }
	float& TraceForBlockingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.TraceForBlockingRadius"); }
	float& CustomColorDesaturationField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.CustomColorDesaturation"); }
	FRotator& RotateMeshFactorField() { return *GetNativePointerField<FRotator*>(this, "AShooterProjectile.RotateMeshFactor"); }
	TSubclassOf<AShooterImpactEffect>& ImpactTemplateField() { return *GetNativePointerField<TSubclassOf<AShooterImpactEffect>*>(this, "AShooterProjectile.ImpactTemplate"); }
	float& TornOffLifeSpanField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.TornOffLifeSpan"); }
	float& PostExplosionKeepAliveLifeSpanField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.PostExplosionKeepAliveLifeSpan"); }
	long double& ExplosionNetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile.ExplosionNetworkTime"); }
	float& NudgedImpactDistanceField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.NudgedImpactDistance"); }
	bool& bIgnoreDirectImpactRadialDamageField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bIgnoreDirectImpactRadialDamage"); }
	bool& bForceNetUpdateField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bForceNetUpdate"); }
	float& ForceNetUpdateTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ForceNetUpdateTimeInterval"); }
	float& ParticleColorIntensityField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ParticleColorIntensity"); }
	float& ClientFailsafeLifespanField() { return *GetNativePointerField<float*>(this, "AShooterProjectile.ClientFailsafeLifespan"); }
	FProjectileWeaponData& WeaponConfigField() { return *GetNativePointerField<FProjectileWeaponData*>(this, "AShooterProjectile.WeaponConfig"); }
	FLinearColor& CustomColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterProjectile.CustomColor"); }
	bool& bHasImpactedField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bHasImpacted"); }
	FHitResult& ReplicatedHitInfoField() { return *GetNativePointerField<FHitResult*>(this, "AShooterProjectile.ReplicatedHitInfo"); }
	USoundCue * ProjectileBounceSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterProjectile.ProjectileBounceSound"); }
	bool& bSpawnedExplosionEffectsField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bSpawnedExplosionEffects"); }
	bool& ReceivedDestoryFromServerField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.ReceivedDestoryFromServer"); }
	bool& bPostExplosionKeepAliveField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bPostExplosionKeepAlive"); }
	long double& LastProjectileBounceSoundField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile.LastProjectileBounceSound"); }
	FVector& PreviousLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterProjectile.PreviousLocation"); }
	int& RandIntSeedField() { return *GetNativePointerField<int*>(this, "AShooterProjectile.RandIntSeed"); }
	FieldArray<bool, 6> bColorizeRegionsField() { return {this, "AShooterProjectile.bColorizeRegions"}; }
	__int16& CustomColorIDField() { return *GetNativePointerField<__int16*>(this, "AShooterProjectile.CustomColorID"); }
	FVector& LastVelocityField() { return *GetNativePointerField<FVector*>(this, "AShooterProjectile.LastVelocity"); }
	bool& bTornOffField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bTornOff"); }
	bool& bForceIgnoreBlockingHitClassesField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bForceIgnoreBlockingHitClasses"); }

	// Functions

	void AddMoveIgnoreActor(AActor * ignoreActor) { NativeCall<void, AActor *>(this, "AShooterProjectile.AddMoveIgnoreActor", ignoreActor); }
	void ApplyDamageScalar(float Scalar) { NativeCall<void, float>(this, "AShooterProjectile.ApplyDamageScalar", Scalar); }
	void ApplyExplosionDamageAndVFX(const FHitResult * Impact, bool bForceSpawnExplosionEmitter) { NativeCall<void, const FHitResult *, bool>(this, "AShooterProjectile.ApplyExplosionDamageAndVFX", Impact, bForceSpawnExplosionEmitter); }
	void BPApplyExplosionDamageAndVFX(const FHitResult * Impact, bool bForceSpawnExplosionEmitter) { NativeCall<void, const FHitResult *, bool>(this, "AShooterProjectile.BPApplyExplosionDamageAndVFX", Impact, bForceSpawnExplosionEmitter); }
	void BPDestroyLikeDamage() { NativeCall<void>(this, "AShooterProjectile.BPDestroyLikeDamage"); }
	void BPInitVelocity(FVector ShootDirection) { NativeCall<void, FVector>(this, "AShooterProjectile.BPInitVelocity", ShootDirection); }
	void BeginPlay() { NativeCall<void>(this, "AShooterProjectile.BeginPlay"); }
	void ClearHomingTarget() { NativeCall<void>(this, "AShooterProjectile.ClearHomingTarget"); }
	void ClientNetDestroy_Implementation() { NativeCall<void>(this, "AShooterProjectile.ClientNetDestroy_Implementation"); }
	void ClientNetExplode_Implementation(FHitResult HitResult) { NativeCall<void, FHitResult>(this, "AShooterProjectile.ClientNetExplode_Implementation", HitResult); }
	void ClientNetImpactFX_Implementation(FHitResult HitResult) { NativeCall<void, FHitResult>(this, "AShooterProjectile.ClientNetImpactFX_Implementation", HitResult); }
	void ClientOnImpact_Implementation(FVector ProjectileLocation, FRotator ProjectileRotation, FHitResult HitResult) { NativeCall<void, FVector, FRotator, FHitResult>(this, "AShooterProjectile.ClientOnImpact_Implementation", ProjectileLocation, ProjectileRotation, HitResult); }
	void Colorize() { NativeCall<void>(this, "AShooterProjectile.Colorize"); }
	void DeactivateProjectileEffects() { NativeCall<void>(this, "AShooterProjectile.DeactivateProjectileEffects"); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AShooterProjectile.Destroy", bNetForce, bShouldModifyLevel); }
	void Destroyed() { NativeCall<void>(this, "AShooterProjectile.Destroyed"); }
	void DisableAndDestroy(bool forceOnClient) { NativeCall<void, bool>(this, "AShooterProjectile.DisableAndDestroy", forceOnClient); }
	void ExplodeAtLocation(FVector AtLocation, FVector AtNormal) { NativeCall<void, FVector, FVector>(this, "AShooterProjectile.ExplodeAtLocation", AtLocation, AtNormal); }
	void Explode_Implementation(const FHitResult * Impact) { NativeCall<void, const FHitResult *>(this, "AShooterProjectile.Explode_Implementation", Impact); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterProjectile.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool IgnoreRadialDamageToActor(AActor * Victim) { return NativeCall<bool, AActor *>(this, "AShooterProjectile.IgnoreRadialDamageToActor", Victim); }
	void InitVelocity(FVector * ShootDirection) { NativeCall<void, FVector *>(this, "AShooterProjectile.InitVelocity", ShootDirection); }
	void InitVelocity(FVector * ShootDirection, float CustomSpeed) { NativeCall<void, FVector *, float>(this, "AShooterProjectile.InitVelocity", ShootDirection, CustomSpeed); }
	void LifeSpanExpired() { NativeCall<void>(this, "AShooterProjectile.LifeSpanExpired"); }
	void NetResetTransformAndVelocity_Implementation(FVector NewLocation, FRotator NewRotation, FVector NewVelocity, const TArray<AActor *> * NewMoveIgnoreActors) { NativeCall<void, FVector, FRotator, FVector, const TArray<AActor *> *>(this, "AShooterProjectile.NetResetTransformAndVelocity_Implementation", NewLocation, NewRotation, NewVelocity, NewMoveIgnoreActors); }
	void NetUpdateTimer() { NativeCall<void>(this, "AShooterProjectile.NetUpdateTimer"); }
	void OnImpact_Implementation(const FHitResult * HitResult, bool bFromReplication) { NativeCall<void, const FHitResult *, bool>(this, "AShooterProjectile.OnImpact_Implementation", HitResult, bFromReplication); }
	void OnProjectileStop(const FHitResult * HitResult) { NativeCall<void, const FHitResult *>(this, "AShooterProjectile.OnProjectileStop", HitResult); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "AShooterProjectile.OnRep_AttachmentReplication"); }
	void OnTouch(AActor * Actor) { NativeCall<void, AActor *>(this, "AShooterProjectile.OnTouch", Actor); }
	void PlayDestructionEffect(bool bOverrideHit, const FHitResult * HitResult) { NativeCall<void, bool, const FHitResult *>(this, "AShooterProjectile.PlayDestructionEffect", bOverrideHit, HitResult); }
	void PostNetReceiveVelocity(const FVector * NewVelocity) { NativeCall<void, const FVector *>(this, "AShooterProjectile.PostNetReceiveVelocity", NewVelocity); }
	void ProjectileBounced(const FHitResult * ImpactResult, const FVector * ImpactVelocity) { NativeCall<void, const FHitResult *, const FVector *>(this, "AShooterProjectile.ProjectileBounced", ImpactResult, ImpactVelocity); }
	void Reset() { NativeCall<void>(this, "AShooterProjectile.Reset"); }
	void RestartProjectileMovement() { NativeCall<void>(this, "AShooterProjectile.RestartProjectileMovement"); }
	void SpawnImpactEffect(const FHitResult * Impact) { NativeCall<void, const FHitResult *>(this, "AShooterProjectile.SpawnImpactEffect", Impact); }
	void SpawnProjectile(FVector SpawnPos, FVector_NetQuantizeNormal SpawnDir, TArray<AShooterProjectile *> * FragmentsSpawnedArray) { NativeCall<void, FVector, FVector_NetQuantizeNormal, TArray<AShooterProjectile *> *>(this, "AShooterProjectile.SpawnProjectile", SpawnPos, SpawnDir, FragmentsSpawnedArray); }
	void StopProjectileMovement() { NativeCall<void>(this, "AShooterProjectile.StopProjectileMovement"); }
	float TakeDamage(float DamageAmount, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "AShooterProjectile.TakeDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterProjectile.Tick", DeltaSeconds); }
	void UpdateTargetPhysics() { NativeCall<void>(this, "AShooterProjectile.UpdateTargetPhysics"); }
	void BPDamageScalarApplied(float Scalar) { NativeCall<void, float>(this, "AShooterProjectile.BPDamageScalarApplied", Scalar); }
	bool BPIgnoreRadialDamageVictim(AActor * Victim) { return NativeCall<bool, AActor *>(this, "AShooterProjectile.BPIgnoreRadialDamageVictim", Victim); }
	void BPInitializedVelocity(const FVector * InVelocity, float CustomSpeed) { NativeCall<void, const FVector *, float>(this, "AShooterProjectile.BPInitializedVelocity", InVelocity, CustomSpeed); }
	void BPProjectileBounced(const FHitResult * ImpactResult, const FVector * ImpactVelocity) { NativeCall<void, const FHitResult *, const FVector *>(this, "AShooterProjectile.BPProjectileBounced", ImpactResult, ImpactVelocity); }
	void BPSpawnedFragments(const TArray<AShooterProjectile *> * FragmentArray) { NativeCall<void, const TArray<AShooterProjectile *> *>(this, "AShooterProjectile.BPSpawnedFragments", FragmentArray); }
	bool BP_IgnoreProjectileImpact(FHitResult ImpactHit) { return NativeCall<bool, FHitResult>(this, "AShooterProjectile.BP_IgnoreProjectileImpact", ImpactHit); }
	void ClientNetDestroy() { NativeCall<void>(this, "AShooterProjectile.ClientNetDestroy"); }
	void ClientNetExplode(FHitResult HitResult) { NativeCall<void, FHitResult>(this, "AShooterProjectile.ClientNetExplode", HitResult); }
	void ClientNetImpactFX(FHitResult HitResult) { NativeCall<void, FHitResult>(this, "AShooterProjectile.ClientNetImpactFX", HitResult); }
	void ClientOnImpact(FVector ProjectileLocation, FRotator ProjectileRotation, FHitResult HitResult) { NativeCall<void, FVector, FRotator, FHitResult>(this, "AShooterProjectile.ClientOnImpact", ProjectileLocation, ProjectileRotation, HitResult); }
	void Explode(const FHitResult * Impact) { NativeCall<void, const FHitResult *>(this, "AShooterProjectile.Explode", Impact); }
	FName * GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim(FName * result) { return NativeCall<FName *, FName *>(this, "AShooterProjectile.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim", result); }
	void OnExplode(const FHitResult * Result) { NativeCall<void, const FHitResult *>(this, "AShooterProjectile.OnExplode", Result); }
	void OnImpact(const FHitResult * HitResult, bool bFromReplication) { NativeCall<void, const FHitResult *, bool>(this, "AShooterProjectile.OnImpact", HitResult, bFromReplication); }
	bool PreventExplosionEmitter(const FHitResult * Impact) { return NativeCall<bool, const FHitResult *>(this, "AShooterProjectile.PreventExplosionEmitter", Impact); }
};

