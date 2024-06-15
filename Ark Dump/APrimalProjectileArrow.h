#pragma once

#include "BaseDeclarations.h"
#include "AShooterProjectile.h"

struct APrimalProjectileArrow : AShooterProjectile
{
	char __padding[0x28L];
	float& PickUpRadiusField() { return *GetNativePointerField<float*>(this, "APrimalProjectileArrow.PickUpRadius"); }
	int& PickUpQuantityField() { return *GetNativePointerField<int*>(this, "APrimalProjectileArrow.PickUpQuantity"); }
	float& PercentChanceToBreakOnImpactField() { return *GetNativePointerField<float*>(this, "APrimalProjectileArrow.PercentChanceToBreakOnImpact"); }

	// Functions

	void OnImpact_Implementation(const FHitResult * HitResult, bool bFromReplication) { NativeCall<void, const FHitResult *, bool>(this, "APrimalProjectileArrow.OnImpact_Implementation", HitResult, bFromReplication); }
	void PickUpCheck_Implementation() { NativeCall<void>(this, "APrimalProjectileArrow.PickUpCheck_Implementation"); }
	void PickedUp_Implementation(AShooterCharacter * ByCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalProjectileArrow.PickedUp_Implementation", ByCharacter); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileArrow.BeginPlay"); }
	void PickUpCheck() { NativeCall<void>(this, "APrimalProjectileArrow.PickUpCheck"); }
	void PickedUp(AShooterCharacter * ByCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalProjectileArrow.PickedUp", ByCharacter); }
};

