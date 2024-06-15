#pragma once

#include "BaseDeclarations.h"
struct AllClustersInventory_eventOnRemoveAllClusterInventoryItemsFinished_Parms
{
	char __padding[0x28L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnRemoveAllClusterInventoryItemsFinished_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "AllClustersInventory_eventOnRemoveAllClusterInventoryItemsFinished_Parms.UserId"); }
	TArray<FItemNetID>& ItemsIdsField() { return *GetNativePointerField<TArray<FItemNetID>*>(this, "AllClustersInventory_eventOnRemoveAllClusterInventoryItemsFinished_Parms.ItemsIds"); }
};

