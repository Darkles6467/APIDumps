#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventClientSpawnMeleeEffects_Parms
{
	char __padding[0x18L];
	FVector& ImpactField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventClientSpawnMeleeEffects_Parms.Impact"); }
	FVector& ShootDirField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventClientSpawnMeleeEffects_Parms.ShootDir"); }
};

