#pragma once

#include "BaseDeclarations.h"
struct FVariant
{
	char __padding[0x18L];
	int& TypeField() { return *GetNativePointerField<int*>(this, "FVariant.Type"); }
	TArray<unsigned char>& ValueField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVariant.Value"); }
};

