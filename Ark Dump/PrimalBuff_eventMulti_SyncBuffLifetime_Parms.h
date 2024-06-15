#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventMulti_SyncBuffLifetime_Parms
{
	char __padding[0x4L];
	float& NewDeactivateAfterTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventMulti_SyncBuffLifetime_Parms.NewDeactivateAfterTime"); }
};

