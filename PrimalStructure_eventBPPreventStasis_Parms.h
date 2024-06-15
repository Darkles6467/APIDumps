#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventStasis_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventStasis_Parms.ReturnValue"); }
};

