#pragma once

#include "BaseDeclarations.h"
struct FBeamParticleSourceTargetPayloadData
{
	char __padding[0x4L];
	int& ParticleIndexField() { return *GetNativePointerField<int*>(this, "FBeamParticleSourceTargetPayloadData.ParticleIndex"); }
};

