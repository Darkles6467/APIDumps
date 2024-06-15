#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPHandleOnStopAltFire_Parms
{
	char __padding[0x1L];
	bool& bFromGamepadField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPHandleOnStopAltFire_Parms.bFromGamepad"); }
};

