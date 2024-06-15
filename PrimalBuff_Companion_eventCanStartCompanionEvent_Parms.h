#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventCanStartCompanionEvent_Parms
{
	char __padding[0x60L];
	FCompanionEventData& WithEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "PrimalBuff_Companion_eventCanStartCompanionEvent_Parms.WithEventData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventCanStartCompanionEvent_Parms.ReturnValue"); }

	// Functions

};

