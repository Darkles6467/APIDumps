#pragma once

#include "BaseDeclarations.h"
struct FMorphGPUSkinVertex
{
	char __padding[0x10L];
	FVector& DeltaPositionField() { return *GetNativePointerField<FVector*>(this, "FMorphGPUSkinVertex.DeltaPosition"); }
	FPackedNormal& DeltaTangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FMorphGPUSkinVertex.DeltaTangentZ"); }
};

