#pragma once

#include "BaseDeclarations.h"
struct FAINoiseEvent
{
	char __padding[0x20L];
	float& AgeField() { return *GetNativePointerField<float*>(this, "FAINoiseEvent.Age"); }
	FVector& NoiseLocationField() { return *GetNativePointerField<FVector*>(this, "FAINoiseEvent.NoiseLocation"); }
	float& LoudnessField() { return *GetNativePointerField<float*>(this, "FAINoiseEvent.Loudness"); }
	FGenericTeamId& TeamIdentifierField() { return *GetNativePointerField<FGenericTeamId*>(this, "FAINoiseEvent.TeamIdentifier"); }

	// Functions

};

