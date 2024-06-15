#pragma once

#include "BaseDeclarations.h"
struct FShaderPipeConfig
{
	char __padding[0x8L];
	bool& bUseNamedPipesField() { return *GetNativePointerField<bool*>(this, "FShaderPipeConfig.bUseNamedPipes"); }
	bool& bUseNamedPipesAsyncField() { return *GetNativePointerField<bool*>(this, "FShaderPipeConfig.bUseNamedPipesAsync"); }
	bool& bSingleJobPerNamedPipeProcessField() { return *GetNativePointerField<bool*>(this, "FShaderPipeConfig.bSingleJobPerNamedPipeProcess"); }
	bool& bReuseNamedPipeAndProcessField() { return *GetNativePointerField<bool*>(this, "FShaderPipeConfig.bReuseNamedPipeAndProcess"); }
	int& PipeGuidField() { return *GetNativePointerField<int*>(this, "FShaderPipeConfig.PipeGuid"); }
};

