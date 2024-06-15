#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerFireBallistaProjectile_Parms
{
	char __padding[0x18L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventServerFireBallistaProjectile_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ShooterCharacter_eventServerFireBallistaProjectile_Parms.ShootDir"); }
};

