#pragma once

#include "BaseDeclarations.h"
struct FDefinedProperty
{
	char __padding[0x10L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FDefinedProperty.Index"); }
};

