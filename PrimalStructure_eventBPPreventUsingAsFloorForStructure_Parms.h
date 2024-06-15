#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventUsingAsFloorForStructure_Parms
{
	char __padding[0x70L];
	FPlacementData& theOutPlacementDataField() { return *GetNativePointerField<FPlacementData*>(this, "PrimalStructure_eventBPPreventUsingAsFloorForStructure_Parms.theOutPlacementData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventUsingAsFloorForStructure_Parms.ReturnValue"); }

	// Functions

};

