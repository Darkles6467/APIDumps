#pragma once

#include "BaseDeclarations.h"
struct VkPipelineViewportStateCreateInfo
{
	char __padding[0x30L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineViewportStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineViewportStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineViewportStateCreateInfo.flags"); }
	unsigned int& viewportCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineViewportStateCreateInfo.viewportCount"); }
	const VkViewport * pViewportsField() { return GetNativePointerField<const VkViewport *>(this, "VkPipelineViewportStateCreateInfo.pViewports"); }
	unsigned int& scissorCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineViewportStateCreateInfo.scissorCount"); }
	const VkRect2D * pScissorsField() { return GetNativePointerField<const VkRect2D *>(this, "VkPipelineViewportStateCreateInfo.pScissors"); }
};

