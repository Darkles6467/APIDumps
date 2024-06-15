#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Projectile_eventServerFireProjectileEx_Parms
{
	char __padding[0x20L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Projectile_eventServerFireProjectileEx_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ShooterWeapon_Projectile_eventServerFireProjectileEx_Parms.ShootDir"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_Projectile_eventServerFireProjectileEx_Parms.Speed"); }
	int& RandomSeedField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_Projectile_eventServerFireProjectileEx_Parms.RandomSeed"); }
};

