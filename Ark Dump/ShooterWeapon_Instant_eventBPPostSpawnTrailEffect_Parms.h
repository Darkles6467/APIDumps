#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventBPPostSpawnTrailEffect_Parms
{
	char __padding[0x20L];
	FVector& StartPointField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventBPPostSpawnTrailEffect_Parms.StartPoint"); }
	FVector& EndPointField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventBPPostSpawnTrailEffect_Parms.EndPoint"); }
};

