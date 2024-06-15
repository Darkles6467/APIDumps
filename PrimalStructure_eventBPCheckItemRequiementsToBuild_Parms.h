#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPCheckItemRequiementsToBuild_Parms
{
	char __padding[0x10L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPCheckItemRequiementsToBuild_Parms.ReturnValue"); }
};

