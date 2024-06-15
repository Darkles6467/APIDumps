#pragma once

#include "BaseDeclarations.h"
struct FStencilingGeometryShaderParameters
{
	char __padding[0x18L];

	// Functions

	void Set(FRHICommandList * RHICmdList, FShader * Shader, FSceneView * View, const FLightSceneInfo * LightSceneInfo) { NativeCall<void, FRHICommandList *, FShader *, FSceneView *, const FLightSceneInfo *>(this, "FStencilingGeometryShaderParameters.Set", RHICmdList, Shader, View, LightSceneInfo); }
	void Set(FRHICommandList * RHICmdList, FShader * Shader, const FVector4 * InStencilingGeometryPosAndScale) { NativeCall<void, FRHICommandList *, FShader *, const FVector4 *>(this, "FStencilingGeometryShaderParameters.Set", RHICmdList, Shader, InStencilingGeometryPosAndScale); }
};

