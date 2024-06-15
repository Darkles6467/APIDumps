#pragma once

#include "BaseDeclarations.h"
struct FScriptInterface
{
	char __padding[0x10L];
	void * InterfacePointerField() { return GetNativePointerField<void *>(this, "FScriptInterface.InterfacePointer"); }
};

