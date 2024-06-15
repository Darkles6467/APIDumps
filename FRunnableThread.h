#pragma once

#include "BaseDeclarations.h"
struct FRunnableThread
{
	char __padding[0x28L];

	// Functions

	void FThreadRegistry(unsigned int ID, FRunnableThread * Thread) { NativeCall<void, unsigned int, FRunnableThread *>(this, "FRunnableThread.FThreadRegistry", ID, Thread); }
};

