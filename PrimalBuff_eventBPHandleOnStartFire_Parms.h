#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPHandleOnStartFire_Parms
{
	char __padding[0x1L];
	bool& bFromGamepadField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPHandleOnStartFire_Parms.bFromGamepad"); }
};

