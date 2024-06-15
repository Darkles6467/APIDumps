#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOnLethalDamage_Parms
{
	char __padding[0x40L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOnLethalDamage_Parms.KillingDamage"); }
	bool& bPreventDeathField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOnLethalDamage_Parms.bPreventDeath"); }
};

