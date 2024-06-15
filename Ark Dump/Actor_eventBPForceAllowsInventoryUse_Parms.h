#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPForceAllowsInventoryUse_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPForceAllowsInventoryUse_Parms.ReturnValue"); }
};

