#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FVisualizeTexturePresentPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FVisualizeTexturePresentPS.Serialize", Ar); }
};

