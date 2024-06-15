#pragma once

#include "BaseDeclarations.h"
struct FHeightmapInfo
{
	char __padding[0x20L];
	int& HeightmapSizeUField() { return *GetNativePointerField<int*>(this, "FHeightmapInfo.HeightmapSizeU"); }
	int& HeightmapSizeVField() { return *GetNativePointerField<int*>(this, "FHeightmapInfo.HeightmapSizeV"); }
	TArray<FColor *>& HeightmapTextureMipDataField() { return *GetNativePointerField<TArray<FColor *>*>(this, "FHeightmapInfo.HeightmapTextureMipData"); }
};

