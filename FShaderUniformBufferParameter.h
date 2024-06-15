#pragma once

#include "BaseDeclarations.h"
struct FShaderUniformBufferParameter
{
	char __padding[0x8L];
	unsigned int& SetParametersIdField() { return *GetNativePointerField<unsigned int*>(this, "FShaderUniformBufferParameter.SetParametersId"); }
	unsigned __int16& BaseIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FShaderUniformBufferParameter.BaseIndex"); }
	bool& bIsBoundField() { return *GetNativePointerField<bool*>(this, "FShaderUniformBufferParameter.bIsBound"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap, const wchar_t * ParameterName, EShaderParameterFlags Flags) { NativeCall<void, const FShaderParameterMap *, const wchar_t *, EShaderParameterFlags>(this, "FShaderUniformBufferParameter.Bind", ParameterMap, ParameterName, Flags); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FShaderUniformBufferParameter.Serialize", Ar); }
};

