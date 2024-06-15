#pragma once

#include "BaseDeclarations.h"
struct AllClustersInventory_eventOnLoadItemsFinished_Parms
{
	char __padding[0x28L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnLoadItemsFinished_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "AllClustersInventory_eventOnLoadItemsFinished_Parms.UserId"); }
	TArray<FItemNetInfo>& ItemsField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "AllClustersInventory_eventOnLoadItemsFinished_Parms.Items"); }
};

