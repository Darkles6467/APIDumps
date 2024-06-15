#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPDoHarvestAttack_Parms
{
	char __padding[0x4L];
	int& harvestIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPDoHarvestAttack_Parms.harvestIndex"); }
};

