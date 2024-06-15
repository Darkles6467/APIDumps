#pragma once

#include "BaseDeclarations.h"
struct ContextMenuItem_eventGetSubmenuContentCustom_Parms
{
	char __padding[0x18L];
	FName& SelectedOptionField() { return *GetNativePointerField<FName*>(this, "ContextMenuItem_eventGetSubmenuContentCustom_Parms.SelectedOption"); }
};

