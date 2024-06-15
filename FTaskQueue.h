#pragma once

#include "BaseDeclarations.h"
struct FTaskQueue
{
	char __padding[0x18L];
	TArray<FBaseGraphTask *>& TasksField() { return *GetNativePointerField<TArray<FBaseGraphTask *>*>(this, "FTaskQueue.Tasks"); }
	int& StartIndexField() { return *GetNativePointerField<int*>(this, "FTaskQueue.StartIndex"); }
	int& EndIndexField() { return *GetNativePointerField<int*>(this, "FTaskQueue.EndIndex"); }
};

