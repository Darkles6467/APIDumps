#pragma once

#include "BaseDeclarations.h"
struct FBeamParticleSourceBranchPayloadData
{
	char __padding[0x4L];
	int& NoiseIndexField() { return *GetNativePointerField<int*>(this, "FBeamParticleSourceBranchPayloadData.NoiseIndex"); }
};

