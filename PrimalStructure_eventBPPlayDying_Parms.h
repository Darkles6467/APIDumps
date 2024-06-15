#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPlayDying_Parms
{
	char __padding[0x38L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalStructure_eventBPPlayDying_Parms.KillingDamage"); }
};

