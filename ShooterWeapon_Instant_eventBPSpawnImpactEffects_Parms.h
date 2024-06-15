#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventBPSpawnImpactEffects_Parms
{
	char __padding[0xa0L];
	FHitResult& ImpactField() { return *GetNativePointerField<FHitResult*>(this, "ShooterWeapon_Instant_eventBPSpawnImpactEffects_Parms.Impact"); }
	FVector& ShootDirField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventBPSpawnImpactEffects_Parms.ShootDir"); }
	bool& bIsEntryHitField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Instant_eventBPSpawnImpactEffects_Parms.bIsEntryHit"); }
	float& WeaponMaxRangeField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_Instant_eventBPSpawnImpactEffects_Parms.WeaponMaxRange"); }
};

