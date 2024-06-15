#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyHarvestingWeightsArray_Parms
{
	char __padding[0x30L];
	TArray<float>& resourceWeightsInField() { return *GetNativePointerField<TArray<float>*>(this, "PrimalDinoCharacter_eventBPModifyHarvestingWeightsArray_Parms.resourceWeightsIn"); }
	TArray<float>& resourceWeightsOutField() { return *GetNativePointerField<TArray<float>*>(this, "PrimalDinoCharacter_eventBPModifyHarvestingWeightsArray_Parms.resourceWeightsOut"); }

	// Functions

};

