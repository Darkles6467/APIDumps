#pragma once

#include "BaseDeclarations.h"
struct FTimeSample
{
	char __padding[0x8L];
	float& TotalTimeField() { return *GetNativePointerField<float*>(this, "FTimeSample.TotalTime"); }
	float& NormalizedTimeField() { return *GetNativePointerField<float*>(this, "FTimeSample.NormalizedTime"); }
};

