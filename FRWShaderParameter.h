#pragma once

#include "BaseDeclarations.h"
struct FRWShaderParameter
{
	char __padding[0x8L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap, const wchar_t * BaseName) { NativeCall<void, const FShaderParameterMap *, const wchar_t *>(this, "FRWShaderParameter.Bind", ParameterMap, BaseName); }
};

