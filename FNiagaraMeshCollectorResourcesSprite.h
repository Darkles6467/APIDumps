#pragma once

#include "BaseDeclarations.h"
#include "FOneFrameResource.h"

struct FNiagaraMeshCollectorResourcesSprite : FOneFrameResource
{
	char __padding[0x370L];
	TUniformBufferRef<FParticleSpriteUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FParticleSpriteUniformParameters>*>(this, "FNiagaraMeshCollectorResourcesSprite.UniformBuffer"); }

	// Functions

};

