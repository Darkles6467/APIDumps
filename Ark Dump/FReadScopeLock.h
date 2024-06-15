#pragma once

#include "BaseDeclarations.h"
struct FReadScopeLock
{
	char __padding[0x8L];
	FWindowsRWLock * LockField() { return GetNativePointerField<FWindowsRWLock *>(this, "FReadScopeLock.Lock"); }
};

