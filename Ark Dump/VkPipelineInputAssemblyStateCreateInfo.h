#pragma once

#include "BaseDeclarations.h"
struct VkPipelineInputAssemblyStateCreateInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineInputAssemblyStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineInputAssemblyStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineInputAssemblyStateCreateInfo.flags"); }
	VkPrimitiveTopology& topologyField() { return *GetNativePointerField<VkPrimitiveTopology*>(this, "VkPipelineInputAssemblyStateCreateInfo.topology"); }
	unsigned int& primitiveRestartEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineInputAssemblyStateCreateInfo.primitiveRestartEnable"); }
};

