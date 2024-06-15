#pragma once

#include "BaseDeclarations.h"
struct AllClustersInventory_eventOnSaveItemsFinished_Parms
{
	char __padding[0x18L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnSaveItemsFinished_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "AllClustersInventory_eventOnSaveItemsFinished_Parms.UserId"); }
};

