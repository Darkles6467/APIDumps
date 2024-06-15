#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventMulti_SyncGrappleTetherLengths_Parms
{
	char __padding[0x10L];
	TArray<float>& SyncedTetherLengthsField() { return *GetNativePointerField<TArray<float>*>(this, "PrimalBuff_Grappled_eventMulti_SyncGrappleTetherLengths_Parms.SyncedTetherLengths"); }
};

