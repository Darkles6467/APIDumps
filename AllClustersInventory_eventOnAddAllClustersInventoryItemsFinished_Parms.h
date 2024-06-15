#pragma once

#include "BaseDeclarations.h"
struct AllClustersInventory_eventOnAddAllClustersInventoryItemsFinished_Parms
{
	char __padding[0x28L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnAddAllClustersInventoryItemsFinished_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "AllClustersInventory_eventOnAddAllClustersInventoryItemsFinished_Parms.UserId"); }
	TArray<int>& MasterIndexNumField() { return *GetNativePointerField<TArray<int>*>(this, "AllClustersInventory_eventOnAddAllClustersInventoryItemsFinished_Parms.MasterIndexNum"); }
};

