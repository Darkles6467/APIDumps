#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventNetSimulateForceShot_Parms
{
	char __padding[0x18L];
	FVector& ShotOriginField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventNetSimulateForceShot_Parms.ShotOrigin"); }
	FVector& ShootDirField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventNetSimulateForceShot_Parms.ShootDir"); }
};

