#pragma once

#include "BaseDeclarations.h"
struct FClothBonePlane
{
	char __padding[0x20L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FClothBonePlane.BoneIndex"); }
};

