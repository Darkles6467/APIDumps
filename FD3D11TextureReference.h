#pragma once

#include "BaseDeclarations.h"
#include "FRHITextureReference.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FD3D11TextureReference : FRHITextureReference
{
	char __padding[0x88L];

	// Functions

	void SetReferencedTexture(FRHITexture * InTexture, FD3D11BaseShaderResource * InBaseShaderResource, ID3D11ShaderResourceView * InSRV) { NativeCall<void, FRHITexture *, FD3D11BaseShaderResource *, ID3D11ShaderResourceView *>(this, "FD3D11TextureReference.SetReferencedTexture", InTexture, InBaseShaderResource, InSRV); }
};

