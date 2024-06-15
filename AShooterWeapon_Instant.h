#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon.h"
#include "FHitResult.h"

struct AShooterWeapon_Instant : AShooterWeapon
{
	char __padding[0x40L];
	UParticleSystem * TrailFXField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon_Instant.TrailFX"); }
	UParticleSystem * TrailFX_LocalField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon_Instant.TrailFX_Local"); }
	FName& TrailTargetParamField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Instant.TrailTargetParam"); }
	float& OriginCheckDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Instant.OriginCheckDistance"); }
	TArray<FWeaponCachedInstantShot>& CachedShotsField() { return *GetNativePointerField<TArray<FWeaponCachedInstantShot>*>(this, "AShooterWeapon_Instant.CachedShots"); }
	int& NumTracesPerShotField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Instant.NumTracesPerShot"); }
	int& NumTracesPerShotTimesField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Instant.NumTracesPerShotTimes"); }

	// Functions

	void CheckRefireTimer() { NativeCall<void>(this, "AShooterWeapon_Instant.CheckRefireTimer"); }
	FVector * ClampTrailEndLocation(FVector * result, const FVector * Start, const FVector * End, const FVector * ShootDir, float WeaponMaxDistance) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, const FVector *, float>(this, "AShooterWeapon_Instant.ClampTrailEndLocation", result, Start, End, ShootDir, WeaponMaxDistance); }
	int ComputeAmountOfHitsToProcess(const TArray<FHitResult> * UseImpacts, const TArray<FVector_NetQuantizeNormal> * UseShootDirs) { return NativeCall<int, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_Instant.ComputeAmountOfHitsToProcess", UseImpacts, UseShootDirs); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Instant.FireWeapon"); }
	float GetCurrentSpread() { return NativeCall<float>(this, "AShooterWeapon_Instant.GetCurrentSpread"); }
	FVector * GetFireLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon_Instant.GetFireLocation", result); }
	void GetFireLocationAndDirection(FVector * OutLocation, FVector * OutDirection) { NativeCall<void, FVector *, FVector *>(this, "AShooterWeapon_Instant.GetFireLocationAndDirection", OutLocation, OutDirection); }
	void NetSimulateForceShot_Implementation(FVector ShotOrigin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon_Instant.NetSimulateForceShot_Implementation", ShotOrigin, ShootDir); }
	void OnBurstFinished() { NativeCall<void>(this, "AShooterWeapon_Instant.OnBurstFinished"); }
	void ProcessInstantHit_Confirmed(const FHitResult * Impact, const FVector * Origin, const FVector * ShootDir) { NativeCall<void, const FHitResult *, const FVector *, const FVector *>(this, "AShooterWeapon_Instant.ProcessInstantHit_Confirmed", Impact, Origin, ShootDir); }
	void ServerForceShot(const FHitResult * Impact, const FVector * StartShotLoc, const FVector * EndShotLoc) { NativeCall<void, const FHitResult *, const FVector *, const FVector *>(this, "AShooterWeapon_Instant.ServerForceShot", Impact, StartShotLoc, EndShotLoc); }
	void ServerNotifyShotOrigin_Implementation(FVector Origin, const TArray<FHitResult> * Impacts, const TArray<FVector_NetQuantizeNormal> * ShootDirs) { NativeCall<void, FVector, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_Instant.ServerNotifyShotOrigin_Implementation", Origin, Impacts, ShootDirs); }
	void ServerNotifyShot_Implementation(const TArray<FHitResult> * Impacts, const TArray<FVector_NetQuantizeNormal> * ShootDirs) { NativeCall<void, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_Instant.ServerNotifyShot_Implementation", Impacts, ShootDirs); }
	void ServerProcessShotsInternal(const TArray<FHitResult> * Impacts, const TArray<FVector_NetQuantizeNormal> * ShootDirs) { NativeCall<void, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_Instant.ServerProcessShotsInternal", Impacts, ShootDirs); }
	void SimulateInstantHit_Implementation(FVector ShotOrigin, FVector_NetQuantizeNormal ShootDir, bool bForceOnLocal, int ShotIndex) { NativeCall<void, FVector, FVector_NetQuantizeNormal, bool, int>(this, "AShooterWeapon_Instant.SimulateInstantHit_Implementation", ShotOrigin, ShootDir, bForceOnLocal, ShotIndex); }
	void SpawnImpactEffects(const FHitResult * Impact, const FVector * ShootDir, bool bIsEntryHit, float WeaponMaxRange) { NativeCall<void, const FHitResult *, const FVector *, bool, float>(this, "AShooterWeapon_Instant.SpawnImpactEffects", Impact, ShootDir, bIsEntryHit, WeaponMaxRange); }
	void SpawnTrailEffect(const FVector * EndPoint, const FVector * StartPoint) { NativeCall<void, const FVector *, const FVector *>(this, "AShooterWeapon_Instant.SpawnTrailEffect", EndPoint, StartPoint); }
	float WeaponTraceForHits(TArray<FHitResult> * HitResults, TArray<bool> * IsEntryHit, const FVector * StartTrace, const FVector * EndTrace, bool FilterVisuals) { return NativeCall<float, TArray<FHitResult> *, TArray<bool> *, const FVector *, const FVector *, bool>(this, "AShooterWeapon_Instant.WeaponTraceForHits", HitResults, IsEntryHit, StartTrace, EndTrace, FilterVisuals); }
	float BPGetCurrentSpread() { return NativeCall<float>(this, "AShooterWeapon_Instant.BPGetCurrentSpread"); }
	void BPKillImpactEffects() { NativeCall<void>(this, "AShooterWeapon_Instant.BPKillImpactEffects"); }
	void BPPostSpawnTrailEffect(UParticleSystemComponent * TrailPSC, const FVector * StartPoint, const FVector * EndPoint) { NativeCall<void, UParticleSystemComponent *, const FVector *, const FVector *>(this, "AShooterWeapon_Instant.BPPostSpawnTrailEffect", TrailPSC, StartPoint, EndPoint); }
	void BPSpawnImpactEffects(const FHitResult * Impact, const FVector * ShootDir, bool bIsEntryHit, float WeaponMaxRange) { NativeCall<void, const FHitResult *, const FVector *, bool, float>(this, "AShooterWeapon_Instant.BPSpawnImpactEffects", Impact, ShootDir, bIsEntryHit, WeaponMaxRange); }
	void NetSimulateForceShot(FVector ShotOrigin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon_Instant.NetSimulateForceShot", ShotOrigin, ShootDir); }
	void ServerNotifyShot(const TArray<FHitResult> * Impacts, const TArray<FVector_NetQuantizeNormal> * ShootDirs) { NativeCall<void, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_Instant.ServerNotifyShot", Impacts, ShootDirs); }
	void ServerNotifyShotOrigin(FVector Origin, const TArray<FHitResult> * Impacts, const TArray<FVector_NetQuantizeNormal> * ShootDirs) { NativeCall<void, FVector, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_Instant.ServerNotifyShotOrigin", Origin, Impacts, ShootDirs); }
	void SimulateInstantHit(FVector Origin, FVector_NetQuantizeNormal ShootDir, bool bForceOnLocal, int ShotIndex) { NativeCall<void, FVector, FVector_NetQuantizeNormal, bool, int>(this, "AShooterWeapon_Instant.SimulateInstantHit", Origin, ShootDir, bForceOnLocal, ShotIndex); }
};

