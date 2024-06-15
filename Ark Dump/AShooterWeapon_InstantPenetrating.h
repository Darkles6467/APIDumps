#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Instant.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FHitResult.h"

struct AShooterWeapon_InstantPenetrating : AShooterWeapon_Instant
{
	char __padding[0x68L];
	float& MaxPenetrationTraceDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.MaxPenetrationTraceDistance"); }
	float& PenaltyPerPenetrationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.PenaltyPerPenetration"); }
	float& PenaltyPerUnrealUnitField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.PenaltyPerUnrealUnit"); }
	bool& bUseBPStopPenetratingAtHitField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_InstantPenetrating.bUseBPStopPenetratingAtHit"); }

	// Functions

	int ComputeAmountOfHitsToProcess(const TArray<FHitResult> * UseImpacts, const TArray<FVector_NetQuantizeNormal> * UseShootDirs) { return NativeCall<int, const TArray<FHitResult> *, const TArray<FVector_NetQuantizeNormal> *>(this, "AShooterWeapon_InstantPenetrating.ComputeAmountOfHitsToProcess", UseImpacts, UseShootDirs); }
	FVector * FindExitHit(FVector * result, FHitResult * OutHit, const FHitResult * Hit, const FCollisionQueryParams * TraceParams) { return NativeCall<FVector *, FVector *, FHitResult *, const FHitResult *, const FCollisionQueryParams *>(this, "AShooterWeapon_InstantPenetrating.FindExitHit", result, OutHit, Hit, TraceParams); }
	bool IsValidShootDirForImpact(const FHitResult * impact, const FVector_NetQuantizeNormal * shootDir) { return NativeCall<bool, const FHitResult *, const FVector_NetQuantizeNormal *>(this, "AShooterWeapon_InstantPenetrating.IsValidShootDirForImpact", impact, shootDir); }
	int PassiveUseAmmo(int Amount) { return NativeCall<int, int>(this, "AShooterWeapon_InstantPenetrating.PassiveUseAmmo", Amount); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AShooterWeapon_InstantPenetrating.Serialize", Ar); }
	bool ShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "AShooterWeapon_InstantPenetrating.ShouldDealDamage", TestActor); }
	void WeaponPenetrationTrace(const FVector * StartTrace, const FVector * EndTrace, bool FilterVisuals, bool bDebugDraw, float DebugDrawDuration, TArray<FHitResult> * OutHitResults, TArray<bool> * OutIsEntryHit, float * OutMaxDistance) { NativeCall<void, const FVector *, const FVector *, bool, bool, float, TArray<FHitResult> *, TArray<bool> *, float *>(this, "AShooterWeapon_InstantPenetrating.WeaponPenetrationTrace", StartTrace, EndTrace, FilterVisuals, bDebugDraw, DebugDrawDuration, OutHitResults, OutIsEntryHit, OutMaxDistance); }
	float WeaponTraceForHits(TArray<FHitResult> * OutHitResults, TArray<bool> * OutIsEntryHit, const FVector * StartTrace, const FVector * EndTrace, bool FilterVisuals) { return NativeCall<float, TArray<FHitResult> *, TArray<bool> *, const FVector *, const FVector *, bool>(this, "AShooterWeapon_InstantPenetrating.WeaponTraceForHits", OutHitResults, OutIsEntryHit, StartTrace, EndTrace, FilterVisuals); }
	bool BPStopPenetratingAtHit(const FHitResult * CurrentHit, bool bIsEntryHit, float CurrentDistance, float CurrentMaxDistance) { return NativeCall<bool, const FHitResult *, bool, float, float>(this, "AShooterWeapon_InstantPenetrating.BPStopPenetratingAtHit", CurrentHit, bIsEntryHit, CurrentDistance, CurrentMaxDistance); }
};

