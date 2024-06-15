#pragma once

#include "BaseDeclarations.h"
struct FCurveSamples
{
	char __padding[0x10L];
	FColor * SamplesField() { return GetNativePointerField<FColor *>(this, "FCurveSamples.Samples"); }
	FTexelAllocation& TexelAllocationField() { return *GetNativePointerField<FTexelAllocation*>(this, "FCurveSamples.TexelAllocation"); }
};

