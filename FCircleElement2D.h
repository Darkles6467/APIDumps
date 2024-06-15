#pragma once

#include "BaseDeclarations.h"
struct FCircleElement2D
{
	char __padding[0xcL];
	FVector2D& CenterField() { return *GetNativePointerField<FVector2D*>(this, "FCircleElement2D.Center"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FCircleElement2D.Radius"); }

	// Functions

};

