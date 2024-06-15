#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncTextureStreaming : FNonAbandonableTask
{
	char __padding[0xe0L];
	FStreamingManagerTexture * StreamingManagerField() { return GetNativePointerField<FStreamingManagerTexture *>(this, "FAsyncTextureStreaming.StreamingManager"); }
	TArray<FTexturePriority>& PrioritizedTexturesField() { return *GetNativePointerField<TArray<FTexturePriority>*>(this, "FAsyncTextureStreaming.PrioritizedTextures"); }
	FStreamingContext& ThreadContextField() { return *GetNativePointerField<FStreamingContext*>(this, "FAsyncTextureStreaming.ThreadContext"); }
	FAsyncTextureStreaming::FThreadStats& ThreadStatsField() { return *GetNativePointerField<FAsyncTextureStreaming::FThreadStats*>(this, "FAsyncTextureStreaming.ThreadStats"); }
	volatile bool& bAbortField() { return *GetNativePointerField<volatile bool*>(this, "FAsyncTextureStreaming.bAbort"); }
};

