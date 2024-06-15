#pragma once

#include "BaseDeclarations.h"
struct FConditionalScopeLock
{
	char __padding[0x10L];
	FWindowsCriticalSection * SyncObjectField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FConditionalScopeLock.SyncObject"); }
	bool& bLockField() { return *GetNativePointerField<bool*>(this, "FConditionalScopeLock.bLock"); }
};

