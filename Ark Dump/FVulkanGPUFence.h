#pragma once

#include "BaseDeclarations.h"
#include "FRHIGPUFence.h"
#include "FRHIResource.h"

struct FVulkanGPUFence : FRHIGPUFence
{
	char __padding[0x10L];
	FVulkanCmdBuffer * CmdBufferField() { return GetNativePointerField<FVulkanCmdBuffer *>(this, "FVulkanGPUFence.CmdBuffer"); }
	unsigned __int64& FenceSignaledCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanGPUFence.FenceSignaledCounter"); }

	// Functions

	bool Poll() { return NativeCall<bool>(this, "FVulkanGPUFence.Poll"); }
};

