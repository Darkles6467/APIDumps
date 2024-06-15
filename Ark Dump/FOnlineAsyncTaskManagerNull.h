#pragma once

#include "BaseDeclarations.h"
#include "FOnlineAsyncTaskManager.h"
#include "FRunnable.h"

struct FOnlineAsyncTaskManagerNull : FOnlineAsyncTaskManager
{
	char __padding[0x8L];
	FOnlineSubsystemNull * NullSubsystemField() { return GetNativePointerField<FOnlineSubsystemNull *>(this, "FOnlineAsyncTaskManagerNull.NullSubsystem"); }

	// Functions

};

