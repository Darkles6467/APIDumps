#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventStartCompanionEvent_Parms
{
	char __padding[0x58L];
	FCompanionEventData& WithEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "PrimalBuff_Companion_eventStartCompanionEvent_Parms.WithEventData"); }
};

