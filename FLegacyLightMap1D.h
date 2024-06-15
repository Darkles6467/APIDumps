#pragma once

#include "BaseDeclarations.h"
#include "FLightMap.h"
#include "FDeferredCleanupInterface.h"

struct FLegacyLightMap1D : FLightMap
{

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLegacyLightMap1D.Serialize", Ar); }
};

