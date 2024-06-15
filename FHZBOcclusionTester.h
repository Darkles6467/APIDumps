#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FHZBOcclusionTester : FRenderResource
{
	char __padding[0x28L];
	const char * ResultsBufferField() { return GetNativePointerField<const char *>(this, "FHZBOcclusionTester.ResultsBuffer"); }
	unsigned int& ValidFrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FHZBOcclusionTester.ValidFrameNumber"); }

	// Functions

	unsigned int AddBounds(const FVector * BoundsCenter, const FVector * BoundsExtent) { return NativeCall<unsigned int, const FVector *, const FVector *>(this, "FHZBOcclusionTester.AddBounds", BoundsCenter, BoundsExtent); }
	void InitDynamicRHI() { NativeCall<void>(this, "FHZBOcclusionTester.InitDynamicRHI"); }
	void MapResults(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FHZBOcclusionTester.MapResults", RHICmdList); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FHZBOcclusionTester.ReleaseDynamicRHI"); }
	void Submit(FRHICommandListImmediate * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *>(this, "FHZBOcclusionTester.Submit", RHICmdList, View); }
	void UnmapResults(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FHZBOcclusionTester.UnmapResults", RHICmdList); }
};

