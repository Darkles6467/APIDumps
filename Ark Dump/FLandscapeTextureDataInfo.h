#pragma once

#include "BaseDeclarations.h"
struct FLandscapeTextureDataInfo
{
	char __padding[0x20L];
	TArray<FLandscapeTextureDataInfo::FMipInfo>& MipInfoField() { return *GetNativePointerField<TArray<FLandscapeTextureDataInfo::FMipInfo>*>(this, "FLandscapeTextureDataInfo.MipInfo"); }

	// Functions

	void AddMipUpdateRegion(int MipNum, int InX1, int InY1, int InX2, int InY2) { NativeCall<void, int, int, int, int, int>(this, "FLandscapeTextureDataInfo.AddMipUpdateRegion", MipNum, InX1, InY1, InX2, InY2); }
};

