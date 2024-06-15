#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventGetBuffType_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalBuff_eventGetBuffType_Parms.ReturnValue"); }
};

