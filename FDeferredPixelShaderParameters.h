#pragma once

#include "BaseDeclarations.h"
struct FDeferredPixelShaderParameters
{
	char __padding[0x78L];
	FSceneTextureShaderParameters& SceneTextureParametersField() { return *GetNativePointerField<FSceneTextureShaderParameters*>(this, "FDeferredPixelShaderParameters.SceneTextureParameters"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FDeferredPixelShaderParameters.Bind", ParameterMap); }
};

