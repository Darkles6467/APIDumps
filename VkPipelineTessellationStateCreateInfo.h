#pragma once

#include "BaseDeclarations.h"
struct VkPipelineTessellationStateCreateInfo
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineTessellationStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineTessellationStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineTessellationStateCreateInfo.flags"); }
	unsigned int& patchControlPointsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineTessellationStateCreateInfo.patchControlPoints"); }
};

