#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterReplayDataBase.h"
#include "FDynamicEmitterReplayDataBase.h"

struct FDynamicBeam2EmitterReplayData : FDynamicSpriteEmitterReplayDataBase
{
	char __padding[0x90L];
	int& VertexCountField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.VertexCount"); }
	int& IndexCountField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.IndexCount"); }
	int& IndexStrideField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.IndexStride"); }
	TArray<int>& TrianglesPerSheetField() { return *GetNativePointerField<TArray<int>*>(this, "FDynamicBeam2EmitterReplayData.TrianglesPerSheet"); }
	int& UpVectorStepSizeField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.UpVectorStepSize"); }
	int& BeamDataOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.BeamDataOffset"); }
	int& InterpolatedPointsOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.InterpolatedPointsOffset"); }
	int& NoiseRateOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.NoiseRateOffset"); }
	int& NoiseDeltaTimeOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.NoiseDeltaTimeOffset"); }
	int& TargetNoisePointsOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.TargetNoisePointsOffset"); }
	int& NextNoisePointsOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.NextNoisePointsOffset"); }
	int& TaperValuesOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.TaperValuesOffset"); }
	int& NoiseDistanceScaleOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.NoiseDistanceScaleOffset"); }
	bool& bLowFreqNoise_EnabledField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bLowFreqNoise_Enabled"); }
	bool& bHighFreqNoise_EnabledField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bHighFreqNoise_Enabled"); }
	bool& bSmoothNoise_EnabledField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bSmoothNoise_Enabled"); }
	bool& bUseSourceField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bUseSource"); }
	bool& bUseTargetField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bUseTarget"); }
	bool& bTargetNoiseField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bTargetNoise"); }
	int& SheetsField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.Sheets"); }
	int& FrequencyField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.Frequency"); }
	int& NoiseTessellationField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.NoiseTessellation"); }
	float& NoiseRangeScaleField() { return *GetNativePointerField<float*>(this, "FDynamicBeam2EmitterReplayData.NoiseRangeScale"); }
	float& NoiseTangentStrengthField() { return *GetNativePointerField<float*>(this, "FDynamicBeam2EmitterReplayData.NoiseTangentStrength"); }
	FVector& NoiseSpeedField() { return *GetNativePointerField<FVector*>(this, "FDynamicBeam2EmitterReplayData.NoiseSpeed"); }
	float& NoiseLockTimeField() { return *GetNativePointerField<float*>(this, "FDynamicBeam2EmitterReplayData.NoiseLockTime"); }
	float& NoiseLockRadiusField() { return *GetNativePointerField<float*>(this, "FDynamicBeam2EmitterReplayData.NoiseLockRadius"); }
	float& NoiseTensionField() { return *GetNativePointerField<float*>(this, "FDynamicBeam2EmitterReplayData.NoiseTension"); }
	int& TextureTileField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.TextureTile"); }
	float& TextureTileDistanceField() { return *GetNativePointerField<float*>(this, "FDynamicBeam2EmitterReplayData.TextureTileDistance"); }
	char& TaperMethodField() { return *GetNativePointerField<char*>(this, "FDynamicBeam2EmitterReplayData.TaperMethod"); }
	int& InterpolationPointsField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterReplayData.InterpolationPoints"); }
	bool& bRenderGeometryField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bRenderGeometry"); }
	bool& bRenderDirectLineField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bRenderDirectLine"); }
	bool& bRenderLinesField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bRenderLines"); }
	bool& bRenderTessellationField() { return *GetNativePointerField<bool*>(this, "FDynamicBeam2EmitterReplayData.bRenderTessellation"); }

	// Functions

	FDynamicBeam2EmitterReplayData * operator=(const FDynamicBeam2EmitterReplayData * __that) { return NativeCall<FDynamicBeam2EmitterReplayData *, const FDynamicBeam2EmitterReplayData *>(this, "FDynamicBeam2EmitterReplayData.operator=", __that); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicBeam2EmitterReplayData.Serialize", Ar); }
};

