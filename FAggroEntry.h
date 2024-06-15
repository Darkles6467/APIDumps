#pragma once

#include "BaseDeclarations.h"
struct FAggroEntry
{
	char __padding[0x18L];
	float& AggroFactorField() { return *GetNativePointerField<float*>(this, "FAggroEntry.AggroFactor"); }
	long double& LastAggroHitTimeField() { return *GetNativePointerField<long double*>(this, "FAggroEntry.LastAggroHitTime"); }

	// Functions

};

