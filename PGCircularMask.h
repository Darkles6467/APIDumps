#pragma once

#include "BaseDeclarations.h"
#include "PGModule.h"
#include "PGFixed.h"

struct PGPerlin : PGModule
{
	char __padding[0x418L];
	PGNoise& NoiseField() { return *GetNativePointerField<PGNoise*>(this, "PGPerlin.Noise"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGPerlin.GetValue", result, x, y); }
};

struct PGCircularMask : PGPerlin
{
	char __padding[0x18L];
	PGVector2D& CenterField() { return *GetNativePointerField<PGVector2D*>(this, "PGCircularMask.Center"); }
	PGFixed& ExpField() { return *GetNativePointerField<PGFixed*>(this, "PGCircularMask.Exp"); }
	PGFixed& CircleRadiusField() { return *GetNativePointerField<PGFixed*>(this, "PGCircularMask.CircleRadius"); }
	PGFixed& NoiseAmplitudeField() { return *GetNativePointerField<PGFixed*>(this, "PGCircularMask.NoiseAmplitude"); }

	// Functions

	PGFixed * GetValue(PGFixed * result, PGFixed x, PGFixed y) { return NativeCall<PGFixed *, PGFixed *, PGFixed, PGFixed>(this, "PGCircularMask.GetValue", result, x, y); }
};

