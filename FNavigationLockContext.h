#pragma once

#include "BaseDeclarations.h"
struct FNavigationLockContext
{
	char __padding[0x10L];
	UWorld * MyWorldField() { return GetNativePointerField<UWorld *>(this, "FNavigationLockContext.MyWorld"); }
	char& LockReasonField() { return *GetNativePointerField<char*>(this, "FNavigationLockContext.LockReason"); }

	// Functions

};

