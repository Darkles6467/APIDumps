#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventNotifyDamage_Parms
{
	char __padding[0x20L];
	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventNotifyDamage_Parms.DamageAmount"); }
};

