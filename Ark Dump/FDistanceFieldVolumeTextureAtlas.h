#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FDistanceFieldVolumeTextureAtlas : FRenderResource
{
	char __padding[0xd0L];
	EPixelFormat& FormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FDistanceFieldVolumeTextureAtlas.Format"); }
	FTextureLayout3d& BlockAllocatorField() { return *GetNativePointerField<FTextureLayout3d*>(this, "FDistanceFieldVolumeTextureAtlas.BlockAllocator"); }
	TArray<FDistanceFieldVolumeTexture *>& PendingAllocationsField() { return *GetNativePointerField<TArray<FDistanceFieldVolumeTexture *>*>(this, "FDistanceFieldVolumeTextureAtlas.PendingAllocations"); }
	TArray<FDistanceFieldVolumeTexture *>& CurrentAllocationsField() { return *GetNativePointerField<TArray<FDistanceFieldVolumeTexture *>*>(this, "FDistanceFieldVolumeTextureAtlas.CurrentAllocations"); }
	int& GenerationField() { return *GetNativePointerField<int*>(this, "FDistanceFieldVolumeTextureAtlas.Generation"); }

	// Functions

	void ListMeshDistanceFields() { NativeCall<void>(this, "FDistanceFieldVolumeTextureAtlas.ListMeshDistanceFields"); }
	void UpdateAllocations() { NativeCall<void>(this, "FDistanceFieldVolumeTextureAtlas.UpdateAllocations"); }
};

