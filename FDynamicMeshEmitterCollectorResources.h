#pragma once

#include "BaseDeclarations.h"
#include "FOneFrameResource.h"

struct FDynamicMeshEmitterCollectorResources : FOneFrameResource
{
	char __padding[0x478L];
	FMeshParticleVertexFactory& VertexFactoryField() { return *GetNativePointerField<FMeshParticleVertexFactory*>(this, "FDynamicMeshEmitterCollectorResources.VertexFactory"); }
	TUniformBufferRef<FParticleSpriteUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FParticleSpriteUniformParameters>*>(this, "FDynamicMeshEmitterCollectorResources.UniformBuffer"); }

	// Functions

};

