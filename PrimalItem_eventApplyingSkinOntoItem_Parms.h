#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventApplyingSkinOntoItem_Parms
{
	char __padding[0x10L];
	bool& bIsFirstTimeField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventApplyingSkinOntoItem_Parms.bIsFirstTime"); }
};

