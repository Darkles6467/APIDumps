#pragma once

#include "BaseDeclarations.h"
struct FWeaponCachedInstantShot
{
	char __padding[0x20L];
	TArray<FHitResult>& ImpactsField() { return *GetNativePointerField<TArray<FHitResult>*>(this, "FWeaponCachedInstantShot.Impacts"); }
	TArray<FVector_NetQuantizeNormal>& ShootDirsField() { return *GetNativePointerField<TArray<FVector_NetQuantizeNormal>*>(this, "FWeaponCachedInstantShot.ShootDirs"); }

	// Functions

};

