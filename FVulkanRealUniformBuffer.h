#pragma once

#include "BaseDeclarations.h"
#include "FRHIUniformBuffer.h"
#include "FRHIResource.h"

struct FVulkanUniformBuffer : FRHIUniformBuffer
{
	char __padding[0x20L];
	TArray<unsigned char>& ConstantDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVulkanUniformBuffer.ConstantData"); }

	// Functions

};

struct FVulkanRealUniformBuffer : FVulkanUniformBuffer
{
	char __padding[0x78L];

	// Functions

};

