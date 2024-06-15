#pragma once

#include "BaseDeclarations.h"
struct FSlateRenderingPolicy
{
	char __padding[0x10L];
	float& PixelCenterOffsetField() { return *GetNativePointerField<float*>(this, "FSlateRenderingPolicy.PixelCenterOffset"); }
};

