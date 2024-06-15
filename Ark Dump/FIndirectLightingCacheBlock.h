#pragma once

#include "BaseDeclarations.h"
struct FIndirectLightingCacheBlock
{
	char __padding[0x2cL];
	FIntVector& MinTexelField() { return *GetNativePointerField<FIntVector*>(this, "FIndirectLightingCacheBlock.MinTexel"); }
	int& TexelSizeField() { return *GetNativePointerField<int*>(this, "FIndirectLightingCacheBlock.TexelSize"); }
	FVector& MinField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheBlock.Min"); }
	FVector& SizeField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheBlock.Size"); }
	bool& bHasEverBeenUpdatedField() { return *GetNativePointerField<bool*>(this, "FIndirectLightingCacheBlock.bHasEverBeenUpdated"); }
};

