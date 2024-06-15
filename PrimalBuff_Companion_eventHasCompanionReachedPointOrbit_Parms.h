#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventHasCompanionReachedPointOrbit_Parms
{
	char __padding[0x400L];
	FPointOfInterestData_ForCompanion& OfPointDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "PrimalBuff_Companion_eventHasCompanionReachedPointOrbit_Parms.OfPointData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventHasCompanionReachedPointOrbit_Parms.ReturnValue"); }

	// Functions

};

