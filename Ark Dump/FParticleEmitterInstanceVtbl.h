#pragma once

#include "BaseDeclarations.h"
struct FParticleEmitterInstanceVtbl
{
	char __padding[0x1f8L];
	FieldArray<_BYTE, 56> gap8Field() { return {this, "FParticleEmitterInstanceVtbl.gap8"}; }
};

