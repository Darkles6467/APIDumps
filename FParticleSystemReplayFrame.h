#pragma once

#include "BaseDeclarations.h"
struct FParticleSystemReplayFrame
{
	char __padding[0x10L];
	TArray<FParticleEmitterReplayFrame>& EmittersField() { return *GetNativePointerField<TArray<FParticleEmitterReplayFrame>*>(this, "FParticleSystemReplayFrame.Emitters"); }

	// Functions

};

