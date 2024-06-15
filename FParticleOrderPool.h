#pragma once

#include "BaseDeclarations.h"
struct FParticleOrderPool
{
	char __padding[0x10L];
	FParticleOrder * ParticleOrderField() { return GetNativePointerField<FParticleOrder *>(this, "FParticleOrderPool.ParticleOrder"); }
	int& CurrentSizeField() { return *GetNativePointerField<int*>(this, "FParticleOrderPool.CurrentSize"); }
	int& MaxSizeField() { return *GetNativePointerField<int*>(this, "FParticleOrderPool.MaxSize"); }
};

