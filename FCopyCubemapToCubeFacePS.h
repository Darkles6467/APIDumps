#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopyCubemapToCubeFacePS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopyCubemapToCubeFacePS.Serialize", Ar); }
};

