#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_CropPlot_eventBPGetAdditionalGrowthMultiplier_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalStructureItemContainer_CropPlot_eventBPGetAdditionalGrowthMultiplier_Parms.ReturnValue"); }
};

