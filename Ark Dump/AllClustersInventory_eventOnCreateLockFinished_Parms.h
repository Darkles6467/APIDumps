#pragma once

#include "BaseDeclarations.h"
struct AllClustersInventory_eventOnCreateLockFinished_Parms
{
	char __padding[0x18L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnCreateLockFinished_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "AllClustersInventory_eventOnCreateLockFinished_Parms.UserId"); }
};

