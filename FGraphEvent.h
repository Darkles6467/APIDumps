#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FGraphEvent
{
	char __padding[0x40L];
	TClosableLockFreePointerListUnorderedSingleConsumer<FBaseGraphTask,0>& SubsequentListField() { return *GetNativePointerField<TClosableLockFreePointerListUnorderedSingleConsumer<FBaseGraphTask,0>*>(this, "FGraphEvent.SubsequentList"); }
	TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> >& EventsToWaitForField() { return *GetNativePointerField<TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> >*>(this, "FGraphEvent.EventsToWaitFor"); }
	FThreadSafeCounter& ReferenceCountField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FGraphEvent.ReferenceCount"); }

	// Functions

	unsigned int Release() { return NativeCall<unsigned int>(this, "FGraphEvent.Release"); }
	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FGraphEvent.AddRef"); }
	bool AddSubsequent(FBaseGraphTask * Task) { return NativeCall<bool, FBaseGraphTask *>(this, "FGraphEvent.AddSubsequent", Task); }
	bool IsComplete() { return NativeCall<bool>(this, "FGraphEvent.IsComplete"); }
	static TRefCountPtr<FGraphEvent> * CreateGraphEvent(TRefCountPtr<FGraphEvent> * result) { return NativeCall<TRefCountPtr<FGraphEvent> *, TRefCountPtr<FGraphEvent> *>(nullptr, "FGraphEvent.CreateGraphEvent", result); }
	void DispatchSubsequents(TArray<FBaseGraphTask *> * NewTasks, ENamedThreads::Type CurrentThreadIfKnown) { NativeCall<void, TArray<FBaseGraphTask *> *, ENamedThreads::Type>(this, "FGraphEvent.DispatchSubsequents", NewTasks, CurrentThreadIfKnown); }
	static void Recycle(FGraphEvent * ToRecycle) { NativeCall<void, FGraphEvent *>(nullptr, "FGraphEvent.Recycle", ToRecycle); }
	void DontCompleteUntil(TRefCountPtr<FGraphEvent> EventToWaitFor) { NativeCall<void, TRefCountPtr<FGraphEvent>>(this, "FGraphEvent.DontCompleteUntil", EventToWaitFor); }
};

