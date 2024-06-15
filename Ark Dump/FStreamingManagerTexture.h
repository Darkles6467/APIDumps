#pragma once

#include "BaseDeclarations.h"
#include "IStreamingManager.h"

struct ITextureStreamingManager : IStreamingManager
{
};

struct FStreamingManagerTexture : ITextureStreamingManager
{
	char __padding[0x250L];
	FStreamingManagerTexture::FThreadSettings& ThreadSettingsField() { return *GetNativePointerField<FStreamingManagerTexture::FThreadSettings*>(this, "FStreamingManagerTexture.ThreadSettings"); }
	TArray<FStreamingTexture>& StreamingTexturesField() { return *GetNativePointerField<TArray<FStreamingTexture>*>(this, "FStreamingManagerTexture.StreamingTextures"); }
	int& CurrentUpdateStreamingTextureIndexField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.CurrentUpdateStreamingTextureIndex"); }
	bool& bTriggerDumpTextureGroupStatsField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bTriggerDumpTextureGroupStats"); }
	bool& bDetailedDumpTextureGroupStatsField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bDetailedDumpTextureGroupStats"); }
	bool& bTriggerInvestigateTextureField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bTriggerInvestigateTexture"); }
	FString& InvestigateTextureNameField() { return *GetNativePointerField<FString*>(this, "FStreamingManagerTexture.InvestigateTextureName"); }
	FAsyncTask<FAsyncTextureStreaming> * AsyncWorkField() { return GetNativePointerField<FAsyncTask<FAsyncTextureStreaming> *>(this, "FStreamingManagerTexture.AsyncWork"); }
	TArray<ULevel *>& PendingLevelsField() { return *GetNativePointerField<TArray<ULevel *>*>(this, "FStreamingManagerTexture.PendingLevels"); }
	int& ProcessingStageField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.ProcessingStage"); }
	int& NumTextureProcessingStagesField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.NumTextureProcessingStages"); }
	int& MaxTempMemoryUsedField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.MaxTempMemoryUsed"); }
	bool& bUseDynamicStreamingField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bUseDynamicStreaming"); }
	float& BoostPlayerTexturesField() { return *GetNativePointerField<float*>(this, "FStreamingManagerTexture.BoostPlayerTextures"); }
	int& MemoryMarginField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.MemoryMargin"); }
	int& MinEvictSizeField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.MinEvictSize"); }
	unsigned int& NumStreamingTexturesField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.NumStreamingTextures"); }
	unsigned int& NumRequestsInCancelationPhaseField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.NumRequestsInCancelationPhase"); }
	unsigned int& NumRequestsInUpdatePhaseField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.NumRequestsInUpdatePhase"); }
	unsigned int& NumRequestsInFinalizePhaseField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.NumRequestsInFinalizePhase"); }
	unsigned int& TotalIntermediateTexturesSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalIntermediateTexturesSize"); }
	unsigned int& NumIntermediateTexturesField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.NumIntermediateTextures"); }
	unsigned int& TotalStreamingTexturesSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalStreamingTexturesSize"); }
	unsigned int& TotalStreamingTexturesMaxSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalStreamingTexturesMaxSize"); }
	unsigned int& TotalLightmapMemorySizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalLightmapMemorySize"); }
	unsigned int& TotalLightmapDiskSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalLightmapDiskSize"); }
	unsigned int& TotalMipCountIncreaseRequestsInFlightField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalMipCountIncreaseRequestsInFlight"); }
	unsigned int& TotalOptimalWantedSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalOptimalWantedSize"); }
	unsigned int& TotalStaticTextureHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalStaticTextureHeuristicSize"); }
	unsigned int& TotalDynamicTextureHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalDynamicTextureHeuristicSize"); }
	unsigned int& TotalLastRenderHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalLastRenderHeuristicSize"); }
	unsigned int& TotalForcedHeuristicSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStreamingManagerTexture.TotalForcedHeuristicSize"); }
	__int64& OriginalTexturePoolSizeField() { return *GetNativePointerField<__int64*>(this, "FStreamingManagerTexture.OriginalTexturePoolSize"); }
	long double& PreviousPoolSizeTimestampField() { return *GetNativePointerField<long double*>(this, "FStreamingManagerTexture.PreviousPoolSizeTimestamp"); }
	int& PreviousPoolSizeSettingField() { return *GetNativePointerField<int*>(this, "FStreamingManagerTexture.PreviousPoolSizeSetting"); }
	bool& bCollectTextureStatsField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bCollectTextureStats"); }
	bool& bReportTextureStatsField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bReportTextureStats"); }
	TArray<FString>& TextureStatsReportField() { return *GetNativePointerField<TArray<FString>*>(this, "FStreamingManagerTexture.TextureStatsReport"); }
	FString& CollectTextureStatsNameField() { return *GetNativePointerField<FString*>(this, "FStreamingManagerTexture.CollectTextureStatsName"); }
	bool& bPauseTextureStreamingField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerTexture.bPauseTextureStreaming"); }
	__int64& EffectiveStreamingPoolSizeField() { return *GetNativePointerField<__int64*>(this, "FStreamingManagerTexture.EffectiveStreamingPoolSize"); }
};

