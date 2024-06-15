#pragma once

#include "BaseDeclarations.h"
struct FItemCraftQueueEntry
{
	char __padding[0x18L];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemCraftQueueEntry.ItemID"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemCraftQueueEntry.Quantity"); }
	bool& bIsRepairField() { return *GetNativePointerField<bool*>(this, "FItemCraftQueueEntry.bIsRepair"); }
	bool& bIgnoreInventoryRequirementField() { return *GetNativePointerField<bool*>(this, "FItemCraftQueueEntry.bIgnoreInventoryRequirement"); }
	float& RepairPercentageField() { return *GetNativePointerField<float*>(this, "FItemCraftQueueEntry.RepairPercentage"); }
	float& RepairSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FItemCraftQueueEntry.RepairSpeedMultiplier"); }

	// Functions

};

