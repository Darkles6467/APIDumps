#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPGetFuelConsumptionMultiplier_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalStructureItemContainer_eventBPGetFuelConsumptionMultiplier_Parms.ReturnValue"); }
};

