#pragma once

#include "BaseDeclarations.h"
struct FBoxElement2D
{
	char __padding[0x14L];
	FVector2D& CenterField() { return *GetNativePointerField<FVector2D*>(this, "FBoxElement2D.Center"); }
	float& WidthField() { return *GetNativePointerField<float*>(this, "FBoxElement2D.Width"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "FBoxElement2D.Height"); }
	float& AngleField() { return *GetNativePointerField<float*>(this, "FBoxElement2D.Angle"); }

	// Functions

};

