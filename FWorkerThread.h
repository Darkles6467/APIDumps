#pragma once

#include "BaseDeclarations.h"
struct FWorkerThread
{
	char __padding[0x18L];
	bool& bAttachedField() { return *GetNativePointerField<bool*>(this, "FWorkerThread.bAttached"); }
};

