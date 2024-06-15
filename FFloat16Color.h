#pragma once

#include "BaseDeclarations.h"
struct FFloat16Color
{
	char __padding[0x8L];
	FFloat16& RField() { return *GetNativePointerField<FFloat16*>(this, "FFloat16Color.R"); }
	FFloat16& GField() { return *GetNativePointerField<FFloat16*>(this, "FFloat16Color.G"); }
	FFloat16& BField() { return *GetNativePointerField<FFloat16*>(this, "FFloat16Color.B"); }
	FFloat16& AField() { return *GetNativePointerField<FFloat16*>(this, "FFloat16Color.A"); }
};

