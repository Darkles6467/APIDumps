#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientOnAddedItemsToAllClustersInventory_Parms
{
	char __padding[0x28L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientOnAddedItemsToAllClustersInventory_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientOnAddedItemsToAllClustersInventory_Parms.UserId"); }
	TArray<int>& MasterIndexNumField() { return *GetNativePointerField<TArray<int>*>(this, "ShooterPlayerController_eventClientOnAddedItemsToAllClustersInventory_Parms.MasterIndexNum"); }

	// Functions

};

