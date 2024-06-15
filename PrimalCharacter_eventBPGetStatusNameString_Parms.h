#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetStatusNameString_Parms
{
	char __padding[0x18L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& ValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "PrimalCharacter_eventBPGetStatusNameString_Parms.ValueType"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalCharacter_eventBPGetStatusNameString_Parms.ReturnValue"); }
};

