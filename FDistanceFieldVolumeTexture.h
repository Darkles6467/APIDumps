#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldVolumeTexture
{
	char __padding[0x20L];
	FDistanceFieldVolumeData * VolumeDataField() { return GetNativePointerField<FDistanceFieldVolumeData *>(this, "FDistanceFieldVolumeTexture.VolumeData"); }
	FIntVector& AtlasAllocationMinField() { return *GetNativePointerField<FIntVector*>(this, "FDistanceFieldVolumeTexture.AtlasAllocationMin"); }
	bool& bReferencedByAtlasField() { return *GetNativePointerField<bool*>(this, "FDistanceFieldVolumeTexture.bReferencedByAtlas"); }
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FDistanceFieldVolumeTexture.StaticMesh"); }

	// Functions

	FIntVector * GetAllocationSize(FIntVector * result) { return NativeCall<FIntVector *, FIntVector *>(this, "FDistanceFieldVolumeTexture.GetAllocationSize", result); }
	void Initialize(UStaticMesh * InStaticMesh) { NativeCall<void, UStaticMesh *>(this, "FDistanceFieldVolumeTexture.Initialize", InStaticMesh); }
	bool IsValidDistanceFieldVolume() { return NativeCall<bool>(this, "FDistanceFieldVolumeTexture.IsValidDistanceFieldVolume"); }
	void Release() { NativeCall<void>(this, "FDistanceFieldVolumeTexture.Release"); }
};

