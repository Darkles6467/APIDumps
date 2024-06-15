#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FUpdateTexture2DSubresouceCS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FUpdateTexture2DSubresouceCS.Serialize", Ar); }
};

