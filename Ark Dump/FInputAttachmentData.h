#pragma once

#include "BaseDeclarations.h"
struct FInputAttachmentData
{
	char __padding[0x4L];
	unsigned __int16& BindingIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FInputAttachmentData.BindingIndex"); }
	char& DescriptorSetField() { return *GetNativePointerField<char*>(this, "FInputAttachmentData.DescriptorSet"); }
	FieldArray<_BYTE, 1> TypeField() { return {this, "FInputAttachmentData.Type"}; }
};

