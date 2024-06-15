#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOverrideTargetingDesire_Parms
{
	char __padding[0x10L];
	float& ForTargetingDesireValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPOverrideTargetingDesire_Parms.ForTargetingDesireValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPOverrideTargetingDesire_Parms.ReturnValue"); }

	// Functions

};

