#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPrimalCharacterInputNotify_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EPrimalCharacterInputType::Type>& inputTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterInputType::Type>*>(this, "PrimalCharacter_eventPrimalCharacterInputNotify_Parms.inputType"); }
};

