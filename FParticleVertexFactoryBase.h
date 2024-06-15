#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactory.h"

struct FParticleVertexFactoryBase : FVertexFactory
{
	char __padding[0x8L];
	EParticleVertexFactoryType& ParticleFactoryTypeField() { return *GetNativePointerField<EParticleVertexFactoryType*>(this, "FParticleVertexFactoryBase.ParticleFactoryType"); }
	bool& bInUseField() { return *GetNativePointerField<bool*>(this, "FParticleVertexFactoryBase.bInUse"); }
};

