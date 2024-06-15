#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FArchiveRealtimeGC
{

	// Functions

	void FGCTask(FArchiveRealtimeGC * InOwner, const TArray<UObject *> * InObjectsToSerialize, int StartIndex, int NumObjects) { NativeCall<void, FArchiveRealtimeGC *, const TArray<UObject *> *, int, int>(this, "FArchiveRealtimeGC.FGCTask", InOwner, InObjectsToSerialize, StartIndex, NumObjects); }
	void FGCTask() { NativeCall<void>(this, "FArchiveRealtimeGC.FGCTask"); }
	void PerformReachabilityAnalysis(EObjectFlags KeepFlags, bool bForceSingleThreaded) { NativeCall<void, EObjectFlags, bool>(this, "FArchiveRealtimeGC.PerformReachabilityAnalysis", KeepFlags, bForceSingleThreaded); }
	void ProcessObjectArray(TArray<UObject *> * InObjectsToSerializeArray, TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, TArray<UObject *> *, TRefCountPtr<FGraphEvent> *>(this, "FArchiveRealtimeGC.ProcessObjectArray", InObjectsToSerializeArray, MyCompletionGraphEvent); }
};

