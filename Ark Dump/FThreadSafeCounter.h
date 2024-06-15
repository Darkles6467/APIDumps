#pragma once

#include "BaseDeclarations.h"
struct FThreadSafeCounter
{
	char __padding[0x4L];
	volatile int& CounterField() { return *GetNativePointerField<volatile int*>(this, "FThreadSafeCounter.Counter"); }

	// Functions

	int Decrement() { return NativeCall<int>(this, "FThreadSafeCounter.Decrement"); }
	int Increment() { return NativeCall<int>(this, "FThreadSafeCounter.Increment"); }
};

