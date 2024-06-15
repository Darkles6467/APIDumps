#pragma once

#include "BaseDeclarations.h"
struct FParticleSimulationSortInfo
{
	char __padding[0x18L];
	FVector& ViewOriginField() { return *GetNativePointerField<FVector*>(this, "FParticleSimulationSortInfo.ViewOrigin"); }
	unsigned int& ParticleCountField() { return *GetNativePointerField<unsigned int*>(this, "FParticleSimulationSortInfo.ParticleCount"); }
};

