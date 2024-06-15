#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"

struct PGBillow : PGModule
{
	char __padding[0x418L];
	PGNoise& NoiseField() { return *GetNativePointerField<PGNoise*>(this, "PGBillow.Noise"); }

	// Functions

};

