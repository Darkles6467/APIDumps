#pragma once

#include "BaseDeclarations.h"
struct FParallelForTask
{
	char __padding[0x18L];
	TSharedRef<FParallelForData,1>& DataField() { return *GetNativePointerField<TSharedRef<FParallelForData,1>*>(this, "FParallelForTask.Data"); }
	int& TasksToSpawnField() { return *GetNativePointerField<int*>(this, "FParallelForTask.TasksToSpawn"); }
};

