#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventServer_SetGrappleState_Parms
{
	char __padding[0x2L];
	char& NewGrappleStateField() { return *GetNativePointerField<char*>(this, "PrimalBuff_Grappled_eventServer_SetGrappleState_Parms.NewGrappleState"); }
	bool& bForceUpdateField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventServer_SetGrappleState_Parms.bForceUpdate"); }
};

