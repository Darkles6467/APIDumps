#pragma once

#include "BaseDeclarations.h"
struct FItemInfo
{
	char __padding[0x8L];
	int& NestingLevelField() { return *GetNativePointerField<int*>(this, "FItemInfo.NestingLevel"); }
	bool& bHasChildrenField() { return *GetNativePointerField<bool*>(this, "FItemInfo.bHasChildren"); }
};

