#pragma once

#include "BaseDeclarations.h"
#include "FShader.h"

struct FMaterialShader : FShader
{
	char __padding[0x1e8L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FMaterialShader.DeferredParameters"); }
	FAtmosphereShaderTextureParameters& AtmosphericFogTextureParametersField() { return *GetNativePointerField<FAtmosphereShaderTextureParameters*>(this, "FMaterialShader.AtmosphericFogTextureParameters"); }
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FMaterialShader.PostprocessParameter"); }
	FDebugUniformExpressionSet& DebugUniformExpressionSetField() { return *GetNativePointerField<FDebugUniformExpressionSet*>(this, "FMaterialShader.DebugUniformExpressionSet"); }
	FString& DebugDescriptionField() { return *GetNativePointerField<FString*>(this, "FMaterialShader.DebugDescription"); }

	// Functions

	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FMaterialShader.GetAllocatedSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FMaterialShader.Serialize", Ar); }
};

