#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveAnyDamage_Parms
{
	char __padding[0x20L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "Actor_eventReceiveAnyDamage_Parms.Damage"); }
};

