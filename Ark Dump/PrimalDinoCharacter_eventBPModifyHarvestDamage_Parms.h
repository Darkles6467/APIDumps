#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyHarvestDamage_Parms
{
	char __padding[0x10L];
	const UPrimalHarvestingComponent * harvestComponentField() { return GetNativePointerField<const UPrimalHarvestingComponent *>(this, "PrimalDinoCharacter_eventBPModifyHarvestDamage_Parms.harvestComponent"); }
	float& inDamageField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPModifyHarvestDamage_Parms.inDamage"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPModifyHarvestDamage_Parms.ReturnValue"); }
};

