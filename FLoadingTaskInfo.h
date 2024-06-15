#pragma once

#include "BaseDeclarations.h"
struct FLoadingTaskInfo
{
	char __padding[0x20L];
	TArray<unsigned char>& FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLoadingTaskInfo.FileContent"); }
	int& UniquePaintingIdField() { return *GetNativePointerField<int*>(this, "FLoadingTaskInfo.UniquePaintingId"); }
	TRefCountPtr<FGraphEvent>& CompletionHandleField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FLoadingTaskInfo.CompletionHandle"); }

	// Functions

};

