#pragma once

#include "BaseDeclarations.h"
struct FParallelProxy
{
	char __padding[0xa0L];
	TArray<FNetViewer>& ConnectionViewersField() { return *GetNativePointerField<TArray<FNetViewer>*>(this, "FParallelProxy.ConnectionViewers"); }
	bool& bDoDormantSpatialCheckField() { return *GetNativePointerField<bool*>(this, "FParallelProxy.bDoDormantSpatialCheck"); }
	bool& bProcessedField() { return *GetNativePointerField<bool*>(this, "FParallelProxy.bProcessed"); }
	int& ConsiderCountField() { return *GetNativePointerField<int*>(this, "FParallelProxy.ConsiderCount"); }
	int& NetRelevantCountField() { return *GetNativePointerField<int*>(this, "FParallelProxy.NetRelevantCount"); }
	FActorPriority * PriorityListField() { return GetNativePointerField<FActorPriority *>(this, "FParallelProxy.PriorityList"); }
	FActorPriority ** PriorityActorsField() { return GetNativePointerField<FActorPriority **>(this, "FParallelProxy.PriorityActors"); }

	// Functions

	void Reset() { NativeCall<void>(this, "FParallelProxy.Reset"); }
	void UnstasisPending() { NativeCall<void>(this, "FParallelProxy.UnstasisPending"); }
};

