#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventInstigatorMovementMode_Parms
{
	char __padding[0x3L];
	TEnumAsByte<enum EMovementMode>& NewMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalBuff_eventBPPreventInstigatorMovementMode_Parms.NewMovementMode"); }
	char& NewCustomModeField() { return *GetNativePointerField<char*>(this, "PrimalBuff_eventBPPreventInstigatorMovementMode_Parms.NewCustomMode"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventInstigatorMovementMode_Parms.ReturnValue"); }

	// Functions

};

