#pragma once

#include "BaseDeclarations.h"
struct FInventoryComponentDefaultItemsAppend
{
	char __padding[0x38L];
	bool& bAddToForceAllowCraftingField() { return *GetNativePointerField<bool*>(this, "FInventoryComponentDefaultItemsAppend.bAddToForceAllowCrafting"); }

	// Functions

	FInventoryComponentDefaultItemsAppend * operator=(const FInventoryComponentDefaultItemsAppend * __that) { return NativeCall<FInventoryComponentDefaultItemsAppend *, const FInventoryComponentDefaultItemsAppend *>(this, "FInventoryComponentDefaultItemsAppend.operator=", __that); }
};

