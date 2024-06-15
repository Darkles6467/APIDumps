#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventIsValidForSnappingFrom_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventIsValidForSnappingFrom_Parms.ReturnValue"); }
};

