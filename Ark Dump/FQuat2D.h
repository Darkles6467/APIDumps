#pragma once

#include "BaseDeclarations.h"
struct FQuat2D
{
	char __padding[0x8L];
	FVector2D& RotField() { return *GetNativePointerField<FVector2D*>(this, "FQuat2D.Rot"); }
};

