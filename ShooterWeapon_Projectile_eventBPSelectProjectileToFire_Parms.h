#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Projectile_eventBPSelectProjectileToFire_Parms
{
	char __padding[0x18L];
	USoundCue * FireSoundOverrideField() { return GetNativePointerField<USoundCue *>(this, "ShooterWeapon_Projectile_eventBPSelectProjectileToFire_Parms.FireSoundOverride"); }
	bool& bSpawnOnClientField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Projectile_eventBPSelectProjectileToFire_Parms.bSpawnOnClient"); }
	float& OverrideMaxSpeedField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_Projectile_eventBPSelectProjectileToFire_Parms.OverrideMaxSpeed"); }
};

