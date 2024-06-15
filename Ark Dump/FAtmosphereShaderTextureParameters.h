#pragma once

#include "BaseDeclarations.h"
struct FAtmosphereShaderTextureParameters
{
	char __padding[0x18L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FAtmosphereShaderTextureParameters.Bind", ParameterMap); }
};

