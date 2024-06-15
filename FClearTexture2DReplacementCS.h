#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FClearTexture2DReplacementCS : FGlobalShader
{
	char __padding[0x10L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FClearTexture2DReplacementCS.Serialize", Ar); }
};

