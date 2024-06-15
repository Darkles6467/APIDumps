#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopyDiffuseIrradiancePS : FGlobalShader
{
	char __padding[0x30L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopyDiffuseIrradiancePS.Serialize", Ar); }
};

