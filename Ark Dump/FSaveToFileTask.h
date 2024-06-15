#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FSaveToFileTask
{
	char __padding[0x28L];
	TArray<unsigned char>& FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FSaveToFileTask.FileContent"); }
	int& UniquePaintingIdField() { return *GetNativePointerField<int*>(this, "FSaveToFileTask.UniquePaintingId"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FSaveToFileTask.FileName"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FSaveToFileTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

