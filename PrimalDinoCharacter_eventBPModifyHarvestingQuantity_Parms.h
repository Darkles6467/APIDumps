#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyHarvestingQuantity_Parms
{
	char __padding[0x18L];
	float& originalQuantityField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPModifyHarvestingQuantity_Parms.originalQuantity"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPModifyHarvestingQuantity_Parms.ReturnValue"); }
};

