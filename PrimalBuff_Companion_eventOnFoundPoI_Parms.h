#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnFoundPoI_Parms
{
	char __padding[0x400L];
	FPointOfInterestData_ForCompanion& FoundPointDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "PrimalBuff_Companion_eventOnFoundPoI_Parms.FoundPointData"); }
};

