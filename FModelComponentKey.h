#pragma once

#include "BaseDeclarations.h"
struct FModelComponentKey
{
	char __padding[0x10L];
	unsigned int& XField() { return *GetNativePointerField<unsigned int*>(this, "FModelComponentKey.X"); }
	unsigned int& YField() { return *GetNativePointerField<unsigned int*>(this, "FModelComponentKey.Y"); }
	unsigned int& ZField() { return *GetNativePointerField<unsigned int*>(this, "FModelComponentKey.Z"); }
	unsigned int& MaskedPolyFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FModelComponentKey.MaskedPolyFlags"); }
};

