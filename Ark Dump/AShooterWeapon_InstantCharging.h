#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Instant.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct AShooterWeapon_InstantCharging : AShooterWeapon_Instant
{
	char __padding[0x10L];
	long double& ChargeStartTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_InstantCharging.ChargeStartTime"); }

	// Functions

	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_InstantCharging.FireWeapon"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterWeapon_InstantCharging.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void ServerSetCharging_Implementation(long double StartTime) { NativeCall<void, long double>(this, "AShooterWeapon_InstantCharging.ServerSetCharging_Implementation", StartTime); }
	void StartCharge() { NativeCall<void>(this, "AShooterWeapon_InstantCharging.StartCharge"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_InstantCharging.StartFire", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_InstantCharging.StopFire"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_InstantCharging.Tick", DeltaSeconds); }
	void ServerSetCharging(long double StartTime) { NativeCall<void, long double>(this, "AShooterWeapon_InstantCharging.ServerSetCharging", StartTime); }
};

