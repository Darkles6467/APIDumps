#pragma once

#include "BaseDeclarations.h"
struct VkValidationCacheCreateInfoEXT
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkValidationCacheCreateInfoEXT.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkValidationCacheCreateInfoEXT.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkValidationCacheCreateInfoEXT.flags"); }
	unsigned __int64& initialDataSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkValidationCacheCreateInfoEXT.initialDataSize"); }
	const void * pInitialDataField() { return GetNativePointerField<const void *>(this, "VkValidationCacheCreateInfoEXT.pInitialData"); }
};

