#pragma once

#include "BaseDeclarations.h"
struct FAssetWorldBoneTM
{
	char __padding[0x40L];
	FTransform& TMField() { return *GetNativePointerField<FTransform*>(this, "FAssetWorldBoneTM.TM"); }
	int& UpdateNumField() { return *GetNativePointerField<int*>(this, "FAssetWorldBoneTM.UpdateNum"); }
};

