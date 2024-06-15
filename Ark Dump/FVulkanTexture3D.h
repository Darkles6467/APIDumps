#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture3D.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FVulkanTexture3D : FRHITexture3D
{
	char __padding[0xb8L];

	// Functions

	unsigned int GetRefCount() { return NativeCall<unsigned int>(this, "FVulkanTexture3D.GetRefCount"); }
	void * GetTextureBaseRHI() { return NativeCall<void *>(this, "FVulkanTexture3D.GetTextureBaseRHI"); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FVulkanTexture3D.Release"); }
};

