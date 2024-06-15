#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPIsAllowedToBuildEx_Parms
{
	char __padding[0x78L];
	FPlacementData& OutPlacementDataField() { return *GetNativePointerField<FPlacementData*>(this, "PrimalStructure_eventBPIsAllowedToBuildEx_Parms.OutPlacementData"); }
	int& CurrentAllowedReasonField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPIsAllowedToBuildEx_Parms.CurrentAllowedReason"); }
	bool& bFinalPlacementField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPIsAllowedToBuildEx_Parms.bFinalPlacement"); }
	bool& bChoosingRotationField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPIsAllowedToBuildEx_Parms.bChoosingRotation"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPIsAllowedToBuildEx_Parms.ReturnValue"); }

	// Functions

};

