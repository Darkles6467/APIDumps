#pragma once

#include "BaseDeclarations.h"
struct FRelativeBitReference
{
	char __padding[0x8L];
	int& DWORDIndexField() { return *GetNativePointerField<int*>(this, "FRelativeBitReference.DWORDIndex"); }
	unsigned int& MaskField() { return *GetNativePointerField<unsigned int*>(this, "FRelativeBitReference.Mask"); }
};

