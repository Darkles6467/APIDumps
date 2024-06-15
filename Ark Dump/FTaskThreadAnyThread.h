#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FTaskThreadBase : FRunnable
{
	char __padding[0x30L];
	ENamedThreads::Type& ThreadIdField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FTaskThreadBase.ThreadId"); }
	unsigned int& PerThreadIDTLSSlotField() { return *GetNativePointerField<unsigned int*>(this, "FTaskThreadBase.PerThreadIDTLSSlot"); }
	FThreadSafeCounter& IsStalledField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FTaskThreadBase.IsStalled"); }
	TArray<FBaseGraphTask *>& NewTasksField() { return *GetNativePointerField<TArray<FBaseGraphTask *>*>(this, "FTaskThreadBase.NewTasks"); }
	FWorkerThread * OwnerWorkerField() { return GetNativePointerField<FWorkerThread *>(this, "FTaskThreadBase.OwnerWorker"); }

	// Functions

	bool Init() { return NativeCall<bool>(this, "FTaskThreadBase.Init"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FTaskThreadBase.Run"); }
	void Stop() { NativeCall<void>(this, "FTaskThreadBase.Stop"); }
	void Tick() { NativeCall<void>(this, "FTaskThreadBase.Tick"); }
};

struct FTaskThreadAnyThread : FTaskThreadBase
{
	char __padding[0x18L];
	FTaskThreadAnyThread::FThreadTaskQueue& QueueField() { return *GetNativePointerField<FTaskThreadAnyThread::FThreadTaskQueue*>(this, "FTaskThreadAnyThread.Queue"); }
	int& PriorityIndexField() { return *GetNativePointerField<int*>(this, "FTaskThreadAnyThread.PriorityIndex"); }

	// Functions

	bool IsProcessingTasks(int QueueIndex) { return NativeCall<bool, int>(this, "FTaskThreadAnyThread.IsProcessingTasks", QueueIndex); }
	void ProcessTasks() { NativeCall<void>(this, "FTaskThreadAnyThread.ProcessTasks"); }
	void ProcessTasksUntilIdle(int QueueIndex) { NativeCall<void, int>(this, "FTaskThreadAnyThread.ProcessTasksUntilIdle", QueueIndex); }
	void ProcessTasksUntilQuit(int QueueIndex) { NativeCall<void, int>(this, "FTaskThreadAnyThread.ProcessTasksUntilQuit", QueueIndex); }
	void RequestQuit(int QueueIndex) { NativeCall<void, int>(this, "FTaskThreadAnyThread.RequestQuit", QueueIndex); }
	void WakeUp() { NativeCall<void>(this, "FTaskThreadAnyThread.WakeUp"); }
};

