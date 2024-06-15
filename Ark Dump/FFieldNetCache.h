#pragma once

#include "BaseDeclarations.h"
struct FFieldNetCache
{
	char __padding[0x10L];
	int& FieldNetIndexField() { return *GetNativePointerField<int*>(this, "FFieldNetCache.FieldNetIndex"); }
};

