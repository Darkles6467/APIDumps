#pragma once

#include "BaseDeclarations.h"
struct FSpinLock
{
	char __padding[0x8L];
	volatile int& LockValueField() { return *GetNativePointerField<volatile int*>(this, "FSpinLock.LockValue"); }
	float& SpinTimeInSecondsField() { return *GetNativePointerField<float*>(this, "FSpinLock.SpinTimeInSeconds"); }
};

