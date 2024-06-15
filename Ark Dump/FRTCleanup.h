#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FRTCleanup : FDeferredCleanupInterface
{
	char __padding[0x8L];
	FTextureResource * ResourceField() { return GetNativePointerField<FTextureResource *>(this, "FRTCleanup.Resource"); }

	// Functions

};

