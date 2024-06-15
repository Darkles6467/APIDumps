#pragma once

#include "BaseDeclarations.h"
struct FSlateLayoutTransform
{
	char __padding[0xcL];
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FSlateLayoutTransform.Scale"); }
	FVector2D& TranslationField() { return *GetNativePointerField<FVector2D*>(this, "FSlateLayoutTransform.Translation"); }

	// Functions

};

