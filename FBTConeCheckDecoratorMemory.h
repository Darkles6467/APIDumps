#pragma once

#include "BaseDeclarations.h"
struct FBTConeCheckDecoratorMemory
{
	char __padding[0x1L];
	bool& bLastRawResultField() { return *GetNativePointerField<bool*>(this, "FBTConeCheckDecoratorMemory.bLastRawResult"); }
};

