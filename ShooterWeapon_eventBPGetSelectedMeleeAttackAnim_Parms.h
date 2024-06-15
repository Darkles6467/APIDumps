#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPGetSelectedMeleeAttackAnim_Parms
{
	char __padding[0x10L];
	FWeaponAnim& ReturnValueField() { return *GetNativePointerField<FWeaponAnim*>(this, "ShooterWeapon_eventBPGetSelectedMeleeAttackAnim_Parms.ReturnValue"); }
};

