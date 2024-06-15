#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSimpleGradient : SCompoundWidget
{
	char __padding[0x60L];
	TAttribute<FLinearColor>& StartColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SSimpleGradient.StartColor"); }
	TAttribute<FLinearColor>& EndColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SSimpleGradient.EndColor"); }
	bool& bHasAlphaBackgroundField() { return *GetNativePointerField<bool*>(this, "SSimpleGradient.bHasAlphaBackground"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SSimpleGradient.Orientation"); }
	TAttribute<bool>& UseSRGBField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SSimpleGradient.UseSRGB"); }
};

