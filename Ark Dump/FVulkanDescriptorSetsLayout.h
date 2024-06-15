#pragma once

#include "BaseDeclarations.h"
struct FVulkanDescriptorSetsLayoutInfo
{
	char __padding[0x110L];
	FieldArray<unsigned int, 11> LayoutTypesField() { return {this, "FVulkanDescriptorSetsLayoutInfo.LayoutTypes"}; }
	unsigned int& HashField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorSetsLayoutInfo.Hash"); }
	unsigned int& TypesUsageIDField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorSetsLayoutInfo.TypesUsageID"); }
	FDescriptorSetRemappingInfo& RemappingInfoField() { return *GetNativePointerField<FDescriptorSetRemappingInfo*>(this, "FVulkanDescriptorSetsLayoutInfo.RemappingInfo"); }

	// Functions

	bool operator==(const FVulkanDescriptorSetsLayoutInfo * In) { return NativeCall<bool, const FVulkanDescriptorSetsLayoutInfo *>(this, "FVulkanDescriptorSetsLayoutInfo.operator==", In); }
	void AddDescriptor(int DescriptorSetIndex, const VkDescriptorSetLayoutBinding * Descriptor) { NativeCall<void, int, const VkDescriptorSetLayoutBinding *>(this, "FVulkanDescriptorSetsLayoutInfo.AddDescriptor", DescriptorSetIndex, Descriptor); }
	void CompileTypesUsageID() { NativeCall<void>(this, "FVulkanDescriptorSetsLayoutInfo.CompileTypesUsageID"); }
	void CopyFrom(const FVulkanDescriptorSetsLayoutInfo * Info) { NativeCall<void, const FVulkanDescriptorSetsLayoutInfo *>(this, "FVulkanDescriptorSetsLayoutInfo.CopyFrom", Info); }
	void GenerateHash(const TArrayView<FRHISamplerState * const> * InImmutableSamplers) { NativeCall<void, const TArrayView<FRHISamplerState * const> *>(this, "FVulkanDescriptorSetsLayoutInfo.GenerateHash", InImmutableSamplers); }
	void ProcessBindingsForStage(VkShaderStageFlagBits StageFlags, ShaderStage::EStage DescSetStage, const FVulkanShaderHeader * CodeHeader, FUniformBufferGatherInfo * OutUBGatherInfo) { NativeCall<void, VkShaderStageFlagBits, ShaderStage::EStage, const FVulkanShaderHeader *, FUniformBufferGatherInfo *>(this, "FVulkanDescriptorSetsLayoutInfo.ProcessBindingsForStage", StageFlags, DescSetStage, CodeHeader, OutUBGatherInfo); }
};

struct FVulkanDescriptorSetsLayout : FVulkanDescriptorSetsLayoutInfo
{
	char __padding[0x40L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanDescriptorSetsLayout.Device"); }
	TArray<VkDescriptorSetLayout_T *>& LayoutHandlesField() { return *GetNativePointerField<TArray<VkDescriptorSetLayout_T *>*>(this, "FVulkanDescriptorSetsLayout.LayoutHandles"); }
	VkDescriptorSetAllocateInfo& DescriptorSetAllocateInfoField() { return *GetNativePointerField<VkDescriptorSetAllocateInfo*>(this, "FVulkanDescriptorSetsLayout.DescriptorSetAllocateInfo"); }

	// Functions

	void Compile() { NativeCall<void>(this, "FVulkanDescriptorSetsLayout.Compile"); }
};

