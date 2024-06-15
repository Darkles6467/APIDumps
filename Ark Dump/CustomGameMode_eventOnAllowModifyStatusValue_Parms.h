#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAllowModifyStatusValue_Parms
{
	char __padding[0x18L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& valueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "CustomGameMode_eventOnAllowModifyStatusValue_Parms.valueType"); }
	float& AmountField() { return *GetNativePointerField<float*>(this, "CustomGameMode_eventOnAllowModifyStatusValue_Parms.Amount"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnAllowModifyStatusValue_Parms.ReturnValue"); }
};

