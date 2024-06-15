#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPForceConsideredEnemyFoundation_Parms
{
	char __padding[0x20L];
	FVector& TestAtLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPForceConsideredEnemyFoundation_Parms.TestAtLocation"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPForceConsideredEnemyFoundation_Parms.ReturnValue"); }

	// Functions

};

