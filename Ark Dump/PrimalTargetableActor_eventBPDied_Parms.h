#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventBPDied_Parms
{
	char __padding[0x38L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventBPDied_Parms.KillingDamage"); }
};

