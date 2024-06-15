#pragma once

#include "BaseDeclarations.h"
struct VkPipelineRasterizationStateCreateInfo
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineRasterizationStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineRasterizationStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineRasterizationStateCreateInfo.flags"); }
	unsigned int& depthClampEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineRasterizationStateCreateInfo.depthClampEnable"); }
	unsigned int& rasterizerDiscardEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineRasterizationStateCreateInfo.rasterizerDiscardEnable"); }
	VkPolygonMode& polygonModeField() { return *GetNativePointerField<VkPolygonMode*>(this, "VkPipelineRasterizationStateCreateInfo.polygonMode"); }
	unsigned int& cullModeField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineRasterizationStateCreateInfo.cullMode"); }
	VkFrontFace& frontFaceField() { return *GetNativePointerField<VkFrontFace*>(this, "VkPipelineRasterizationStateCreateInfo.frontFace"); }
	unsigned int& depthBiasEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineRasterizationStateCreateInfo.depthBiasEnable"); }
	float& depthBiasConstantFactorField() { return *GetNativePointerField<float*>(this, "VkPipelineRasterizationStateCreateInfo.depthBiasConstantFactor"); }
	float& depthBiasClampField() { return *GetNativePointerField<float*>(this, "VkPipelineRasterizationStateCreateInfo.depthBiasClamp"); }
	float& depthBiasSlopeFactorField() { return *GetNativePointerField<float*>(this, "VkPipelineRasterizationStateCreateInfo.depthBiasSlopeFactor"); }
	float& lineWidthField() { return *GetNativePointerField<float*>(this, "VkPipelineRasterizationStateCreateInfo.lineWidth"); }
};

