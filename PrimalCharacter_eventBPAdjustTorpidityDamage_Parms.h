#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPAdjustTorpidityDamage_Parms
{
	char __padding[0x18L];
	float& DesiredTorpidityDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPAdjustTorpidityDamage_Parms.DesiredTorpidityDamage"); }
	float& HealthDamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPAdjustTorpidityDamage_Parms.HealthDamageAmount"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPAdjustTorpidityDamage_Parms.ReturnValue"); }

	// Functions

};

