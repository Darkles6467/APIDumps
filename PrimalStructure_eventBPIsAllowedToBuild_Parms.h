#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPIsAllowedToBuild_Parms
{
	char __padding[0x68L];
	FPlacementData& OutPlacementDataField() { return *GetNativePointerField<FPlacementData*>(this, "PrimalStructure_eventBPIsAllowedToBuild_Parms.OutPlacementData"); }
	int& CurrentAllowedReasonField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPIsAllowedToBuild_Parms.CurrentAllowedReason"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPIsAllowedToBuild_Parms.ReturnValue"); }

	// Functions

};

