#pragma once

#include "BaseDeclarations.h"
#include "APrimalProjectileArrow.h"
#include "AShooterProjectile.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalProjectileNetGun : APrimalProjectileArrow
{
	char __padding[0xf0L];
	float& MaxDinoMassToInmovilizeField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.MaxDinoMassToInmovilize"); }
	TArray<FManagedBoneSetup>& ManagedBonesField() { return *GetNativePointerField<TArray<FManagedBoneSetup>*>(this, "APrimalProjectileNetGun.ManagedBones"); }
	float& OnInpactMaxTraceDistanceField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.OnInpactMaxTraceDistance"); }
	float& DissolveTimeField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.DissolveTime"); }
	bool& bStartDissolveFXField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileNetGun.bStartDissolveFX"); }
	float& DissolveTimeFXField() { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.DissolveTimeFX"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileNetGun.BeginPlay"); }
	void CalculateBonePositions() { NativeCall<void>(this, "APrimalProjectileNetGun.CalculateBonePositions"); }
	FVector * GetManagedBoneLocation(FVector * result, FName InBoneName) { return NativeCall<FVector *, FVector *, FName>(this, "APrimalProjectileNetGun.GetManagedBoneLocation", result, InBoneName); }
	void GetManagedBoneLocationsAndRotations(TArray<FVector> * Locations, TArray<FRotator> * Rotations) { NativeCall<void, TArray<FVector> *, TArray<FRotator> *>(this, "APrimalProjectileNetGun.GetManagedBoneLocationsAndRotations", Locations, Rotations); }
	FRotator * GetManagedBoneRotation(FRotator * result, FName InBoneName) { return NativeCall<FRotator *, FRotator *, FName>(this, "APrimalProjectileNetGun.GetManagedBoneRotation", result, InBoneName); }
	void OnImpact_Implementation(const FHitResult * HitResult, bool bFromReplication) { NativeCall<void, const FHitResult *, bool>(this, "APrimalProjectileNetGun.OnImpact_Implementation", HitResult, bFromReplication); }
	void StartDissolveFX() { NativeCall<void>(this, "APrimalProjectileNetGun.StartDissolveFX"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileNetGun.Tick", DeltaSeconds); }
};

