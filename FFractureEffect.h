#pragma once

#include "BaseDeclarations.h"
struct FFractureEffect
{
	char __padding[0x10L];
	UParticleSystem * ParticleSystemField() { return GetNativePointerField<UParticleSystem *>(this, "FFractureEffect.ParticleSystem"); }

	// Functions

};

