#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FDispatchRHIThreadTask
{
	char __padding[0x10L];
	bool& bRHIThreadField() { return *GetNativePointerField<bool*>(this, "FDispatchRHIThreadTask.bRHIThread"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FDispatchRHIThreadTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

