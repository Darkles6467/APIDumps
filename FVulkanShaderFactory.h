#pragma once

#include "BaseDeclarations.h"
struct FVulkanShaderFactory
{
	char __padding[0x1e8L];
	FWindowsRWLock& LockField() { return *GetNativePointerField<FWindowsRWLock*>(this, "FVulkanShaderFactory.Lock"); }
};

