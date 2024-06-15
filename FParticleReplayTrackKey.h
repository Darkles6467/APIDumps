#pragma once

#include "BaseDeclarations.h"
struct FParticleReplayTrackKey
{
	char __padding[0xcL];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FParticleReplayTrackKey.Time"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FParticleReplayTrackKey.Duration"); }
	int& ClipIDNumberField() { return *GetNativePointerField<int*>(this, "FParticleReplayTrackKey.ClipIDNumber"); }

	// Functions

};

