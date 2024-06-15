#pragma once

#include "BaseDeclarations.h"
struct PGNoise
{
	char __padding[0x414L];
	FieldArray<char, 512> m_permField() { return {this, "PGNoise.m_perm"}; }
	FieldArray<char, 512> m_perm12Field() { return {this, "PGNoise.m_perm12"}; }
	PGFixed& FractalBoundingField() { return *GetNativePointerField<PGFixed*>(this, "PGNoise.FractalBounding"); }
	PGFixed& FrequencyField() { return *GetNativePointerField<PGFixed*>(this, "PGNoise.Frequency"); }
	PGFixed& LacunarityField() { return *GetNativePointerField<PGFixed*>(this, "PGNoise.Lacunarity"); }
	PGFixed& OctavesField() { return *GetNativePointerField<PGFixed*>(this, "PGNoise.Octaves"); }
	PGFixed& GainField() { return *GetNativePointerField<PGFixed*>(this, "PGNoise.Gain"); }

	// Functions

	void SetSeed(int seed) { NativeCall<void, int>(this, "PGNoise.SetSeed", seed); }
	void CalculateFractalBounding() { NativeCall<void>(this, "PGNoise.CalculateFractalBounding"); }
};

