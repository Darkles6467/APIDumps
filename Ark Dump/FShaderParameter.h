#pragma once

#include "BaseDeclarations.h"
struct FShaderParameter
{
	char __padding[0x6L];
	unsigned __int16& BufferIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FShaderParameter.BufferIndex"); }
	unsigned __int16& BaseIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FShaderParameter.BaseIndex"); }
	unsigned __int16& NumBytesField() { return *GetNativePointerField<unsigned __int16*>(this, "FShaderParameter.NumBytes"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap, const wchar_t * ParameterName, EShaderParameterFlags Flags) { NativeCall<void, const FShaderParameterMap *, const wchar_t *, EShaderParameterFlags>(this, "FShaderParameter.Bind", ParameterMap, ParameterName, Flags); }
};

