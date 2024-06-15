#pragma once

#include "BaseDeclarations.h"
struct FFourInt
{
	char __padding[0x10L];
	unsigned int& XField() { return *GetNativePointerField<unsigned int*>(this, "FFourInt.X"); }
	unsigned int& YField() { return *GetNativePointerField<unsigned int*>(this, "FFourInt.Y"); }
	unsigned int& ZField() { return *GetNativePointerField<unsigned int*>(this, "FFourInt.Z"); }
	unsigned int& WField() { return *GetNativePointerField<unsigned int*>(this, "FFourInt.W"); }
};

