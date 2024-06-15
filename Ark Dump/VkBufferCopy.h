#pragma once

#include "BaseDeclarations.h"
struct VkBufferCopy
{
	char __padding[0x18L];
	unsigned __int64& srcOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferCopy.srcOffset"); }
	unsigned __int64& dstOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferCopy.dstOffset"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferCopy.size"); }
};

