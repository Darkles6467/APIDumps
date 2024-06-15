#pragma once

#include "BaseDeclarations.h"
struct FBlockUpdateInfo
{
	char __padding[0x38L];
	FIndirectLightingCacheBlock& BlockField() { return *GetNativePointerField<FIndirectLightingCacheBlock*>(this, "FBlockUpdateInfo.Block"); }
	FIndirectLightingCacheAllocation * AllocationField() { return GetNativePointerField<FIndirectLightingCacheAllocation *>(this, "FBlockUpdateInfo.Allocation"); }
};

