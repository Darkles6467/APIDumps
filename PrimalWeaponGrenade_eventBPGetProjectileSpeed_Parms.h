#pragma once

#include "BaseDeclarations.h"
struct PrimalWeaponGrenade_eventBPGetProjectileSpeed_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalWeaponGrenade_eventBPGetProjectileSpeed_Parms.ReturnValue"); }
};

