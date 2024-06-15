#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventBPIgnoreRadialDamageVictim_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterProjectile_eventBPIgnoreRadialDamageVictim_Parms.ReturnValue"); }
};

