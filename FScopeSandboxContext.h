#pragma once

#include "BaseDeclarations.h"
struct FScopeSandboxContext
{
	char __padding[0x1L];
	bool& bSandboxWasEnabledField() { return *GetNativePointerField<bool*>(this, "FScopeSandboxContext.bSandboxWasEnabled"); }
};

