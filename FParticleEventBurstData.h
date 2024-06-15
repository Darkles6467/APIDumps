#pragma once

#include "BaseDeclarations.h"
#include "FParticleEventData.h"

struct FParticleEventBurstData : FParticleEventData
{
	char __padding[0x8L];
	int& ParticleCountField() { return *GetNativePointerField<int*>(this, "FParticleEventBurstData.ParticleCount"); }
};

