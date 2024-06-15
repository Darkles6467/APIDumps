#pragma once

#include "BaseDeclarations.h"
#include "FCustomStatIDGraphTaskBase.h"

struct FIncGraphTask : FCustomStatIDGraphTaskBase
{
	char __padding[0x18L];
	FThreadSafeCounter * CounterField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FIncGraphTask.Counter"); }
	FThreadSafeCounter * CyclesField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FIncGraphTask.Cycles"); }
	int& WorkField() { return *GetNativePointerField<int*>(this, "FIncGraphTask.Work"); }
};

struct FIncGraphTaskGT : FIncGraphTask
{
};

