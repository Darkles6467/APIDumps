#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPCheckPreventInput_Parms
{
	char __padding[0x2L];
	TEnumAsByte<enum EPrimalCharacterInputType::Type>& inputTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterInputType::Type>*>(this, "PrimalBuff_eventBPCheckPreventInput_Parms.inputType"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPCheckPreventInput_Parms.ReturnValue"); }
};

