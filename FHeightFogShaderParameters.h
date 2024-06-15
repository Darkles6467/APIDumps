#pragma once

#include "BaseDeclarations.h"
struct FHeightFogShaderParameters
{
	char __padding[0x1eL];
	FExponentialHeightFogShaderParameters<0>& ExponentialParametersField() { return *GetNativePointerField<FExponentialHeightFogShaderParameters<0>*>(this, "FHeightFogShaderParameters.ExponentialParameters"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FHeightFogShaderParameters.Bind", ParameterMap); }
};

