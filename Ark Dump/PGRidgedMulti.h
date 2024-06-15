#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGRidgedMulti : PGModule
{
	char __padding[0x418L];
	PGNoise& NoiseField() { return *GetNativePointerField<PGNoise*>(this, "PGRidgedMulti.Noise"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGRidgedMulti.GetValue", result, x, y); }
};

