#pragma once

#include "BaseDeclarations.h"
struct FParticleOrder
{
	char __padding[0x8L];
	int& ParticleIndexField() { return *GetNativePointerField<int*>(this, "FParticleOrder.ParticleIndex"); }
};

