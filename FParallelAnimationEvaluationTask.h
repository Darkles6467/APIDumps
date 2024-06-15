#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FParallelAnimationEvaluationTask
{
	char __padding[0x8L];

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FParallelAnimationEvaluationTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

