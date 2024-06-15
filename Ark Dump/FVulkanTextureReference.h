#pragma once

#include "BaseDeclarations.h"
#include "FRHITextureReference.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FVulkanTextureReference : FRHITextureReference
{
	char __padding[0xb8L];

	// Functions

	unsigned int GetRefCount() { return NativeCall<unsigned int>(this, "FVulkanTextureReference.GetRefCount"); }
	void * GetTextureBaseRHI() { return NativeCall<void *>(this, "FVulkanTextureReference.GetTextureBaseRHI"); }
};

