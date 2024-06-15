#pragma once

#include "BaseDeclarations.h"
#include "FGCObject.h"

struct FDistanceFieldAsyncQueue : FGCObject
{
	char __padding[0x30L];
	TScopedPointer<FBuildDistanceFieldThreadRunnable>& ThreadRunnableField() { return *GetNativePointerField<TScopedPointer<FBuildDistanceFieldThreadRunnable>*>(this, "FDistanceFieldAsyncQueue.ThreadRunnable"); }
	TArray<FAsyncDistanceFieldTask *>& ReferencedTasksField() { return *GetNativePointerField<TArray<FAsyncDistanceFieldTask *>*>(this, "FDistanceFieldAsyncQueue.ReferencedTasks"); }
	TLockFreePointerListLIFO<FAsyncDistanceFieldTask>& TaskQueueField() { return *GetNativePointerField<TLockFreePointerListLIFO<FAsyncDistanceFieldTask>*>(this, "FDistanceFieldAsyncQueue.TaskQueue"); }
	TLockFreePointerListLIFO<FAsyncDistanceFieldTask>& CompletedTasksField() { return *GetNativePointerField<TLockFreePointerListLIFO<FAsyncDistanceFieldTask>*>(this, "FDistanceFieldAsyncQueue.CompletedTasks"); }
	struct IMeshUtilities * MeshUtilitiesField() { return GetNativePointerField<struct IMeshUtilities *>(this, "FDistanceFieldAsyncQueue.MeshUtilities"); }

	// Functions

	void Shutdown() { NativeCall<void>(this, "FDistanceFieldAsyncQueue.Shutdown"); }
};

