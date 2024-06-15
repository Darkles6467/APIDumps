#pragma once

#include "BaseDeclarations.h"
struct FMinimalName
{
	char __padding[0x8L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FMinimalName.Index"); }
	int& NumberField() { return *GetNativePointerField<int*>(this, "FMinimalName.Number"); }
};

