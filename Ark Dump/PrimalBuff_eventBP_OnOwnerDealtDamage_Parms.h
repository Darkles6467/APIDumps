#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_OnOwnerDealtDamage_Parms
{
	char __padding[0x30L];
	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OnOwnerDealtDamage_Parms.DamageAmount"); }
};

