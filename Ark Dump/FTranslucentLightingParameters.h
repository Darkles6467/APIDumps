#pragma once

#include "BaseDeclarations.h"
struct FTranslucentLightingParameters
{
	char __padding[0x62L];
	FSkyLightReflectionParameters& SkyLightReflectionParametersField() { return *GetNativePointerField<FSkyLightReflectionParameters*>(this, "FTranslucentLightingParameters.SkyLightReflectionParameters"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FTranslucentLightingParameters.Bind", ParameterMap); }
	void Set(FRHICommandList * RHICmdList, FShader * Shader, const FViewInfo * View) { NativeCall<void, FRHICommandList *, FShader *, const FViewInfo *>(this, "FTranslucentLightingParameters.Set", RHICmdList, Shader, View); }
	void SetMesh(FRHICommandList * RHICmdList, FShader * Shader, FPrimitiveSceneProxy * Proxy, FSceneView * View, ERHIFeatureLevel::Type FeatureLevel) { NativeCall<void, FRHICommandList *, FShader *, FPrimitiveSceneProxy *, FSceneView *, ERHIFeatureLevel::Type>(this, "FTranslucentLightingParameters.SetMesh", RHICmdList, Shader, Proxy, View, FeatureLevel); }
};

