#pragma once

#include "BaseDeclarations.h"
struct FNavPoly
{
	char __padding[0x18L];
	unsigned __int64& RefField() { return *GetNativePointerField<unsigned __int64*>(this, "FNavPoly.Ref"); }
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FNavPoly.Center"); }
};

