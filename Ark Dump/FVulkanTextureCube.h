#pragma once

#include "BaseDeclarations.h"
#include "FRHITextureCube.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FVulkanTextureCube : FRHITextureCube
{
	char __padding[0xb8L];

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FVulkanTextureCube.AddRef"); }
	__int64 GetNativeResource() { return NativeCall<__int64>(this, "FVulkanTextureCube.GetNativeResource"); }
};

