#pragma once

#include "BaseDeclarations.h"
struct VkPipelineDynamicStateCreateInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineDynamicStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineDynamicStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDynamicStateCreateInfo.flags"); }
	unsigned int& dynamicStateCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDynamicStateCreateInfo.dynamicStateCount"); }
	const VkDynamicState * pDynamicStatesField() { return GetNativePointerField<const VkDynamicState *>(this, "VkPipelineDynamicStateCreateInfo.pDynamicStates"); }
};

