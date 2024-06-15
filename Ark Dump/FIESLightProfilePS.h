#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FIESLightProfilePS : FGlobalShader
{
	char __padding[0x10L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FIESLightProfilePS.Serialize", Ar); }
};

