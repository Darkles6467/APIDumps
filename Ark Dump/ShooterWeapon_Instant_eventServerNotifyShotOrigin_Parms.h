#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventServerNotifyShotOrigin_Parms
{
	char __padding[0x30L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Instant_eventServerNotifyShotOrigin_Parms.Origin"); }
	TArray<FHitResult>& ImpactsField() { return *GetNativePointerField<TArray<FHitResult>*>(this, "ShooterWeapon_Instant_eventServerNotifyShotOrigin_Parms.Impacts"); }
	TArray<FVector_NetQuantizeNormal>& ShootDirsField() { return *GetNativePointerField<TArray<FVector_NetQuantizeNormal>*>(this, "ShooterWeapon_Instant_eventServerNotifyShotOrigin_Parms.ShootDirs"); }

	// Functions

};

