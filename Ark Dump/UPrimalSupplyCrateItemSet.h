#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalSupplyCrateItemSet : UObject
{
	char __padding[0x40L];
	FSupplyCrateItemSet& ItemSetField() { return *GetNativePointerField<FSupplyCrateItemSet*>(this, "UPrimalSupplyCrateItemSet.ItemSet"); }

	// Functions

};

