#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FAccumulateCubeFacesPS : FGlobalShader
{
	char __padding[0x10L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FAccumulateCubeFacesPS.Serialize", Ar); }
};

