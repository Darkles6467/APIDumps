#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPPreventUseOntoItem_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPPreventUseOntoItem_Parms.ReturnValue"); }
};

