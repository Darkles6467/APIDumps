#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FTaskGraphInterface
{
	char __padding[0x8L];

	// Functions

	static void Startup(int NumThreads) { NativeCall<void, int>(nullptr, "FTaskGraphInterface.Startup", NumThreads); }
	void WaitUntilTaskCompletes(const TRefCountPtr<FGraphEvent> * Task, ENamedThreads::Type CurrentThreadIfKnown) { NativeCall<void, const TRefCountPtr<FGraphEvent> *, ENamedThreads::Type>(this, "FTaskGraphInterface.WaitUntilTaskCompletes", Task, CurrentThreadIfKnown); }
	void TriggerEventWhenTaskCompletes(FEvent * InEvent, const TRefCountPtr<FGraphEvent> * Task, ENamedThreads::Type CurrentThreadIfKnown) { NativeCall<void, FEvent *, const TRefCountPtr<FGraphEvent> *, ENamedThreads::Type>(this, "FTaskGraphInterface.TriggerEventWhenTaskCompletes", InEvent, Task, CurrentThreadIfKnown); }
};

struct FTaskGraphImplementation : FTaskGraphInterface
{
	char __padding[0x5e8L];
	FieldArray<FWorkerThread, 24> WorkerThreadsField() { return {this, "FTaskGraphImplementation.WorkerThreads"}; }
	int& NumThreadsField() { return *GetNativePointerField<int*>(this, "FTaskGraphImplementation.NumThreads"); }
	int& NumNamedThreadsField() { return *GetNativePointerField<int*>(this, "FTaskGraphImplementation.NumNamedThreads"); }
	int& NumTaskThreadSetsField() { return *GetNativePointerField<int*>(this, "FTaskGraphImplementation.NumTaskThreadSets"); }
	int& NumTaskThreadsPerSetField() { return *GetNativePointerField<int*>(this, "FTaskGraphImplementation.NumTaskThreadsPerSet"); }
	bool& bCreatedHiPriorityThreadsField() { return *GetNativePointerField<bool*>(this, "FTaskGraphImplementation.bCreatedHiPriorityThreads"); }
	bool& bCreatedBackgroundPriorityThreadsField() { return *GetNativePointerField<bool*>(this, "FTaskGraphImplementation.bCreatedBackgroundPriorityThreads"); }
	ENamedThreads::Type& LastExternalThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FTaskGraphImplementation.LastExternalThread"); }
	FieldArray<FThreadSafeCounter, 3> NextUnnamedThreadForTaskFromUnknownThreadField() { return {this, "FTaskGraphImplementation.NextUnnamedThreadForTaskFromUnknownThread"}; }
	FThreadSafeCounter& ReentrancyCheckField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FTaskGraphImplementation.ReentrancyCheck"); }
	unsigned int& PerThreadIDTLSSlotField() { return *GetNativePointerField<unsigned int*>(this, "FTaskGraphImplementation.PerThreadIDTLSSlot"); }
	FieldArray<TLockFreePointerListLIFO<FBaseGraphTask>, 3> IncomingAnyThreadTasksField() { return {this, "FTaskGraphImplementation.IncomingAnyThreadTasks"}; }
	FieldArray<TLockFreePointerListLIFO<FBaseGraphTask>, 3> IncomingAnyThreadTasksHiPriField() { return {this, "FTaskGraphImplementation.IncomingAnyThreadTasksHiPri"}; }
	FieldArray<TLockFreePointerListLIFO<FBaseGraphTask>, 3> SortedAnyThreadTasksField() { return {this, "FTaskGraphImplementation.SortedAnyThreadTasks"}; }
	FieldArray<TLockFreePointerListLIFO<FBaseGraphTask>, 3> SortedAnyThreadTasksHiPriField() { return {this, "FTaskGraphImplementation.SortedAnyThreadTasksHiPri"}; }
	FieldArray<FWindowsCriticalSection, 3> CriticalSectionForSortingIncomingAnyThreadTasksField() { return {this, "FTaskGraphImplementation.CriticalSectionForSortingIncomingAnyThreadTasks"}; }
	FieldArray<FWindowsCriticalSection, 3> CriticalSectionForSortingIncomingAnyThreadTasksHiPriField() { return {this, "FTaskGraphImplementation.CriticalSectionForSortingIncomingAnyThreadTasksHiPri"}; }
	FieldArray<char, 128> PadToAvoidContention6Field() { return {this, "FTaskGraphImplementation.PadToAvoidContention6"}; }
	FieldArray<FTaskGraphImplementation::FAtomicStateBitfield, 3> AtomicForConsoleApproachField() { return {this, "FTaskGraphImplementation.AtomicForConsoleApproach"}; }

