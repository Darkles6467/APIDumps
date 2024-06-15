#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventMulti_SyncGrappleTetherLength_Parms
{
	char __padding[0x4L];
	float& SyncedTetherLengthField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventMulti_SyncGrappleTetherLength_Parms.SyncedTetherLength"); }
};

