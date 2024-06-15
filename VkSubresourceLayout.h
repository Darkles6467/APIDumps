#pragma once

#include "BaseDeclarations.h"
struct VkSubresourceLayout
{
	char __padding[0x28L];
	unsigned __int64& offsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSubresourceLayout.offset"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSubresourceLayout.size"); }
	unsigned __int64& rowPitchField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSubresourceLayout.rowPitch"); }
	unsigned __int64& arrayPitchField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSubresourceLayout.arrayPitch"); }
	unsigned __int64& depthPitchField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSubresourceLayout.depthPitch"); }
};

