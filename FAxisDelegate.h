#pragma once

#include "BaseDeclarations.h"
struct FAxisDelegate
{
	char __padding[0x10L];
	UFunction * FuncField() { return GetNativePointerField<UFunction *>(this, "FAxisDelegate.Func"); }
};

