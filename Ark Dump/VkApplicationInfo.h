#pragma once

#include "BaseDeclarations.h"
struct VkApplicationInfo
{
	char __padding[0x30L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkApplicationInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkApplicationInfo.pNext"); }
	const char * pApplicationNameField() { return GetNativePointerField<const char *>(this, "VkApplicationInfo.pApplicationName"); }
	unsigned int& applicationVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkApplicationInfo.applicationVersion"); }
	const char * pEngineNameField() { return GetNativePointerField<const char *>(this, "VkApplicationInfo.pEngineName"); }
	unsigned int& engineVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkApplicationInfo.engineVersion"); }
	unsigned int& apiVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkApplicationInfo.apiVersion"); }
};

