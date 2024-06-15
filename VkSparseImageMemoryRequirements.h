#pragma once

#include "BaseDeclarations.h"
struct VkSparseImageMemoryRequirements
{
	char __padding[0x30L];
	VkSparseImageFormatProperties& formatPropertiesField() { return *GetNativePointerField<VkSparseImageFormatProperties*>(this, "VkSparseImageMemoryRequirements.formatProperties"); }
	unsigned int& imageMipTailFirstLodField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseImageMemoryRequirements.imageMipTailFirstLod"); }
	unsigned __int64& imageMipTailSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseImageMemoryRequirements.imageMipTailSize"); }
	unsigned __int64& imageMipTailOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseImageMemoryRequirements.imageMipTailOffset"); }
	unsigned __int64& imageMipTailStrideField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseImageMemoryRequirements.imageMipTailStride"); }
};

