#pragma once

#include "BaseDeclarations.h"
struct FCombinedShadowStats
{
	char __padding[0x28L];
	int& ShadowResolutionField() { return *GetNativePointerField<int*>(this, "FCombinedShadowStats.ShadowResolution"); }
	int& ShadowPassNumberField() { return *GetNativePointerField<int*>(this, "FCombinedShadowStats.ShadowPassNumber"); }
};

