#pragma once

#include "BaseDeclarations.h"
struct FThreadSingletonInitializer
{

	// Functions

	static FThreadSingleton * Get(FThreadSingleton *(__fastcall *const)() FThreadSingleton *, void (__fastcall *const)(FThreadSingleton *this) , unsigned int *) { return NativeCall<FThreadSingleton *, FThreadSingleton *(__fastcall *const)(), void (__fastcall *const)(FThreadSingleton *this), unsigned int *>(nullptr, "FThreadSingletonInitializer.Get", FThreadSingleton *, ,); }
};

