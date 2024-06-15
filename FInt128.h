#pragma once

#include "BaseDeclarations.h"
struct FInt128
{
	char __padding[0x10L];
	__int64& LowField() { return *GetNativePointerField<__int64*>(this, "FInt128.Low"); }
	__int64& HighField() { return *GetNativePointerField<__int64*>(this, "FInt128.High"); }
};

