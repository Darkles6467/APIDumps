#pragma once

#include "BaseDeclarations.h"
#include "FRHIDepthStencilState.h"
#include "FRHIResource.h"

struct FVulkanDepthStencilState : FRHIDepthStencilState
{
	char __padding[0x80L];
	FDepthStencilStateInitializerRHI& InitializerField() { return *GetNativePointerField<FDepthStencilStateInitializerRHI*>(this, "FVulkanDepthStencilState.Initializer"); }
	VkPipelineDepthStencilStateCreateInfo& DepthStencilStateField() { return *GetNativePointerField<VkPipelineDepthStencilStateCreateInfo*>(this, "FVulkanDepthStencilState.DepthStencilState"); }
	char& FrontStencilKeyField() { return *GetNativePointerField<char*>(this, "FVulkanDepthStencilState.FrontStencilKey"); }
	char& BackStencilKeyField() { return *GetNativePointerField<char*>(this, "FVulkanDepthStencilState.BackStencilKey"); }

	// Functions

	bool GetInitializer(FDepthStencilStateInitializerRHI * Out) { return NativeCall<bool, FDepthStencilStateInitializerRHI *>(this, "FVulkanDepthStencilState.GetInitializer", Out); }
	void SetupCreateInfo(const FGraphicsPipelineStateInitializer * GfxPSOInit, VkPipelineDepthStencilStateCreateInfo * OutDepthStencilState) { NativeCall<void, const FGraphicsPipelineStateInitializer *, VkPipelineDepthStencilStateCreateInfo *>(this, "FVulkanDepthStencilState.SetupCreateInfo", GfxPSOInit, OutDepthStencilState); }
};

