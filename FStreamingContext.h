#pragma once

#include "BaseDeclarations.h"
struct FStreamingContext
{
	char __padding[0x80L];
	bool& bRHISupportsMemoryStatsField() { return *GetNativePointerField<bool*>(this, "FStreamingContext.bRHISupportsMemoryStats"); }
	__int64& AllocatedMemorySizeField() { return *GetNativePointerField<__int64*>(this, "FStreamingContext.AllocatedMemorySize"); }
	__int64& AvailableMemorySizeField() { return *GetNativePointerField<__int64*>(this, "FStreamingContext.AvailableMemorySize"); }
	int& PendingMemoryAdjustmentField() { return *GetNativePointerField<int*>(this, "FStreamingContext.PendingMemoryAdjustment"); }
	bool& bCollectTextureStatsField() { return *GetNativePointerField<bool*>(this, "FStreamingContext.bCollectTextureStats"); }
	unsigned int& ThisFrameTotalRequestSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalRequestSize"); }
	unsigned int& ThisFrameTotalLightmapRequestSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalLightmapRequestSize"); }
	unsigned int& ThisFrameNumStreamingTexturesField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameNumStreamingTextures"); }
	unsigned int& ThisFrameNumRequestsInCancelationPhaseField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameNumRequestsInCancelationPhase"); }
	unsigned int& ThisFrameNumRequestsInUpdatePhaseField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameNumRequestsInUpdatePhase"); }
	unsigned int& ThisFrameNumRequestsInFinalizePhaseField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameNumRequestsInFinalizePhase"); }
	unsigned int& ThisFrameTotalIntermediateTexturesSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalIntermediateTexturesSize"); }
	unsigned int& ThisFrameNumIntermediateTexturesField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameNumIntermediateTextures"); }
	unsigned int& ThisFrameTotalStreamingTexturesSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalStreamingTexturesSize"); }
	unsigned int& ThisFrameTotalStreamingTexturesMaxSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalStreamingTexturesMaxSize"); }
	unsigned int& ThisFrameTotalLightmapMemorySizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalLightmapMemorySize"); }
	unsigned int& ThisFrameTotalLightmapDiskSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalLightmapDiskSize"); }
	unsigned int& ThisFrameTotalMipCountIncreaseRequestsInFlightField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalMipCountIncreaseRequestsInFlight"); }
	unsigned int& ThisFrameOptimalWantedSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameOptimalWantedSize"); }
	unsigned int& ThisFrameTotalStaticTextureHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalStaticTextureHeuristicSize"); }
	unsigned int& ThisFrameTotalDynamicTextureHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalDynamicTextureHeuristicSize"); }
	unsigned int& ThisFrameTotalLastRenderHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalLastRenderHeuristicSize"); }
	unsigned int& ThisFrameTotalForcedHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingContext.ThisFrameTotalForcedHeuristicSize"); }
	__int64& AvailableNowField() { return *GetNativePointerField<__int64*>(this, "FStreamingContext.AvailableNow"); }
	__int64& AvailableLaterField() { return *GetNativePointerField<__int64*>(this, "FStreamingContext.AvailableLater"); }
	__int64& AvailableTempMemoryField() { return *GetNativePointerField<__int64*>(this, "FStreamingContext.AvailableTempMemory"); }
};

