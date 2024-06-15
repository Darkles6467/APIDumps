#pragma once

#include "BaseDeclarations.h"
struct VkAllocationCallbacks
{
	char __padding[0x30L];
	void * pUserDataField() { return GetNativePointerField<void *>(this, "VkAllocationCallbacks.pUserData"); }
};

