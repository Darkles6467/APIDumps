#pragma once

#include "BaseDeclarations.h"
struct VkShaderModuleValidationCacheCreateInfoEXT
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkShaderModuleValidationCacheCreateInfoEXT.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkShaderModuleValidationCacheCreateInfoEXT.pNext"); }
	struct VkValidationCacheEXT_T * validationCacheField() { return GetNativePointerField<struct VkValidationCacheEXT_T *>(this, "VkShaderModuleValidationCacheCreateInfoEXT.validationCache"); }
};

