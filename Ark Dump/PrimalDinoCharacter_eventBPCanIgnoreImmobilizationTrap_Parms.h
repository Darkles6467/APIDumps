#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCanIgnoreImmobilizationTrap_Parms
{
	char __padding[0x10L];
	bool& bForceTriggerField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanIgnoreImmobilizationTrap_Parms.bForceTrigger"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanIgnoreImmobilizationTrap_Parms.ReturnValue"); }

	// Functions

};

