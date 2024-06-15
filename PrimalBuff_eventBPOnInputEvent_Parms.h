#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOnInputEvent_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EPrimalCharacterInputType::Type>& inputTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterInputType::Type>*>(this, "PrimalBuff_eventBPOnInputEvent_Parms.inputType"); }
};

