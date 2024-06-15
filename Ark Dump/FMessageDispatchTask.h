#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FMessageDispatchTask
{
	char __padding[0x38L];
	ENamedThreads::Type& ThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FMessageDispatchTask.Thread"); }
	TWeakPtr<FMessageTracer,1>& TracerPtrField() { return *GetNativePointerField<TWeakPtr<FMessageTracer,1>*>(this, "FMessageDispatchTask.TracerPtr"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FMessageDispatchTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

