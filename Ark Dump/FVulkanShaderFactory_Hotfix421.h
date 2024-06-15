#pragma once

#include "BaseDeclarations.h"
struct FVulkanShaderFactory_Hotfix421
{
	char __padding[0x1e8L];
	FWindowsRWLock& LockField() { return *GetNativePointerField<FWindowsRWLock*>(this, "FVulkanShaderFactory_Hotfix421.Lock"); }
};

