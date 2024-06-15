#pragma once

#include "BaseDeclarations.h"
struct FPropertyDataOut
{
	char __padding[0x10L];
	int& FinalOffsetField() { return *GetNativePointerField<int*>(this, "FPropertyDataOut.FinalOffset"); }
	bool& bIsDynamicField() { return *GetNativePointerField<bool*>(this, "FPropertyDataOut.bIsDynamic"); }
};

