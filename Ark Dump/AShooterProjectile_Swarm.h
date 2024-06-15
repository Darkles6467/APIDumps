#pragma once

#include "BaseDeclarations.h"
#include "AShooterProjectile.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBoid.h"

struct AShooterProjectile_Swarm : AShooterProjectile
{
	char __padding[0x1c0L];
	int& SwarmSizeField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.SwarmSize"); }
	int& SwarmLeaderCountField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.SwarmLeaderCount"); }
	float& BoidCollisionRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidCollisionRadius"); }
	FBoidBehavior& SwarmBehaviorField() { return *GetNativePointerField<FBoidBehavior*>(this, "AShooterProjectile_Swarm.SwarmBehavior"); }
	float& DynamicAvoidanceDurationField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.DynamicAvoidanceDuration"); }
	FFlockPersistentData& SwarmPersistentDataField() { return *GetNativePointerField<FFlockPersistentData*>(this, "AShooterProjectile_Swarm.SwarmPersistentData"); }
	UParticleSystem * SwarmParticleSystemField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterProjectile_Swarm.SwarmParticleSystem"); }
	FName& SwarmOpacityParticleParamNameField() { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Swarm.SwarmOpacityParticleParamName"); }
	bool& bFadeOutSwarmOverProjectileLifeField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bFadeOutSwarmOverProjectileLife"); }
	float& SwarmOpacityFadeTimeOnBoidImpactField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmOpacityFadeTimeOnBoidImpact"); }
	float& LifespanAfterImpactField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.LifespanAfterImpact"); }
	float& SwarmDelayedStartTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmDelayedStartTime"); }
	float& BoidSpawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidSpawnInterval"); }
	float& BoidInitialFollowProjectileTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidInitialFollowProjectileTime"); }
	float& BoidInitialDisableCollisionTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidInitialDisableCollisionTime"); }
	float& SwarmLifetimeAfterPrimaryProjectileDestructionField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmLifetimeAfterPrimaryProjectileDestruction"); }
	float& SwarmSpawnRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmSpawnRadius"); }
	FVector2D& SwarmInitialSpeedRangeField() { return *GetNativePointerField<FVector2D*>(this, "AShooterProjectile_Swarm.SwarmInitialSpeedRange"); }
	FVector2D& SwarmMaxSpeedRangeField() { return *GetNativePointerField<FVector2D*>(this, "AShooterProjectile_Swarm.SwarmMaxSpeedRange"); }
	FVector2D& SwarmMaxForceRangeField() { return *GetNativePointerField<FVector2D*>(this, "AShooterProjectile_Swarm.SwarmMaxForceRange"); }
	FVector2D& SwarmTurnRateRangeField() { return *GetNativePointerField<FVector2D*>(this, "AShooterProjectile_Swarm.SwarmTurnRateRange"); }
	float& SwarmTargetRadiusField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmTargetRadius"); }
	float& SwarmTargetHelixSpeedField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmTargetHelixSpeed"); }
	TArray<FBoid>& SwarmDataField() { return *GetNativePointerField<TArray<FBoid>*>(this, "AShooterProjectile_Swarm.SwarmData"); }
	TArray<double>& BoidSpawnTimesField() { return *GetNativePointerField<TArray<double>*>(this, "AShooterProjectile_Swarm.BoidSpawnTimes"); }
	TArray<double>& BoidExplodeTimesField() { return *GetNativePointerField<TArray<double>*>(this, "AShooterProjectile_Swarm.BoidExplodeTimes"); }
	TArray<int>& FlockingWhitelistField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterProjectile_Swarm.FlockingWhitelist"); }
	bool& bUseCrazinessMultiplierField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bUseCrazinessMultiplier"); }
	float& CrazinessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.CrazinessMultiplier"); }
	bool& bUseBPGetBoidSpawnLocationAndVelocityField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bUseBPGetBoidSpawnLocationAndVelocity"); }
	FProjectileArc& LaunchArcField() { return *GetNativePointerField<FProjectileArc*>(this, "AShooterProjectile_Swarm.LaunchArc"); }
	long double& ProjectileSpawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile_Swarm.ProjectileSpawnTime"); }
	float& ProjectilePeakTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.ProjectilePeakTime"); }
	float& ProjectileImpactTimeField() { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.ProjectileImpactTime"); }
	bool& bPrimaryProjectileDestroyedField() { return *GetNativePointerField<bool*>(this, "AShooterProjectile_Swarm.bPrimaryProjectileDestroyed"); }
	long double& PrimaryProjectileDestroyTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile_Swarm.PrimaryProjectileDestroyTime"); }
	FVector& PrimaryProjectileImpactLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterProjectile_Swarm.PrimaryProjectileImpactLocation"); }
	int& NextBoidToSpawnField() { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.NextBoidToSpawn"); }
	long double& LastBoidSpawnTimeField() { return *GetNativePointerField<long double*>(this, "AShooterProjectile_Swarm.LastBoidSpawnTime"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AShooterProjectile_Swarm.BeginPlay"); }
	void DelayedSpawnBoids() { NativeCall<void>(this, "AShooterProjectile_Swarm.DelayedSpawnBoids"); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AShooterProjectile_Swarm.Destroy", bNetForce, bShouldModifyLevel); }
	void DoSwarmSync() { NativeCall<void>(this, "AShooterProjectile_Swarm.DoSwarmSync"); }
	int GetNumberOfBoidsInFlight() { return NativeCall<int>(this, "AShooterProjectile_Swarm.GetNumberOfBoidsInFlight"); }
	void MultiPrimaryProjectileDestroyed_Implementation(FVector ImpactLocation, long double DestroyNetworkTime) { NativeCall<void, FVector, long double>(this, "AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed_Implementation", ImpactLocation, DestroyNetworkTime); }
	void MultiSyncSwarm_Implementation(const TArray<FBoid> * ServerSwarmData) { NativeCall<void, const TArray<FBoid> *>(this, "AShooterProjectile_Swarm.MultiSyncSwarm_Implementation", ServerSwarmData); }
	void SpawnSwarm() { NativeCall<void>(this, "AShooterProjectile_Swarm.SpawnSwarm"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterProjectile_Swarm.Tick", DeltaSeconds); }
	float TimeSinceProjectileSpawn() { return NativeCall<float>(this, "AShooterProjectile_Swarm.TimeSinceProjectileSpawn"); }
	void BPGetBoidSpawnLocationAndVelocity(int BoidIndex, const FBoid * BoidData, FVector * SpawnLocation, FVector * SpawnVelocity) { NativeCall<void, int, const FBoid *, FVector *, FVector *>(this, "AShooterProjectile_Swarm.BPGetBoidSpawnLocationAndVelocity", BoidIndex, BoidData, SpawnLocation, SpawnVelocity); }
	void BPOnBoidExplode(int BoidIndex, UParticleSystemComponent * BoidParticles, const FHitResult * Hit) { NativeCall<void, int, UParticleSystemComponent *, const FHitResult *>(this, "AShooterProjectile_Swarm.BPOnBoidExplode", BoidIndex, BoidParticles, Hit); }
	void MultiPrimaryProjectileDestroyed(FVector ImpactLocation, long double DestroyNetworkTime) { NativeCall<void, FVector, long double>(this, "AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed", ImpactLocation, DestroyNetworkTime); }
	void MultiSyncSwarm(const TArray<FBoid> * ServerSwarmData) { NativeCall<void, const TArray<FBoid> *>(this, "AShooterProjectile_Swarm.MultiSyncSwarm", ServerSwarmData); }
};

