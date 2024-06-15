#pragma once

#include "BaseDeclarations.h"
struct FShaderCompilerOutput
{
	char __padding[0x98L];
	TArray<unsigned char>& CodeField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FShaderCompilerOutput.Code"); }
	FSHAHash& OutputHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderCompilerOutput.OutputHash"); }
	unsigned int& NumInstructionsField() { return *GetNativePointerField<unsigned int*>(this, "FShaderCompilerOutput.NumInstructions"); }
	unsigned int& NumTextureSamplersField() { return *GetNativePointerField<unsigned int*>(this, "FShaderCompilerOutput.NumTextureSamplers"); }
	bool& bSucceededField() { return *GetNativePointerField<bool*>(this, "FShaderCompilerOutput.bSucceeded"); }

	// Functions

	void GenerateOutputHash() { NativeCall<void>(this, "FShaderCompilerOutput.GenerateOutputHash"); }
};

