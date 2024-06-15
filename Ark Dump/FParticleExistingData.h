#pragma once

#include "BaseDeclarations.h"
#include "FParticleEventData.h"

struct FParticleExistingData : FParticleEventData
{
	char __padding[0x10L];
	float& ParticleTimeField() { return *GetNativePointerField<float*>(this, "FParticleExistingData.ParticleTime"); }
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "FParticleExistingData.Direction"); }
};

