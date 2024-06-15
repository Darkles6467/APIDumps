#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventDinoFireProjectileEx_Parms
{
	char __padding[0x38L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.ShootDir"); }
	bool& bScaleProjDamageByDinoDamageField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.bScaleProjDamageByDinoDamage"); }
	bool& bAddDinoVelocityToProjectileField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.bAddDinoVelocityToProjectile"); }
	float& OverrideInitialSpeedField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.OverrideInitialSpeed"); }
	float& OverrideMaxSpeedField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.OverrideMaxSpeed"); }
	float& ExtraDirectDamageMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.ExtraDirectDamageMultiplier"); }
	float& ExtraExplosionDamageMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.ExtraExplosionDamageMultiplier"); }
	bool& spawnOnOwningClientField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventDinoFireProjectileEx_Parms.spawnOnOwningClient"); }
};

