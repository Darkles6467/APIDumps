#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPGetAmmoBoxReloadPercent_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalStructure_eventBPGetAmmoBoxReloadPercent_Parms.ReturnValue"); }
};

