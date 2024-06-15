#pragma once

#include "BaseDeclarations.h"
struct FWeightmapTextureAllocation
{
	char __padding[0x20L];
	int& XField() { return *GetNativePointerField<int*>(this, "FWeightmapTextureAllocation.X"); }
	int& YField() { return *GetNativePointerField<int*>(this, "FWeightmapTextureAllocation.Y"); }
	int& ChannelsInUseField() { return *GetNativePointerField<int*>(this, "FWeightmapTextureAllocation.ChannelsInUse"); }
	FColor * TextureDataField() { return GetNativePointerField<FColor *>(this, "FWeightmapTextureAllocation.TextureData"); }
};

