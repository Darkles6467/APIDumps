#pragma once

#include "BaseDeclarations.h"
struct FSceneTextureShaderParameters
{
	char __padding[0x24L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FSceneTextureShaderParameters.Bind", ParameterMap); }
};

