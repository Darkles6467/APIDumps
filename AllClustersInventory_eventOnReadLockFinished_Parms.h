#pragma once

#include "BaseDeclarations.h"
struct AllClustersInventory_eventOnReadLockFinished_Parms
{
	char __padding[0x20L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnReadLockFinished_Parms.Success"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "AllClustersInventory_eventOnReadLockFinished_Parms.UserId"); }
	bool& LockedField() { return *GetNativePointerField<bool*>(this, "AllClustersInventory_eventOnReadLockFinished_Parms.Locked"); }
};

