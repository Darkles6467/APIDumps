#pragma once

#include "BaseDeclarations.h"
struct VkPipelineCacheCreateInfo
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineCacheCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineCacheCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineCacheCreateInfo.flags"); }
	unsigned __int64& initialDataSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkPipelineCacheCreateInfo.initialDataSize"); }
	const void * pInitialDataField() { return GetNativePointerField<const void *>(this, "VkPipelineCacheCreateInfo.pInitialData"); }
};

