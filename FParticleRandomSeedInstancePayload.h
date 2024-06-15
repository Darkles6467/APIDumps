#pragma once

#include "BaseDeclarations.h"
struct FParticleRandomSeedInstancePayload
{
	char __padding[0x8L];
	FRandomStream& RandomStreamField() { return *GetNativePointerField<FRandomStream*>(this, "FParticleRandomSeedInstancePayload.RandomStream"); }
};

