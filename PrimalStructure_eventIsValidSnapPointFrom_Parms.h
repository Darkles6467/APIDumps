#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventIsValidSnapPointFrom_Parms
{
	char __padding[0x10L];
	int& MySnapPointFromIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventIsValidSnapPointFrom_Parms.MySnapPointFromIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventIsValidSnapPointFrom_Parms.ReturnValue"); }
};

