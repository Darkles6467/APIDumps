#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FDistanceFieldVolumeData : FDeferredCleanupInterface
{
	char __padding[0x60L];
	TArray<FFloat16>& DistanceFieldVolumeField() { return *GetNativePointerField<TArray<FFloat16>*>(this, "FDistanceFieldVolumeData.DistanceFieldVolume"); }
	FIntVector& SizeField() { return *GetNativePointerField<FIntVector*>(this, "FDistanceFieldVolumeData.Size"); }
	FBox& LocalBoundingBoxField() { return *GetNativePointerField<FBox*>(this, "FDistanceFieldVolumeData.LocalBoundingBox"); }
	bool& bMeshWasClosedField() { return *GetNativePointerField<bool*>(this, "FDistanceFieldVolumeData.bMeshWasClosed"); }
	bool& bBuiltAsIfTwoSidedField() { return *GetNativePointerField<bool*>(this, "FDistanceFieldVolumeData.bBuiltAsIfTwoSided"); }
	bool& bMeshWasPlaneField() { return *GetNativePointerField<bool*>(this, "FDistanceFieldVolumeData.bMeshWasPlane"); }
	FDistanceFieldVolumeTexture& VolumeTextureField() { return *GetNativePointerField<FDistanceFieldVolumeTexture*>(this, "FDistanceFieldVolumeData.VolumeTexture"); }

	// Functions

};

