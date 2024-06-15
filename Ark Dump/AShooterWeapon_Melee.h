#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon.h"

struct AShooterWeapon_Melee : AShooterWeapon
{
	char __padding[0x8L];
	bool& bUseAltFireOnNormalFireField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Melee.bUseAltFireOnNormalFire"); }

	// Functions

	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Melee.FireWeapon"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Melee.StartFire", bFromGamepad); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Melee.StartSecondaryAction"); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_Melee.StopFire"); }
};

