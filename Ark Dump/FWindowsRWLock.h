#pragma once

#include "BaseDeclarations.h"
struct FWindowsRWLock
{
	char __padding[0x8L];
	_RTL_SRWLOCK& MutexField() { return *GetNativePointerField<_RTL_SRWLOCK*>(this, "FWindowsRWLock.Mutex"); }
};

