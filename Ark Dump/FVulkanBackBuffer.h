#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture2D.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FVulkanTexture2D : FRHITexture2D
{
	char __padding[0xb8L];

	// Functions

	void * GetTextureBaseRHI() { return NativeCall<void *>(this, "FVulkanTexture2D.GetTextureBaseRHI"); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FVulkanTexture2D.Release"); }
};

struct FVulkanBackBuffer : FVulkanTexture2D
{

	// Functions

};

