#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventSimulateInstantHit_Parms
{
	char __padding[0x20L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventSimulateInstantHit_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ShooterWeapon_Instant_eventSimulateInstantHit_Parms.ShootDir"); }
	bool& bForceOnLocalField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Instant_eventSimulateInstantHit_Parms.bForceOnLocal"); }
	int& ShotIndexField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_Instant_eventSimulateInstantHit_Parms.ShotIndex"); }
};

