#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FBuildDistanceFieldThreadRunnable : FRunnable
{
	char __padding[0x28L];
	int& NextThreadIndexField() { return *GetNativePointerField<int*>(this, "FBuildDistanceFieldThreadRunnable.NextThreadIndex"); }
	FDistanceFieldAsyncQueue * AsyncQueueField() { return GetNativePointerField<FDistanceFieldAsyncQueue *>(this, "FBuildDistanceFieldThreadRunnable.AsyncQueue"); }
	volatile bool& bIsRunningField() { return *GetNativePointerField<volatile bool*>(this, "FBuildDistanceFieldThreadRunnable.bIsRunning"); }
	volatile bool& bForceFinishField() { return *GetNativePointerField<volatile bool*>(this, "FBuildDistanceFieldThreadRunnable.bForceFinish"); }
};

