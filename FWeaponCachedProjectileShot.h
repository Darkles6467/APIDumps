#pragma once

#include "BaseDeclarations.h"
struct FWeaponCachedProjectileShot
{
	char __padding[0x20L];
	TArray<FVector>& OriginsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FWeaponCachedProjectileShot.Origins"); }
	TArray<FVector_NetQuantizeNormal>& ShootDirsField() { return *GetNativePointerField<TArray<FVector_NetQuantizeNormal>*>(this, "FWeaponCachedProjectileShot.ShootDirs"); }

	// Functions

};

