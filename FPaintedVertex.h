#pragma once

#include "BaseDeclarations.h"
struct FPaintedVertex
{
	char __padding[0x14L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FPaintedVertex.Position"); }
	FPackedNormal& NormalField() { return *GetNativePointerField<FPackedNormal*>(this, "FPaintedVertex.Normal"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FPaintedVertex.Color"); }

	// Functions

};

