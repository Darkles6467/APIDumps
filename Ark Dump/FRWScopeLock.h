#pragma once

#include "BaseDeclarations.h"
struct FRWScopeLock
{
	char __padding[0x10L];
	FWindowsRWLock * LockObjectField() { return GetNativePointerField<FWindowsRWLock *>(this, "FRWScopeLock.LockObject"); }
	FRWScopeLockType& LockTypeField() { return *GetNativePointerField<FRWScopeLockType*>(this, "FRWScopeLock.LockType"); }
};

