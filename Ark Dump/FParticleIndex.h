#pragma once

#include "BaseDeclarations.h"
struct FParticleIndex
{
	char __padding[0x4L];
	FFloat16& XField() { return *GetNativePointerField<FFloat16*>(this, "FParticleIndex.X"); }
	FFloat16& YField() { return *GetNativePointerField<FFloat16*>(this, "FParticleIndex.Y"); }
};

