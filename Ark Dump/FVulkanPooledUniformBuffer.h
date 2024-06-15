#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FVulkanPooledUniformBuffer : FRefCountedObject
{
	char __padding[0x70L];
	FVulkanBuffer& BufferField() { return *GetNativePointerField<FVulkanBuffer*>(this, "FVulkanPooledUniformBuffer.Buffer"); }
};

