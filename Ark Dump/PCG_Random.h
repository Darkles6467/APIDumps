#pragma once

#include "BaseDeclarations.h"
struct PCG_Random
{
	char __padding[0x10L];
	PCG_Random::pcg_state_setseq_64& rngField() { return *GetNativePointerField<PCG_Random::pcg_state_setseq_64*>(this, "PCG_Random.rng"); }

	// Functions

	unsigned int pcg32_boundedrand_r(unsigned int bound) { return NativeCall<unsigned int, unsigned int>(this, "PCG_Random.pcg32_boundedrand_r", bound); }
};

