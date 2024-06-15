#pragma once

#include "BaseDeclarations.h"
struct FWidgetTransform
{
	char __padding[0x1cL];
	FVector2D& TranslationField() { return *GetNativePointerField<FVector2D*>(this, "FWidgetTransform.Translation"); }
	FVector2D& ScaleField() { return *GetNativePointerField<FVector2D*>(this, "FWidgetTransform.Scale"); }
	FVector2D& ShearField() { return *GetNativePointerField<FVector2D*>(this, "FWidgetTransform.Shear"); }
	float& AngleField() { return *GetNativePointerField<float*>(this, "FWidgetTransform.Angle"); }

	// Functions

};

