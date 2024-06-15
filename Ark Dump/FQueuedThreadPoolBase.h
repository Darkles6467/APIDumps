#pragma once

#include "BaseDeclarations.h"
struct FQueuedThreadPool
{
	char __padding[0x8L];

	// Functions

};

struct FQueuedThreadPoolBase : FQueuedThreadPool
{
	char __padding[0x40L];
	TArray<FQueuedWork *>& QueuedWorkField() { return *GetNativePointerField<TArray<FQueuedWork *>*>(this, "FQueuedThreadPoolBase.QueuedWork"); }
	TArray<FQueuedThread *>& QueuedThreadsField() { return *GetNativePointerField<TArray<FQueuedThread *>*>(this, "FQueuedThreadPoolBase.QueuedThreads"); }
	TArray<FQueuedThread *>& AllThreadsField() { return *GetNativePointerField<TArray<FQueuedThread *>*>(this, "FQueuedThreadPoolBase.AllThreads"); }
	FWindowsCriticalSection * SynchQueueField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FQueuedThreadPoolBase.SynchQueue"); }
	bool& TimeToDieField() { return *GetNativePointerField<bool*>(this, "FQueuedThreadPoolBase.TimeToDie"); }

	// Functions

	void AddQueuedWork(FQueuedWork * InQueuedWork) { NativeCall<void, FQueuedWork *>(this, "FQueuedThreadPoolBase.AddQueuedWork", InQueuedWork); }
	bool Create(unsigned int InNumQueuedThreads, unsigned int StackSize, EThreadPriority ThreadPriority) { return NativeCall<bool, unsigned int, unsigned int, EThreadPriority>(this, "FQueuedThreadPoolBase.Create", InNumQueuedThreads, StackSize, ThreadPriority); }
	void Destroy() { NativeCall<void>(this, "FQueuedThreadPoolBase.Destroy"); }
	bool RetractQueuedWork(FQueuedWork * InQueuedWork) { return NativeCall<bool, FQueuedWork *>(this, "FQueuedThreadPoolBase.RetractQueuedWork", InQueuedWork); }
	FQueuedWork * ReturnToPoolOrGetNextJob(FQueuedThread * InQueuedThread) { return NativeCall<FQueuedWork *, FQueuedThread *>(this, "FQueuedThreadPoolBase.ReturnToPoolOrGetNextJob", InQueuedThread); }
};

