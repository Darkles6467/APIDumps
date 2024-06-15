#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreSerializeForInstigator_Parms
{
	char __padding[0x1L];
	bool& bBeginningSerializeField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreSerializeForInstigator_Parms.bBeginningSerialize"); }
};

