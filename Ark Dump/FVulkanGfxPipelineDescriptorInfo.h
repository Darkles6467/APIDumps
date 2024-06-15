#pragma once

#include "BaseDeclarations.h"
struct FVulkanGfxPipelineDescriptorInfo
{
	char __padding[0x60L];
	FieldArray<const FDescriptorSetRemappingInfo::FUBRemappingInfo *, 3> RemappingUBInfosField() { return {this, "FVulkanGfxPipelineDescriptorInfo.RemappingUBInfos"}; }
	FieldArray<const FDescriptorSetRemappingInfo::FRemappingInfo *, 3> RemappingGlobalInfosField() { return {this, "FVulkanGfxPipelineDescriptorInfo.RemappingGlobalInfos"}; }
	FieldArray<const unsigned __int16 *, 3> RemappingPackedUBInfosField() { return {this, "FVulkanGfxPipelineDescriptorInfo.RemappingPackedUBInfos"}; }
	unsigned int& HasDescriptorsInSetMaskField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanGfxPipelineDescriptorInfo.HasDescriptorsInSetMask"); }
	const FDescriptorSetRemappingInfo * RemappingInfoField() { return GetNativePointerField<const FDescriptorSetRemappingInfo *>(this, "FVulkanGfxPipelineDescriptorInfo.RemappingInfo"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FVulkanGfxPipelineDescriptorInfo.bInitialized"); }

	// Functions

	void Initialize(const FDescriptorSetRemappingInfo * InRemappingInfo) { NativeCall<void, const FDescriptorSetRemappingInfo *>(this, "FVulkanGfxPipelineDescriptorInfo.Initialize", InRemappingInfo); }
};

