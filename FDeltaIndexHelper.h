#pragma once

#include "BaseDeclarations.h"
struct FDeltaIndexHelper
{
	char __padding[0x8L];
	int& LastIndexField() { return *GetNativePointerField<int*>(this, "FDeltaIndexHelper.LastIndex"); }
	int& LastIndexFullField() { return *GetNativePointerField<int*>(this, "FDeltaIndexHelper.LastIndexFull"); }
};

