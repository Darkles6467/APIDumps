#pragma once

#include "BaseDeclarations.h"
struct FProjectileWeaponData
{
	char __padding[0x28L];
	float& ProjectileLifeField() { return *GetNativePointerField<float*>(this, "FProjectileWeaponData.ProjectileLife"); }
	int& ExplosionDamageField() { return *GetNativePointerField<int*>(this, "FProjectileWeaponData.ExplosionDamage"); }
	float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "FProjectileWeaponData.ExplosionImpulse"); }
	int& DirectDamageField() { return *GetNativePointerField<int*>(this, "FProjectileWeaponData.DirectDamage"); }
	float& DirectImpulseField() { return *GetNativePointerField<float*>(this, "FProjectileWeaponData.DirectImpulse"); }
	float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "FProjectileWeaponData.ExplosionRadius"); }

	// Functions

};

