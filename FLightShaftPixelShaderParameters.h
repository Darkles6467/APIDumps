#pragma once

#include "BaseDeclarations.h"
struct FLightShaftPixelShaderParameters
{
	char __padding[0x4aL];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FLightShaftPixelShaderParameters.Bind", ParameterMap); }
};

