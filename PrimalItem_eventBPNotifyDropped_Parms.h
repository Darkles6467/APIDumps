#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPNotifyDropped_Parms
{
	char __padding[0x10L];
	bool& bWasThrownField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPNotifyDropped_Parms.bWasThrown"); }
};

