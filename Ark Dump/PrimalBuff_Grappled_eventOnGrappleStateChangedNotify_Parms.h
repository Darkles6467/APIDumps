#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventOnGrappleStateChangedNotify_Parms
{
	char __padding[0x2L];
	char& NewGrappleStateField() { return *GetNativePointerField<char*>(this, "PrimalBuff_Grappled_eventOnGrappleStateChangedNotify_Parms.NewGrappleState"); }
	bool& bIsEarlyNotifyField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventOnGrappleStateChangedNotify_Parms.bIsEarlyNotify"); }
};

