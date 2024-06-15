#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FUnstasisRangeCheck
{
	char __padding[0x40L];
	FThreadSafeCounter * PlayerCounterField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FUnstasisRangeCheck.PlayerCounter"); }
	FThreadSafeCounter * UnstasisListCounterField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FUnstasisRangeCheck.UnstasisListCounter"); }
	TArray<FVector> * UnstasisVectorsField() { return GetNativePointerField<TArray<FVector> *>(this, "FUnstasisRangeCheck.UnstasisVectors"); }
	TArray<float> * UnstasisRangesField() { return GetNativePointerField<TArray<float> *>(this, "FUnstasisRangeCheck.UnstasisRanges"); }
	UWorld * WorldRefField() { return GetNativePointerField<UWorld *>(this, "FUnstasisRangeCheck.WorldRef"); }
	volatile int * ActorUnstasisListCountField() { return GetNativePointerField<volatile int *>(this, "FUnstasisRangeCheck.ActorUnstasisListCount"); }
	FWindowsCriticalSection * ListCriticalSectionField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FUnstasisRangeCheck.ListCriticalSection"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, TRefCountPtr<FGraphEvent> *>(this, "FUnstasisRangeCheck.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

