#pragma once

#include "BaseDeclarations.h"
struct FShaderResourceParameter
{
	char __padding[0x4L];
	unsigned __int16& BaseIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FShaderResourceParameter.BaseIndex"); }
	unsigned __int16& NumResourcesField() { return *GetNativePointerField<unsigned __int16*>(this, "FShaderResourceParameter.NumResources"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap, const wchar_t * ParameterName, EShaderParameterFlags Flags) { NativeCall<void, const FShaderParameterMap *, const wchar_t *, EShaderParameterFlags>(this, "FShaderResourceParameter.Bind", ParameterMap, ParameterName, Flags); }
};

