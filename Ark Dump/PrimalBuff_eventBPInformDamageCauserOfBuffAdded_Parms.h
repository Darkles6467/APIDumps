#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPInformDamageCauserOfBuffAdded_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPInformDamageCauserOfBuffAdded_Parms.ReturnValue"); }
};

