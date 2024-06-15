#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPWeaponDealDamage_Parms
{
	char __padding[0xa8L];
	FHitResult& ImpactField() { return *GetNativePointerField<FHitResult*>(this, "ShooterWeapon_eventBPWeaponDealDamage_Parms.Impact"); }
	FVector& ShootDirField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventBPWeaponDealDamage_Parms.ShootDir"); }
	int& DamageAmountField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_eventBPWeaponDealDamage_Parms.DamageAmount"); }
	float& ImpulseField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventBPWeaponDealDamage_Parms.Impulse"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_eventBPWeaponDealDamage_Parms.ReturnValue"); }

	// Functions

};

