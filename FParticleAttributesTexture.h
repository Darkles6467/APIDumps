#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FParticleAttributesTexture : FRenderResource
{
	char __padding[0x18L];
	bool& bTexturesClearedField() { return *GetNativePointerField<bool*>(this, "FParticleAttributesTexture.bTexturesCleared"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleAttributesTexture.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FParticleAttributesTexture.ReleaseRHI"); }
};

