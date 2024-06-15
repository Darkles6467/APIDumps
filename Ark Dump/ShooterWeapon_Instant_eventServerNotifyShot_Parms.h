#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventServerNotifyShot_Parms
{
	char __padding[0x20L];
	TArray<FHitResult>& ImpactsField() { return *GetNativePointerField<TArray<FHitResult>*>(this, "ShooterWeapon_Instant_eventServerNotifyShot_Parms.Impacts"); }
	TArray<FVector_NetQuantizeNormal>& ShootDirsField() { return *GetNativePointerField<TArray<FVector_NetQuantizeNormal>*>(this, "ShooterWeapon_Instant_eventServerNotifyShot_Parms.ShootDirs"); }

	// Functions

};

