#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FParallelAnimationCompletionTask
{
	char __padding[0x8L];

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FParallelAnimationCompletionTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

