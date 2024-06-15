#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FWriteFileTask
{
	char __padding[0x38L];
	TSharedRef<FWriteFileTaskInfo,0>& TaskInfoField() { return *GetNativePointerField<TSharedRef<FWriteFileTaskInfo,0>*>(this, "FWriteFileTask.TaskInfo"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FWriteFileTask.FileName"); }
	FString& TempFileNameField() { return *GetNativePointerField<FString*>(this, "FWriteFileTask.TempFileName"); }
	bool& bCopyField() { return *GetNativePointerField<bool*>(this, "FWriteFileTask.bCopy"); }

	// Functions

	static ENamedThreads::Type GetDesiredThread() { return NativeCall<ENamedThreads::Type>(nullptr, "FWriteFileTask.GetDesiredThread"); }
	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FWriteFileTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

