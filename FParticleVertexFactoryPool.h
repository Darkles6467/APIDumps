#pragma once

#include "BaseDeclarations.h"
struct FParticleVertexFactoryPool
{
	char __padding[0xd0L];

	// Functions

	void ClearPoolInternal() { NativeCall<void>(this, "FParticleVertexFactoryPool.ClearPoolInternal"); }
};

