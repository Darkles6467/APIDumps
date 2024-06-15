#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPSpawnMeleeEffects_Parms
{
	char __padding[0x18L];
	FVector& ImpactField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventBPSpawnMeleeEffects_Parms.Impact"); }
	FVector& ShootDirField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_eventBPSpawnMeleeEffects_Parms.ShootDir"); }
};

