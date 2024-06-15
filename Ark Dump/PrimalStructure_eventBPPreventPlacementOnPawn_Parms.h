#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventPlacementOnPawn_Parms
{
	char __padding[0x20L];
	FName& ForBoneField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPPreventPlacementOnPawn_Parms.ForBone"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventPlacementOnPawn_Parms.ReturnValue"); }

	// Functions

};

