#pragma once

#include "BaseDeclarations.h"
struct FWriteScopeLock
{
	char __padding[0x8L];
	FWindowsRWLock * LockField() { return GetNativePointerField<FWindowsRWLock *>(this, "FWriteScopeLock.Lock"); }
};

