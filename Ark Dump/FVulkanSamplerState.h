#pragma once

#include "BaseDeclarations.h"
#include "FRHISamplerState.h"
#include "FRHIResource.h"

struct FVulkanSamplerState : FRHISamplerState
{
	char __padding[0x10L];
	struct VkSampler_T * SamplerField() { return GetNativePointerField<struct VkSampler_T *>(this, "FVulkanSamplerState.Sampler"); }
	bool& bIsImmutableField() { return *GetNativePointerField<bool*>(this, "FVulkanSamplerState.bIsImmutable"); }

	// Functions

	static void SetupSamplerCreateInfo(const FSamplerStateInitializerRHI * Initializer, FVulkanDevice * InDevice, VkSamplerCreateInfo * OutSamplerInfo) { NativeCall<void, const FSamplerStateInitializerRHI *, FVulkanDevice *, VkSamplerCreateInfo *>(nullptr, "FVulkanSamplerState.SetupSamplerCreateInfo", Initializer, InDevice, OutSamplerInfo); }
};

