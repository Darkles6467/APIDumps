#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventNetSetMovementModeSimulatedInternal_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EMovementMode>& NewMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalCharacter_eventNetSetMovementModeSimulatedInternal_Parms.NewMovementMode"); }
};

