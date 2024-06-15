#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPPreventInputType_Parms
{
	char __padding[0x2L];
	TEnumAsByte<enum EPrimalCharacterInputType::Type>& inputTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterInputType::Type>*>(this, "PrimalCharacter_eventBPPreventInputType_Parms.inputType"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPPreventInputType_Parms.ReturnValue"); }

	// Functions

};

