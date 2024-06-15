#pragma once

#include "BaseDeclarations.h"
struct ContextMenuItem_eventOnButtonClickedEventObjectCustom_Parms
{
	char __padding[0x10L];
	FName& SelectedOptionField() { return *GetNativePointerField<FName*>(this, "ContextMenuItem_eventOnButtonClickedEventObjectCustom_Parms.SelectedOption"); }
};

