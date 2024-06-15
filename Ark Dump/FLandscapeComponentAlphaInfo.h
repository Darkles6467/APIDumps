#pragma once

#include "BaseDeclarations.h"
struct FLandscapeComponentAlphaInfo
{
	char __padding[0x18L];
	int& LayerIndexField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentAlphaInfo.LayerIndex"); }
	TArray<unsigned char>& AlphaValuesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLandscapeComponentAlphaInfo.AlphaValues"); }
};

