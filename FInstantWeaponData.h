#pragma once

#include "BaseDeclarations.h"
struct FInstantWeaponData
{
	char __padding[0x30L];
	float& WeaponSpreadField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.WeaponSpread"); }
	float& TargetingSpreadModField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.TargetingSpreadMod"); }
	float& FinalWeaponSpreadMultiplierField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.FinalWeaponSpreadMultiplier"); }
	float& FiringSpreadIncrementField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.FiringSpreadIncrement"); }
	float& FiringSpreadMaxField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.FiringSpreadMax"); }
	float& WeaponRangeField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.WeaponRange"); }
	int& HitDamageField() { return *GetNativePointerField<int*>(this, "FInstantWeaponData.HitDamage"); }
	float& DamageImpulseField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.DamageImpulse"); }
	float& ClientSideHitLeewayField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.ClientSideHitLeeway"); }
	float& AllowedViewDotHitDirField() { return *GetNativePointerField<float*>(this, "FInstantWeaponData.AllowedViewDotHitDir"); }

	// Functions

};

