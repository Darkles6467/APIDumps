#pragma once

#include "BaseDeclarations.h"
struct FItemCraftingCostOverride
{
	char __padding[0x18L];
	TArray<FCraftingResourceRequirement>& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "FItemCraftingCostOverride.BaseCraftingResourceRequirements"); }

	// Functions

};

