#pragma once

#include "BaseDeclarations.h"
#include "FRHIGraphicsPipelineState.h"
#include "FRHIResource.h"

struct FVulkanRHIGraphicsPipelineState : FRHIGraphicsPipelineState
{
	char __padding[0x28L];
	TRefCountPtr<FVulkanGfxPipeline>& PipelineField() { return *GetNativePointerField<TRefCountPtr<FVulkanGfxPipeline>*>(this, "FVulkanRHIGraphicsPipelineState.Pipeline"); }
	FieldArray<unsigned __int64[3], 643> ShaderKeysField() { return {this, "FVulkanRHIGraphicsPipelineState.ShaderKeys"}; }
	TEnumAsByte<enum EPrimitiveType>& PrimitiveTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimitiveType>*>(this, "FVulkanRHIGraphicsPipelineState.PrimitiveType"); }
	bool& bHasInputAttachmentsField() { return *GetNativePointerField<bool*>(this, "FVulkanRHIGraphicsPipelineState.bHasInputAttachments"); }

	// Functions

};

