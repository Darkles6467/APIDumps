#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPTreatAsFoundationForSnappedStructure_Parms
{
	char __padding[0x70L];
	FPlacementData& WithPlacementDataField() { return *GetNativePointerField<FPlacementData*>(this, "PrimalStructure_eventBPTreatAsFoundationForSnappedStructure_Parms.WithPlacementData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPTreatAsFoundationForSnappedStructure_Parms.ReturnValue"); }

	// Functions

};

