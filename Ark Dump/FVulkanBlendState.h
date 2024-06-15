#pragma once

#include "BaseDeclarations.h"
#include "FRHIBlendState.h"
#include "FRHIResource.h"

struct FVulkanBlendState : FRHIBlendState
{
	char __padding[0x148L];
	FieldArray<VkPipelineColorBlendAttachmentState, 8> BlendStatesField() { return {this, "FVulkanBlendState.BlendStates"}; }
	FBlendStateInitializerRHI& InitializerField() { return *GetNativePointerField<FBlendStateInitializerRHI*>(this, "FVulkanBlendState.Initializer"); }
	unsigned __int64& BlendStateKeyField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanBlendState.BlendStateKey"); }

	// Functions

	bool GetInitializer(FBlendStateInitializerRHI * Out) { return NativeCall<bool, FBlendStateInitializerRHI *>(this, "FVulkanBlendState.GetInitializer", Out); }
};

