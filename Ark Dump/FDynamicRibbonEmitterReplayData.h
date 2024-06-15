#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterReplayDataBase.h"
#include "FDynamicEmitterReplayDataBase.h"

struct FDynamicTrailsEmitterReplayData : FDynamicSpriteEmitterReplayDataBase
{
	char __padding[0x20L];
	int& PrimitiveCountField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.PrimitiveCount"); }
	int& VertexCountField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.VertexCount"); }
	int& IndexCountField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.IndexCount"); }
	int& IndexStrideField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.IndexStride"); }
	int& TrailDataOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.TrailDataOffset"); }
	int& MaxActiveParticleCountField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.MaxActiveParticleCount"); }
	int& TrailCountField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.TrailCount"); }
	int& SheetsField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterReplayData.Sheets"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicTrailsEmitterReplayData.Serialize", Ar); }
};

struct FDynamicRibbonEmitterReplayData : FDynamicTrailsEmitterReplayData
{
	char __padding[0x8L];
	int& MaxTessellationBetweenParticlesField() { return *GetNativePointerField<int*>(this, "FDynamicRibbonEmitterReplayData.MaxTessellationBetweenParticles"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicRibbonEmitterReplayData.Serialize", Ar); }
};

