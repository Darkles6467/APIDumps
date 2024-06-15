#pragma once

#include "BaseDeclarations.h"
struct FFloatMipLevel
{
	char __padding[0x4L];
	float& MipLevelField() { return *GetNativePointerField<float*>(this, "FFloatMipLevel.MipLevel"); }
};

