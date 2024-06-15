#pragma once

#include "BaseDeclarations.h"
#include "APrimalProjectileArrow.h"
#include "AShooterProjectile.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalProjectileBoomerang : APrimalProjectileArrow
{
	char __padding[0x88L];
	float& MaxDistanceToTravelField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.MaxDistanceToTravel"); }
	float& ReturnTimeToInstigatorField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnTimeToInstigator"); }
	float& ElapsedTimeToInstigatorField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ElapsedTimeToInstigator"); }
	float& SqrDesideredTravelDistanceField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.SqrDesideredTravelDistance"); }
	FVector& P0Field() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileBoomerang.P0"); }
	FVector& P1Field() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileBoomerang.P1"); }
	FVector& P2Field() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileBoomerang.P2"); }
	FVector& P3Field() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileBoomerang.P3"); }
	FVector& NextPointToReachField() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileBoomerang.NextPointToReach"); }
	FVector& StartPositionField() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileBoomerang.StartPosition"); }
	bool& bIsReturningToInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileBoomerang.bIsReturningToInstigator"); }
	bool& bIsFollowingInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileBoomerang.bIsFollowingInstigator"); }
	float& ReturnFirstPointTravelDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnFirstPointTravelDistanceMultiplier"); }
	float& ReturnSecondPointTravelDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnSecondPointTravelDistanceMultiplier"); }

	// Functions

	bool AddToHitHurtList(AActor * AnActor) { return NativeCall<bool, AActor *>(this, "APrimalProjectileBoomerang.AddToHitHurtList", AnActor); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileBoomerang.BeginPlay"); }
	void Explode_Implementation(const FHitResult * Impact) { NativeCall<void, const FHitResult *>(this, "APrimalProjectileBoomerang.Explode_Implementation", Impact); }
	void OnImpact_Implementation(const FHitResult * HitResult, bool bFromReplication) { NativeCall<void, const FHitResult *, bool>(this, "APrimalProjectileBoomerang.OnImpact_Implementation", HitResult, bFromReplication); }
	void PickUpCheck_Implementation() { NativeCall<void>(this, "APrimalProjectileBoomerang.PickUpCheck_Implementation"); }
	void PickedUp_Implementation(AShooterCharacter * ByCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalProjectileBoomerang.PickedUp_Implementation", ByCharacter); }
	void ReturnToOwner(bool bFollowInstigator) { NativeCall<void, bool>(this, "APrimalProjectileBoomerang.ReturnToOwner", bFollowInstigator); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileBoomerang.Tick", DeltaSeconds); }
};

