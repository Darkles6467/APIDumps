#pragma once

#include "BaseDeclarations.h"
struct VkPipelineColorBlendAttachmentState
{
	char __padding[0x20L];
	unsigned int& blendEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineColorBlendAttachmentState.blendEnable"); }
	VkBlendFactor& srcColorBlendFactorField() { return *GetNativePointerField<VkBlendFactor*>(this, "VkPipelineColorBlendAttachmentState.srcColorBlendFactor"); }
	VkBlendFactor& dstColorBlendFactorField() { return *GetNativePointerField<VkBlendFactor*>(this, "VkPipelineColorBlendAttachmentState.dstColorBlendFactor"); }
	VkBlendOp& colorBlendOpField() { return *GetNativePointerField<VkBlendOp*>(this, "VkPipelineColorBlendAttachmentState.colorBlendOp"); }
	VkBlendFactor& srcAlphaBlendFactorField() { return *GetNativePointerField<VkBlendFactor*>(this, "VkPipelineColorBlendAttachmentState.srcAlphaBlendFactor"); }
	VkBlendFactor& dstAlphaBlendFactorField() { return *GetNativePointerField<VkBlendFactor*>(this, "VkPipelineColorBlendAttachmentState.dstAlphaBlendFactor"); }
	VkBlendOp& alphaBlendOpField() { return *GetNativePointerField<VkBlendOp*>(this, "VkPipelineColorBlendAttachmentState.alphaBlendOp"); }
	unsigned int& colorWriteMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineColorBlendAttachmentState.colorWriteMask"); }
};

