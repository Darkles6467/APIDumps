#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_FlameThrower_eventBPSpawnHarvestEffects_Parms
{
	char __padding[0x10L];
	TArray<FVector>& ImpactsField() { return *GetNativePointerField<TArray<FVector>*>(this, "ShooterWeapon_FlameThrower_eventBPSpawnHarvestEffects_Parms.Impacts"); }
};

