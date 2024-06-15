#pragma once

#include "BaseDeclarations.h"
struct PrimalHarvestingComponent_eventBPRecieveComponentDamage_Parms
{
	char __padding[0x38L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "PrimalHarvestingComponent_eventBPRecieveComponentDamage_Parms.Damage"); }
};

