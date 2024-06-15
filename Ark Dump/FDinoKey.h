#pragma once

#include "BaseDeclarations.h"
struct FDinoKey
{
	char __padding[0x8L];
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoKey.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoKey.DinoID2"); }

	// Functions

	bool operator!=(const FDinoKey * Other) { return NativeCall<bool, const FDinoKey *>(this, "FDinoKey.operator!=", Other); }
};

