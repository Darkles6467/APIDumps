#pragma once

#include "BaseDeclarations.h"
struct FSlateVertex
{
	char __padding[0x30L];
	FVector4& TexCoordsField() { return *GetNativePointerField<FVector4*>(this, "FSlateVertex.TexCoords"); }
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FSlateVertex.Position"); }
	FSlateRotatedRectHalf& ClipRectField() { return *GetNativePointerField<FSlateRotatedRectHalf*>(this, "FSlateVertex.ClipRect"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FSlateVertex.Color"); }
};

