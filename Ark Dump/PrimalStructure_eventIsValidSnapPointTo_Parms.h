#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventIsValidSnapPointTo_Parms
{
	char __padding[0x10L];
	int& MySnapPointToIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventIsValidSnapPointTo_Parms.MySnapPointToIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventIsValidSnapPointTo_Parms.ReturnValue"); }
};

