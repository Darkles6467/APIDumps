#pragma once

#include "BaseDeclarations.h"
struct VkPipelineDepthStencilStateCreateInfo
{
	char __padding[0x68L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineDepthStencilStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineDepthStencilStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDepthStencilStateCreateInfo.flags"); }
	unsigned int& depthTestEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDepthStencilStateCreateInfo.depthTestEnable"); }
	unsigned int& depthWriteEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDepthStencilStateCreateInfo.depthWriteEnable"); }
	VkCompareOp& depthCompareOpField() { return *GetNativePointerField<VkCompareOp*>(this, "VkPipelineDepthStencilStateCreateInfo.depthCompareOp"); }
	unsigned int& depthBoundsTestEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDepthStencilStateCreateInfo.depthBoundsTestEnable"); }
	unsigned int& stencilTestEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineDepthStencilStateCreateInfo.stencilTestEnable"); }
	VkStencilOpState& frontField() { return *GetNativePointerField<VkStencilOpState*>(this, "VkPipelineDepthStencilStateCreateInfo.front"); }
	VkStencilOpState& backField() { return *GetNativePointerField<VkStencilOpState*>(this, "VkPipelineDepthStencilStateCreateInfo.back"); }
	float& minDepthBoundsField() { return *GetNativePointerField<float*>(this, "VkPipelineDepthStencilStateCreateInfo.minDepthBounds"); }
	float& maxDepthBoundsField() { return *GetNativePointerField<float*>(this, "VkPipelineDepthStencilStateCreateInfo.maxDepthBounds"); }
};

