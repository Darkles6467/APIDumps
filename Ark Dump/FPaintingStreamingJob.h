#pragma once

#include "BaseDeclarations.h"
struct FPaintingStreamingJob
{
	char __padding[0x40L];
	TArray<unsigned char>& ColorBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FPaintingStreamingJob.ColorBuffer"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FPaintingStreamingJob.Offset"); }
	int& RevisionField() { return *GetNativePointerField<int*>(this, "FPaintingStreamingJob.Revision"); }
	EPendingJobState::State& StateField() { return *GetNativePointerField<EPendingJobState::State*>(this, "FPaintingStreamingJob.State"); }
	long double& LastAccessTimeField() { return *GetNativePointerField<long double*>(this, "FPaintingStreamingJob.LastAccessTime"); }
	TWeakObjectPtr<UPaintingStreamingComponent>& StreamerField() { return *GetNativePointerField<TWeakObjectPtr<UPaintingStreamingComponent>*>(this, "FPaintingStreamingJob.Streamer"); }
	bool& bAwaitingChunkField() { return *GetNativePointerField<bool*>(this, "FPaintingStreamingJob.bAwaitingChunk"); }

	// Functions

	FPaintingStreamingJob * operator=(const FPaintingStreamingJob * __that) { return NativeCall<FPaintingStreamingJob *, const FPaintingStreamingJob *>(this, "FPaintingStreamingJob.operator=", __that); }
};

