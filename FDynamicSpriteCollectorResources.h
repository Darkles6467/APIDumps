#pragma once

#include "BaseDeclarations.h"
#include "FOneFrameResource.h"

struct FDynamicSpriteCollectorResources : FOneFrameResource
{
	char __padding[0x370L];
	TUniformBufferRef<FParticleSpriteUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FParticleSpriteUniformParameters>*>(this, "FDynamicSpriteCollectorResources.UniformBuffer"); }

	// Functions

};

