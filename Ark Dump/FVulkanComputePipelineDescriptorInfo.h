#pragma once

#include "BaseDeclarations.h"
struct FVulkanComputePipelineDescriptorInfo
{
	char __padding[0x30L];
	const FDescriptorSetRemappingInfo::FUBRemappingInfo * RemappingUBInfosField() { return GetNativePointerField<const FDescriptorSetRemappingInfo::FUBRemappingInfo *>(this, "FVulkanComputePipelineDescriptorInfo.RemappingUBInfos"); }
	const FDescriptorSetRemappingInfo::FRemappingInfo * RemappingGlobalInfosField() { return GetNativePointerField<const FDescriptorSetRemappingInfo::FRemappingInfo *>(this, "FVulkanComputePipelineDescriptorInfo.RemappingGlobalInfos"); }
	const unsigned __int16 * RemappingPackedUBInfosField() { return GetNativePointerField<const unsigned __int16 *>(this, "FVulkanComputePipelineDescriptorInfo.RemappingPackedUBInfos"); }
	unsigned int& HasDescriptorsInSetMaskField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanComputePipelineDescriptorInfo.HasDescriptorsInSetMask"); }
	const FDescriptorSetRemappingInfo * RemappingInfoField() { return GetNativePointerField<const FDescriptorSetRemappingInfo *>(this, "FVulkanComputePipelineDescriptorInfo.RemappingInfo"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FVulkanComputePipelineDescriptorInfo.bInitialized"); }
};

