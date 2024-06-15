#pragma once

#include "BaseDeclarations.h"
struct FConfigItemCraftingCostOverride
{
	char __padding[0x20L];
	FString& ItemClassStringField() { return *GetNativePointerField<FString*>(this, "FConfigItemCraftingCostOverride.ItemClassString"); }
	TArray<FConfigCraftingResourceRequirement>& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FConfigCraftingResourceRequirement>*>(this, "FConfigItemCraftingCostOverride.BaseCraftingResourceRequirements"); }

	// Functions

	FConfigItemCraftingCostOverride * operator=(const FConfigItemCraftingCostOverride * __that) { return NativeCall<FConfigItemCraftingCostOverride *, const FConfigItemCraftingCostOverride *>(this, "FConfigItemCraftingCostOverride.operator=", __that); }
};

