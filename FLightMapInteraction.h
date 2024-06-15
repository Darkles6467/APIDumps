#pragma once

#include "BaseDeclarations.h"
struct FLightMapInteraction
{
	char __padding[0xc0L];
	FieldArray<FVector4[2], 42> HighQualityCoefficientScalesField() { return {this, "FLightMapInteraction.HighQualityCoefficientScales"}; }
	FieldArray<FVector4[2], 42> HighQualityCoefficientAddsField() { return {this, "FLightMapInteraction.HighQualityCoefficientAdds"}; }
	const ULightMapTexture2D * HighQualityTextureField() { return GetNativePointerField<const ULightMapTexture2D *>(this, "FLightMapInteraction.HighQualityTexture"); }
	const ULightMapTexture2D * SkyOcclusionTextureField() { return GetNativePointerField<const ULightMapTexture2D *>(this, "FLightMapInteraction.SkyOcclusionTexture"); }
	FieldArray<FVector4[2], 42> LowQualityCoefficientScalesField() { return {this, "FLightMapInteraction.LowQualityCoefficientScales"}; }
	FieldArray<FVector4[2], 42> LowQualityCoefficientAddsField() { return {this, "FLightMapInteraction.LowQualityCoefficientAdds"}; }
	const ULightMapTexture2D * LowQualityTextureField() { return GetNativePointerField<const ULightMapTexture2D *>(this, "FLightMapInteraction.LowQualityTexture"); }
	bool& bAllowHighQualityLightMapsField() { return *GetNativePointerField<bool*>(this, "FLightMapInteraction.bAllowHighQualityLightMaps"); }
	unsigned int& NumLightmapCoefficientsField() { return *GetNativePointerField<unsigned int*>(this, "FLightMapInteraction.NumLightmapCoefficients"); }
	ELightMapInteractionType& TypeField() { return *GetNativePointerField<ELightMapInteractionType*>(this, "FLightMapInteraction.Type"); }
	FVector2D& CoordinateScaleField() { return *GetNativePointerField<FVector2D*>(this, "FLightMapInteraction.CoordinateScale"); }
	FVector2D& CoordinateBiasField() { return *GetNativePointerField<FVector2D*>(this, "FLightMapInteraction.CoordinateBias"); }

	// Functions

};

