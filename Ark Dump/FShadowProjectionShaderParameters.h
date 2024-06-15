#pragma once

#include "BaseDeclarations.h"
struct FShadowProjectionShaderParameters
{
	char __padding[0xa4L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FShadowProjectionShaderParameters.DeferredParameters"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FShadowProjectionShaderParameters.Bind", ParameterMap); }
	void Set(FRHICommandList * RHICmdList, FShader * Shader, FSceneView * View, const FProjectedShadowInfo * ShadowInfo) { NativeCall<void, FRHICommandList *, FShader *, FSceneView *, const FProjectedShadowInfo *>(this, "FShadowProjectionShaderParameters.Set", RHICmdList, Shader, View, ShadowInfo); }
};

