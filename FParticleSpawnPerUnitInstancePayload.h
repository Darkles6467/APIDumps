#pragma once

#include "BaseDeclarations.h"
struct FParticleSpawnPerUnitInstancePayload
{
	char __padding[0x4L];
	float& CurrentDistanceTravelledField() { return *GetNativePointerField<float*>(this, "FParticleSpawnPerUnitInstancePayload.CurrentDistanceTravelled"); }
};