	// Functions

	void AttachToThread(ENamedThreads::Type CurrentThread) { NativeCall<void, ENamedThreads::Type>(this, "FTaskGraphImplementation.AttachToThread", CurrentThread); }
	FBaseGraphTask * FindWork(ENamedThreads::Type ThreadInNeed) { return NativeCall<FBaseGraphTask *, ENamedThreads::Type>(this, "FTaskGraphImplementation.FindWork", ThreadInNeed); }
	ENamedThreads::Type GetCurrentThread() { return NativeCall<ENamedThreads::Type>(this, "FTaskGraphImplementation.GetCurrentThread"); }
	ENamedThreads::Type GetCurrentThreadIfKnown(bool bLocalQueue) { return NativeCall<ENamedThreads::Type, bool>(this, "FTaskGraphImplementation.GetCurrentThreadIfKnown", bLocalQueue); }
	int GetNumWorkerThreads() { return NativeCall<int>(this, "FTaskGraphImplementation.GetNumWorkerThreads"); }
	bool IsThreadProcessingTasks(ENamedThreads::Type ThreadToCheck) { return NativeCall<bool, ENamedThreads::Type>(this, "FTaskGraphImplementation.IsThreadProcessingTasks", ThreadToCheck); }
	void ProcessThreadUntilIdle(ENamedThreads::Type CurrentThread) { NativeCall<void, ENamedThreads::Type>(this, "FTaskGraphImplementation.ProcessThreadUntilIdle", CurrentThread); }
	void ProcessThreadUntilRequestReturn(ENamedThreads::Type CurrentThread) { NativeCall<void, ENamedThreads::Type>(this, "FTaskGraphImplementation.ProcessThreadUntilRequestReturn", CurrentThread); }
	void QueueTask(FBaseGraphTask * Task, ENamedThreads::Type ThreadToExecuteOn, ENamedThreads::Type InCurrentThreadIfKnown) { NativeCall<void, FBaseGraphTask *, ENamedThreads::Type, ENamedThreads::Type>(this, "FTaskGraphImplementation.QueueTask", Task, ThreadToExecuteOn, InCurrentThreadIfKnown); }
	void RequestReturn(ENamedThreads::Type CurrentThread) { NativeCall<void, ENamedThreads::Type>(this, "FTaskGraphImplementation.RequestReturn", CurrentThread); }
	void StartTaskThreadFastMode(int Priority, int MyIndex) { NativeCall<void, int, int>(this, "FTaskGraphImplementation.StartTaskThreadFastMode", Priority, MyIndex); }
	void TriggerEventWhenTasksComplete(FEvent * InEvent, const TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> > * Tasks, ENamedThreads::Type CurrentThreadIfKnown) { NativeCall<void, FEvent *, const TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> > *, ENamedThreads::Type>(this, "FTaskGraphImplementation.TriggerEventWhenTasksComplete", InEvent, Tasks, CurrentThreadIfKnown); }
	void WaitUntilTasksComplete(const TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> > * Tasks, ENamedThreads::Type CurrentThreadIfKnown) { NativeCall<void, const TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> > *, ENamedThreads::Type>(this, "FTaskGraphImplementation.WaitUntilTasksComplete", Tasks, CurrentThreadIfKnown); }
};

