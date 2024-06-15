#pragma once

#include "BaseDeclarations.h"
struct FTranslucencyShadowProjectionShaderParameters
{
	char __padding[0x10L];

	// Functions

	void Set(FRHICommandList * RHICmdList, FShader * Shader) { NativeCall<void, FRHICommandList *, FShader *>(this, "FTranslucencyShadowProjectionShaderParameters.Set", RHICmdList, Shader); }
};

