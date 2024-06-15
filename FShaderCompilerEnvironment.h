#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FShaderCompilerEnvironment : FRefCountedObject
{
	char __padding[0x1a0L];
	TArray<unsigned int>& CompilerFlagsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FShaderCompilerEnvironment.CompilerFlags"); }

	// Functions

	void Merge(const FShaderCompilerEnvironment * Other) { NativeCall<void, const FShaderCompilerEnvironment *>(this, "FShaderCompilerEnvironment.Merge", Other); }
};

