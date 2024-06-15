#pragma once

#include "BaseDeclarations.h"
struct FCameraMotionParameters
{
	char __padding[0x6L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FCameraMotionParameters.Bind", ParameterMap); }
	void Set(FRHICommandList * RHICmdList, FSceneView * View, FRHIPixelShader *const ShaderRHI) { NativeCall<void, FRHICommandList *, FSceneView *, FRHIPixelShader *const>(this, "FCameraMotionParameters.Set", RHICmdList, View, ShaderRHI); }
};

