#pragma once

#include "BaseDeclarations.h"
struct FVulkanVertexInputStateInfo
{
	char __padding[0x2a8L];
	VkPipelineVertexInputStateCreateInfo& InfoField() { return *GetNativePointerField<VkPipelineVertexInputStateCreateInfo*>(this, "FVulkanVertexInputStateInfo.Info"); }
	unsigned int& HashField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanVertexInputStateInfo.Hash"); }
	unsigned int& BindingsNumField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanVertexInputStateInfo.BindingsNum"); }
	unsigned int& BindingsMaskField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanVertexInputStateInfo.BindingsMask"); }
	FieldArray<VkVertexInputBindingDescription, 16> BindingsField() { return {this, "FVulkanVertexInputStateInfo.Bindings"}; }
	unsigned int& AttributesNumField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanVertexInputStateInfo.AttributesNum"); }
	FieldArray<VkVertexInputAttributeDescription, 16> AttributesField() { return {this, "FVulkanVertexInputStateInfo.Attributes"}; }

	// Functions

	void Generate(FVulkanVertexDeclaration * VertexDeclaration, unsigned int VertexHeaderInOutAttributeMask) { NativeCall<void, FVulkanVertexDeclaration *, unsigned int>(this, "FVulkanVertexInputStateInfo.Generate", VertexDeclaration, VertexHeaderInOutAttributeMask); }
};

