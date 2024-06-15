#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalSupplyCrateItemSets : UObject
{
	char __padding[0x10L];
	TArray<FSupplyCrateItemSet>& ItemSetsField() { return *GetNativePointerField<TArray<FSupplyCrateItemSet>*>(this, "UPrimalSupplyCrateItemSets.ItemSets"); }

	// Functions

};

