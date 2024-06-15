#pragma once

#include "BaseDeclarations.h"
struct FWindowsSystemWideCriticalSection
{
	char __padding[0x8L];
	void * MutexField() { return GetNativePointerField<void *>(this, "FWindowsSystemWideCriticalSection.Mutex"); }
};

