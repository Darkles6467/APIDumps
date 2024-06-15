#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintOverrideHarvestDamageType_Parms
{
	char __padding[0x10L];
	float& OutHarvestDamageMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintOverrideHarvestDamageType_Parms.OutHarvestDamageMultiplier"); }
};

