#pragma once

#include "BaseDeclarations.h"
#include "FNoLightMapPolicy.h"

struct FSelfShadowedTranslucencyPolicy : FNoLightMapPolicy
{

	// Functions

	void PixelParametersType(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FSelfShadowedTranslucencyPolicy.PixelParametersType", ParameterMap); }
	void PixelParametersType(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FSelfShadowedTranslucencyPolicy.PixelParametersType", Ar); }
};

struct FSelfShadowedCachedPointIndirectLightingPolicy : FSelfShadowedTranslucencyPolicy
{

	// Functions

	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FSelfShadowedCachedPointIndirectLightingPolicy.ShouldCache", Platform, Material, VertexFactoryType); }
};

