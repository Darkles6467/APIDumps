#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShaderComplexityAccumulatePS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FShaderComplexityAccumulatePS.GetTypeSize"); }
};

