#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPrimalCharacterNotifyDamage_Parms
{
	char __padding[0x38L];
	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPrimalCharacterNotifyDamage_Parms.DamageAmount"); }
};

