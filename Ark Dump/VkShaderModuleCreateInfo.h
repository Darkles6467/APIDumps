#pragma once

#include "BaseDeclarations.h"
struct VkShaderModuleCreateInfo
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkShaderModuleCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkShaderModuleCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkShaderModuleCreateInfo.flags"); }
	unsigned __int64& codeSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkShaderModuleCreateInfo.codeSize"); }
	const unsigned int * pCodeField() { return GetNativePointerField<const unsigned int *>(this, "VkShaderModuleCreateInfo.pCode"); }
};

