#pragma once

#include "BaseDeclarations.h"
struct PrimalHarvestingComponent_eventBPCustomHarvestResource_Parms
{
	char __padding[0x28L];
	int& NumToGiveField() { return *GetNativePointerField<int*>(this, "PrimalHarvestingComponent_eventBPCustomHarvestResource_Parms.NumToGive"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalHarvestingComponent_eventBPCustomHarvestResource_Parms.ReturnValue"); }

	// Functions

};

