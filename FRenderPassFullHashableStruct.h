#pragma once

#include "BaseDeclarations.h"
struct FRenderPassFullHashableStruct
{
	char __padding[0x38L];
	FieldArray<TEnumAsByte<enum VkAttachmentLoadOp>, 10> LoadOpsField() { return {this, "FRenderPassFullHashableStruct.LoadOps"}; }
	FieldArray<TEnumAsByte<enum VkAttachmentStoreOp>, 10> StoreOpsField() { return {this, "FRenderPassFullHashableStruct.StoreOps"}; }
	FieldArray<VkImageLayout, 9> InitialLayoutField() { return {this, "FRenderPassFullHashableStruct.InitialLayout"}; }
};

