#pragma once

#include "BaseDeclarations.h"
struct FStaticLightingPrimitiveInfo
{
	char __padding[0x28L];
	int& VisibilityIdField() { return *GetNativePointerField<int*>(this, "FStaticLightingPrimitiveInfo.VisibilityId"); }
};

