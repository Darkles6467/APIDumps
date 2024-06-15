#pragma once

#include "BaseDeclarations.h"
struct FTrueSkyShaderParameters
{
	char __padding[0x10L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FTrueSkyShaderParameters.Bind", ParameterMap); }
	void Set(FRHICommandList * RHICmdList, FRHIPixelShader *const ShaderRHI, FSceneView * View) { NativeCall<void, FRHICommandList *, FRHIPixelShader *const, FSceneView *>(this, "FTrueSkyShaderParameters.Set", RHICmdList, ShaderRHI, View); }
};

