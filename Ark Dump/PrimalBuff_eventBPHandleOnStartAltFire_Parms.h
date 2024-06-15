#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPHandleOnStartAltFire_Parms
{
	char __padding[0x1L];
	bool& bFromGamepadField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPHandleOnStartAltFire_Parms.bFromGamepad"); }
};

