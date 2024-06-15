#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FQueuedThread : FRunnable
{
	char __padding[0x28L];
	volatile int& TimeToDieField() { return *GetNativePointerField<volatile int*>(this, "FQueuedThread.TimeToDie"); }
	FQueuedWork *volatile& QueuedWorkField() { return *GetNativePointerField<FQueuedWork *volatile*>(this, "FQueuedThread.QueuedWork"); }

	// Functions

	bool Create(FQueuedThreadPool * InPool, unsigned int InStackSize, EThreadPriority ThreadPriority) { return NativeCall<bool, FQueuedThreadPool *, unsigned int, EThreadPriority>(this, "FQueuedThread.Create", InPool, InStackSize, ThreadPriority); }
	bool KillThread() { return NativeCall<bool>(this, "FQueuedThread.KillThread"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FQueuedThread.Run"); }
};

