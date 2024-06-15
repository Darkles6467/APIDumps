#pragma once

#include "BaseDeclarations.h"
struct FParticleEmitterReplayFrame
{
	char __padding[0x10L];
	int& EmitterTypeField() { return *GetNativePointerField<int*>(this, "FParticleEmitterReplayFrame.EmitterType"); }
	int& OriginalEmitterIndexField() { return *GetNativePointerField<int*>(this, "FParticleEmitterReplayFrame.OriginalEmitterIndex"); }

	// Functions

};

