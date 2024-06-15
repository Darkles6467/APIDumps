#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetCheckBoxState_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ESlateCheckBoxState::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum ESlateCheckBoxState::Type>*>(this, "Widget_eventGetCheckBoxState_Parms.ReturnValue"); }
};

