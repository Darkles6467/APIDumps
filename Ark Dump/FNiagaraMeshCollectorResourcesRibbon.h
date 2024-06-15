#pragma once

#include "BaseDeclarations.h"
#include "FOneFrameResource.h"

struct FNiagaraMeshCollectorResourcesRibbon : FOneFrameResource
{
	char __padding[0x370L];
	FParticleBeamTrailVertexFactory& VertexFactoryField() { return *GetNativePointerField<FParticleBeamTrailVertexFactory*>(this, "FNiagaraMeshCollectorResourcesRibbon.VertexFactory"); }
	TUniformBufferRef<FParticleBeamTrailUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FParticleBeamTrailUniformParameters>*>(this, "FNiagaraMeshCollectorResourcesRibbon.UniformBuffer"); }

	// Functions

};

