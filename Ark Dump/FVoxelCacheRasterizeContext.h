#pragma once

#include "BaseDeclarations.h"
struct FVoxelCacheRasterizeContext
{
	char __padding[0x8L];
	rcHeightfield * RasterizeHFField() { return GetNativePointerField<rcHeightfield *>(this, "FVoxelCacheRasterizeContext.RasterizeHF"); }
};

