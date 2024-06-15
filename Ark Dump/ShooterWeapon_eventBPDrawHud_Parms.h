#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPDrawHud_Parms
{
	char __padding[0x8L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "ShooterWeapon_eventBPDrawHud_Parms.HUD"); }
};

