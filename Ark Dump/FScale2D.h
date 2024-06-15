#pragma once

#include "BaseDeclarations.h"
struct FScale2D
{
	char __padding[0x8L];
	FVector2D& ScaleField() { return *GetNativePointerField<FVector2D*>(this, "FScale2D.Scale"); }
};

