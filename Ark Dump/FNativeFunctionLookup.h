#pragma once

#include "BaseDeclarations.h"
struct FNativeFunctionLookup
{
	char __padding[0x10L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FNativeFunctionLookup.Name"); }
};

