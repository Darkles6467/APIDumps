#pragma once

#include "BaseDeclarations.h"
struct FParticleRandomSeedInfo
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FParticleRandomSeedInfo.ParameterName"); }
	TArray<int>& RandomSeedsField() { return *GetNativePointerField<TArray<int>*>(this, "FParticleRandomSeedInfo.RandomSeeds"); }

	// Functions

};

