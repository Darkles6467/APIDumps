#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDownsamplePS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FDownsamplePS.Serialize", Ar); }
};

struct FCubeFilterPS : FDownsamplePS
{
	char __padding[0x8L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCubeFilterPS.Serialize", Ar); }
};

