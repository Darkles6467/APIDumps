#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FAccumulateDiffuseIrradiancePS : FGlobalShader
{
	char __padding[0x20L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FAccumulateDiffuseIrradiancePS.Serialize", Ar); }
};

