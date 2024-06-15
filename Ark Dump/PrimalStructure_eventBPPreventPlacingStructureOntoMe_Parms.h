#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventPlacingStructureOntoMe_Parms
{
	char __padding[0xa0L];
	FHitResult& ForHitResultField() { return *GetNativePointerField<FHitResult*>(this, "PrimalStructure_eventBPPreventPlacingStructureOntoMe_Parms.ForHitResult"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventPlacingStructureOntoMe_Parms.ReturnValue"); }

	// Functions

};

