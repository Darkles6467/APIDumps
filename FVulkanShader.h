#pragma once

#include "BaseDeclarations.h"
#include "IRefCountedObject.h"

struct FVulkanShader : IRefCountedObject
{
	char __padding[0x148L];
	unsigned __int64& ShaderKeyField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanShader.ShaderKey"); }
	FVulkanShaderHeader& CodeHeaderField() { return *GetNativePointerField<FVulkanShaderHeader*>(this, "FVulkanShader.CodeHeader"); }
	const VkShaderStageFlagBits& StageFlagField() { return *GetNativePointerField<const VkShaderStageFlagBits*>(this, "FVulkanShader.StageFlag"); }
	EShaderFrequency& FrequencyField() { return *GetNativePointerField<EShaderFrequency*>(this, "FVulkanShader.Frequency"); }
	TArray<unsigned int>& SpirvField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FVulkanShader.Spirv"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanShader.Device"); }

	// Functions

	VkShaderModule_T * CreateHandle(const FVulkanLayout * Layout, unsigned int LayoutHash) { return NativeCall<VkShaderModule_T *, const FVulkanLayout *, unsigned int>(this, "FVulkanShader.CreateHandle", Layout, LayoutHash); }
	VkShaderModule_T * GetOrCreateHandle(const FVulkanLayout * Layout, unsigned int LayoutHash) { return NativeCall<VkShaderModule_T *, const FVulkanLayout *, unsigned int>(this, "FVulkanShader.GetOrCreateHandle", Layout, LayoutHash); }
	void PurgeShaderModules() { NativeCall<void>(this, "FVulkanShader.PurgeShaderModules"); }
	void Setup(const TArray<unsigned char> * InShaderHeaderAndCode, unsigned __int64 InShaderKey) { NativeCall<void, const TArray<unsigned char> *, unsigned __int64>(this, "FVulkanShader.Setup", InShaderHeaderAndCode, InShaderKey); }
};

