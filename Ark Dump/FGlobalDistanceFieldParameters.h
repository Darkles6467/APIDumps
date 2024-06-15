#pragma once

#include "BaseDeclarations.h"
struct FGlobalDistanceFieldParameters
{
	char __padding[0x3eL];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FGlobalDistanceFieldParameters.Bind", ParameterMap); }
};

