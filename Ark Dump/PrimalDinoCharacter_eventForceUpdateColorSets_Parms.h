#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventForceUpdateColorSets_Parms
{
	char __padding[0x8L];
	int& ColorRegionField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventForceUpdateColorSets_Parms.ColorRegion"); }
	int& ColorSetField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventForceUpdateColorSets_Parms.ColorSet"); }
};

