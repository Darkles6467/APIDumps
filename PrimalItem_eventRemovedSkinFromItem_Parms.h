#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventRemovedSkinFromItem_Parms
{
	char __padding[0x10L];
	bool& bIsFirstTimeField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventRemovedSkinFromItem_Parms.bIsFirstTime"); }
};

