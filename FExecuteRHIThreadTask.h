#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FExecuteRHIThreadTask
{
	char __padding[0x8L];

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FExecuteRHIThreadTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

