#pragma once

#include "BaseDeclarations.h"
struct FRenderPassCompatibleHashableStruct
{
	char __padding[0x28L];
	char& NumAttachmentsField() { return *GetNativePointerField<char*>(this, "FRenderPassCompatibleHashableStruct.NumAttachments"); }
	char& NumSamplesField() { return *GetNativePointerField<char*>(this, "FRenderPassCompatibleHashableStruct.NumSamples"); }
	FieldArray<VkFormat, 9> FormatsField() { return {this, "FRenderPassCompatibleHashableStruct.Formats"}; }
};

