#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncMeshStreaming : FNonAbandonableTask
{
	char __padding[0x18L];
	TArray<FDynamicMeshMetaInfo> * PrioritizedMeshesField() { return GetNativePointerField<TArray<FDynamicMeshMetaInfo> *>(this, "FAsyncMeshStreaming.PrioritizedMeshes"); }
	FStreamingManagerMesh * StreamingManagerField() { return GetNativePointerField<FStreamingManagerMesh *>(this, "FAsyncMeshStreaming.StreamingManager"); }
	volatile bool& bAbortField() { return *GetNativePointerField<volatile bool*>(this, "FAsyncMeshStreaming.bAbort"); }
};

