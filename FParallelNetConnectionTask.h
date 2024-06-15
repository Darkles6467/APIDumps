#pragma once

#include "BaseDeclarations.h"
struct FParallelNetConnectionTask
{
	char __padding[0x78L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FParallelNetConnectionTask.World"); }
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "FParallelNetConnectionTask.DeltaSeconds"); }
	TArray<FNetViewer> * ConnectionViewersField() { return GetNativePointerField<TArray<FNetViewer> *>(this, "FParallelNetConnectionTask.ConnectionViewers"); }
	int * ConsiderCountField() { return GetNativePointerField<int *>(this, "FParallelNetConnectionTask.ConsiderCount"); }
	bool * bDoDormantSpatialCheckField() { return GetNativePointerField<bool *>(this, "FParallelNetConnectionTask.bDoDormantSpatialCheck"); }
	FActorPriority * PriorityListField() { return GetNativePointerField<FActorPriority *>(this, "FParallelNetConnectionTask.PriorityList"); }
	FActorPriority ** PriorityActorsField() { return GetNativePointerField<FActorPriority **>(this, "FParallelNetConnectionTask.PriorityActors"); }
	int& NetRelevantCountField() { return *GetNativePointerField<int*>(this, "FParallelNetConnectionTask.NetRelevantCount"); }

	// Functions

	void PreparePriorityLists(ENamedThreads::Type CurrentThread) { NativeCall<void, ENamedThreads::Type>(this, "FParallelNetConnectionTask.PreparePriorityLists", CurrentThread); }
	void PrepareSpatialization(ENamedThreads::Type CurrentThread) { NativeCall<void, ENamedThreads::Type>(this, "FParallelNetConnectionTask.PrepareSpatialization", CurrentThread); }
};

