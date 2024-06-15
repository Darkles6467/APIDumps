#pragma once

#include "BaseDeclarations.h"
struct FScreenVertex
{
	char __padding[0x10L];
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FScreenVertex.Position"); }
	FVector2D& UVField() { return *GetNativePointerField<FVector2D*>(this, "FScreenVertex.UV"); }
};

