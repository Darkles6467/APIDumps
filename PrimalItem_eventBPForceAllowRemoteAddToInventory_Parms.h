#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPForceAllowRemoteAddToInventory_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPForceAllowRemoteAddToInventory_Parms.ReturnValue"); }
};

