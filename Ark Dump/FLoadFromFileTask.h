#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FLoadFromFileTask
{
	char __padding[0x20L];
	TSharedRef<FLoadingTaskInfo,0>& TaskInfoField() { return *GetNativePointerField<TSharedRef<FLoadingTaskInfo,0>*>(this, "FLoadFromFileTask.TaskInfo"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FLoadFromFileTask.FileName"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FLoadFromFileTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

