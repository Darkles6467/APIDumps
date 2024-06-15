#pragma once

#include "BaseDeclarations.h"
struct FScrollHelper
{
	char __padding[0x8L];
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FScrollHelper.Position"); }
};

