#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Activated_eventServerPreFire_Parms
{
	char __padding[0x18L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Activated_eventServerPreFire_Parms.Origin"); }
	FVector& ShootDirField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Activated_eventServerPreFire_Parms.ShootDir"); }
};

