#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FParticleStateTextures : FRenderResource
{
	char __padding[0x28L];
	bool& bTexturesClearedField() { return *GetNativePointerField<bool*>(this, "FParticleStateTextures.bTexturesCleared"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleStateTextures.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FParticleStateTextures.ReleaseRHI"); }
};

