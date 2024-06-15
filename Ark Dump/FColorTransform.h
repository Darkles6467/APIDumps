#pragma once

#include "BaseDeclarations.h"
struct FColorTransform
{
	char __padding[0xcL];
	float& MinValueField() { return *GetNativePointerField<float*>(this, "FColorTransform.MinValue"); }
	float& MidValueField() { return *GetNativePointerField<float*>(this, "FColorTransform.MidValue"); }
	float& MaxValueField() { return *GetNativePointerField<float*>(this, "FColorTransform.MaxValue"); }
};

