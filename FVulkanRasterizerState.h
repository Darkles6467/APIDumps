#pragma once

#include "BaseDeclarations.h"
#include "FRHIRasterizerState.h"
#include "FRHIResource.h"

struct FVulkanRasterizerState : FRHIRasterizerState
{
	char __padding[0x50L];
	VkPipelineRasterizationStateCreateInfo& RasterizerStateField() { return *GetNativePointerField<VkPipelineRasterizationStateCreateInfo*>(this, "FVulkanRasterizerState.RasterizerState"); }
	FRasterizerStateInitializerRHI& InitializerField() { return *GetNativePointerField<FRasterizerStateInitializerRHI*>(this, "FVulkanRasterizerState.Initializer"); }

	// Functions

	bool GetInitializer(FRasterizerStateInitializerRHI * Out) { return NativeCall<bool, FRasterizerStateInitializerRHI *>(this, "FVulkanRasterizerState.GetInitializer", Out); }
};

