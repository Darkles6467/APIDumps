#pragma once

#include "BaseDeclarations.h"
struct FSubUVMovieParticlePayload
{
	char __padding[0x4L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FSubUVMovieParticlePayload.Time"); }
};

