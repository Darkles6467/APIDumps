#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventPlacingOnFloorStructure_Parms
{
	char __padding[0x70L];
	FPlacementData& theOutPlacementDataField() { return *GetNativePointerField<FPlacementData*>(this, "PrimalStructure_eventBPPreventPlacingOnFloorStructure_Parms.theOutPlacementData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventPlacingOnFloorStructure_Parms.ReturnValue"); }
};

