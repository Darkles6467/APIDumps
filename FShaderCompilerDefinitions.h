#pragma once

#include "BaseDeclarations.h"
struct FShaderCompilerDefinitions
{
	char __padding[0x50L];

	// Functions

	void SetDefine(const wchar_t * Name, const wchar_t * Value) { NativeCall<void, const wchar_t *, const wchar_t *>(this, "FShaderCompilerDefinitions.SetDefine", Name, Value); }
	void SetDefine(const wchar_t * Name, unsigned int Value) { NativeCall<void, const wchar_t *, unsigned int>(this, "FShaderCompilerDefinitions.SetDefine", Name, Value); }
	void SetFloatDefine(const wchar_t * Name, float Value) { NativeCall<void, const wchar_t *, float>(this, "FShaderCompilerDefinitions.SetFloatDefine", Name, Value); }
};

