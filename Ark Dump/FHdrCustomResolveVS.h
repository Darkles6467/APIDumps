#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHdrCustomResolveVS : FGlobalShader
{

	// Functions

	static bool ShouldCache(EShaderPlatform Platform) { return NativeCall<bool, EShaderPlatform>(nullptr, "FHdrCustomResolveVS.ShouldCache", Platform); }
};

