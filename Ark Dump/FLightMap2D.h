#pragma once

#include "BaseDeclarations.h"
#include "FLightMap.h"
#include "FDeferredCleanupInterface.h"

struct FLightMap2D : FLightMap
{
	char __padding[0xb0L];
	FieldArray<ULightMapTexture2D *[2], 22> TexturesField() { return {this, "FLightMap2D.Textures"}; }
	ULightMapTexture2D * SkyOcclusionTextureField() { return GetNativePointerField<ULightMapTexture2D *>(this, "FLightMap2D.SkyOcclusionTexture"); }
	FieldArray<FVector4[4], 44> ScaleVectorsField() { return {this, "FLightMap2D.ScaleVectors"}; }
	FieldArray<FVector4[4], 44> AddVectorsField() { return {this, "FLightMap2D.AddVectors"}; }
	FVector2D& CoordinateScaleField() { return *GetNativePointerField<FVector2D*>(this, "FLightMap2D.CoordinateScale"); }
	FVector2D& CoordinateBiasField() { return *GetNativePointerField<FVector2D*>(this, "FLightMap2D.CoordinateBias"); }

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FLightMap2D.AddReferencedObjects", Collector); }
	void FinalizeEncoding(const FVector2D * Scale, const FVector2D * Bias, UTexture2D * ALightmapTexture) { NativeCall<void, const FVector2D *, const FVector2D *, UTexture2D *>(this, "FLightMap2D.FinalizeEncoding", Scale, Bias, ALightmapTexture); }
	bool IsValid(unsigned int BasisIndex) { return NativeCall<bool, unsigned int>(this, "FLightMap2D.IsValid", BasisIndex); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLightMap2D.Serialize", Ar); }
};

